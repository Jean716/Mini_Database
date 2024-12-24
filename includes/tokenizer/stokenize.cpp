
#include <cctype> 
#include <cstring> 
#include <string> 
#include <iostream> 
#include <iomanip> 
#include "../../includes/token/token.h"
#include "../../includes/token/child_tokens.h"  
#include "../../includes/tokenizer/constants.h"
#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/tokenizer/stokenize.h" 
using namespace std;

STokenizer::STokenizer() {
    memset(_buffer, '\0', sizeof(_buffer));
    _pos = 0;
    make_table(_table);
    _done = false;
    }

STokenizer::STokenizer(char str[]) {
    // cout << "STokenizer constructor called with input: " << str << endl;
    set_string(str);
    _pos = 0;
    make_table(_table);
    _done = false;

    }

bool STokenizer::done() {
    return _done;
    }

bool STokenizer::more() {
    bool result = _pos < strlen(_buffer) + 1 && !_done;
    return result;
    }


void STokenizer::set_string(const char str[]) {
    cout << "STokenizer::set_string called with input: " << str << endl;
    strncpy(_buffer, str, MAX_BUFFER - 1);
    _pos = 0;
    _done = false;
    }

void STokenizer::make_table(int _table[][MAX_COLUMNS]) {
    // cout << "STokenizer::make_table called." << endl;
    init_table(_table);
    setup_number_state(_table);
    setup_number_state(_table);
    setup_alpha_state(_table);
    setup_space_state(_table);
    setup_special_character_state(_table);
    setup_relational_state(_table);
    setup_string_state(_table);
    setup_name_state(_table);
    }



bool STokenizer::get_token(int& start_state, string & token) {
    token.clear();
    int state = start_state;
    int last_success_state = -1;
    int last_pos = _pos;

    while (_pos < strlen(_buffer)) {
        char current_char = _buffer[_pos];
        state = _table[state][static_cast<unsigned char>(current_char)];
        if (state == -1)  break;

        token += current_char;
        _pos++;



        //----------------------------------------------------------
        //Handl the case where the token is a relational operator
        if (state == RELATIONAL_STATE) {
            if (_pos < strlen(_buffer)) {
                char next_char = _buffer[_pos];
                if (next_char == '=') {
                    token += next_char;
                    _pos++;
                    }
                }
            }
        //----------------------------------------------------------
        // Handle string tokens and remove quotes
        if (state == STRING_STATE) {
            if (token.size() > 1 && token[0] == '"' && token[token.size() - 1] == '"') {
                string unquoted_token = "";
                for (size_t i = 1; i < token.size() - 1; ++i) {
                    unquoted_token += token[i];
                    }
                token = unquoted_token; // Replace original token with unquoted version
                }
            }

        //----------------------------------------------------------
        // Special case: name token
        if (state == ALFA_STATE) {
            size_t next_pos = _pos + 1;

            // Skip spaces
            while (next_pos < strlen(_buffer) && _buffer[next_pos] == ' ') {
                next_pos++;
                }

            //  case1: name token (ALFA + DOT)
            // cout << "Checking for ALFA + DOT. Current char: " << _buffer[_pos]
            //     << ", Next char: " << _buffer[next_pos]
            //     << ", Position: " << _pos << endl;

            if (next_pos < strlen(_buffer) && isalpha(_buffer[next_pos]) && _buffer[next_pos + 2] == '.') {
                // cout << "ALFA + DOT detected. Combining token: '"
                //     << _buffer[next_pos] << "." << "'" << endl;

                token += ' ';  // Add the space
                token += _buffer[next_pos];  // Add the ALFA
                token += _buffer[next_pos + 1];  // Add the DOT
                _pos = next_pos + 2;  // Update _pos after ALFA + DOT
                state = NAME_STATE;  // Transition to NAME_STATE
                //cout << "Combined token so far: " << token << ". Updated position: " << _pos << endl;

                }
            else {
                // cout << "ALFA + DOT not detected. Retaining ALFA_STATE. Current token: " << token << endl;

                state = ALFA_STATE;
                }
            }
        //----------------------------------------------------------
       // check if the current state is a success state
        if (is_success(_table, state)) {
            last_success_state = state;
            last_pos = _pos;
            }
        }

    if (last_success_state != -1) {
        _pos = last_pos;
        start_state = last_success_state;
        return true;
        }

    _done = true;
    return false;
    }




STokenizer& operator>>(STokenizer & s, Token * &t) {
    string token_str;
    int last_success_state = 0;
    static bool is_keyword = false;  // Track if we're in the 'values' section

    if (s.get_token(last_success_state, token_str)) {


        switch (last_success_state) {
                case NUMBER_STATE:
                    t = new NumberToken(token_str);
                    break;
                case STRING_STATE:
                    if (token_str == "and" || token_str == "or" || token_str == "not") {
                        t = new LogicalOperatorToken(token_str);
                        }
                    t = new StringToken(token_str);
                    break;
                case ALFA_STATE:
                    if (token_str == "and" || token_str == "or" || token_str == "not") {
                        t = new LogicalOperatorToken(token_str);
                        }
                    else {
                        t = new ALFAToken(token_str);
                        }
                    break;
                case SPACE_STATE:
                    t = new SpaceToken();
                    break;
                case COMMA_STATE:
                    t = new CommaToken();
                    break;
                case ASTERISK_STATE:
                    t = new AsteriskToken();
                    break;

                case LEFT_PAREN_STATE:
                    t = new LeftParenToken();
                    break;
                case RIGHT_PAREN_STATE:
                    t = new RightParenToken();
                    break;
                case RELATIONAL_STATE:
                    t = new RelationalOperatorToken(token_str);
                    break;
                case NAME_STATE:
                    t = new ALFAToken(token_str);
                    break;

                    break;
                default:
                    throw runtime_error("Unrecognized token: " + token_str);
            }
        }

    else {
        s._done = true;
        t = nullptr;
        }
    return s;
    }





int STokenizer::_table[MAX_ROWS][MAX_COLUMNS];


void STokenizer::setup_alpha_state(int _table[][MAX_COLUMNS]) {
    mark_success(_table, ALFA_STATE);
    mark_cells(START_STATE, _table, ALFA, ALFA_STATE);
    mark_cells(ALFA_STATE, _table, ALFA, ALFA_STATE);
    mark_cells(ALFA_STATE, _table, DIGITS, ALFA_STATE);
    mark_cell(START_STATE, _table, '_', ALFA_STATE);  // underscore 
    mark_cell(ALFA_STATE, _table, '_', ALFA_STATE);
    mark_cell(ALFA_STATE, _table, '.', ALFA_STATE);



    }

void STokenizer::setup_number_state(int _table[][MAX_COLUMNS]) {
    mark_fail(_table, START_STATE);
    mark_success(_table, NUMBER_STATE);
    mark_success(_table, DECIMAL_STATE);
    mark_cells(START_STATE, _table, DIGITS, NUMBER_STATE);
    mark_cells(NUMBER_STATE, _table, DIGITS, NUMBER_STATE);
    mark_cell(NUMBER_STATE, _table, '.', DECIMAL_STATE);
    mark_cells(DECIMAL_STATE, _table, DIGITS, DECIMAL_STATE);
    }

void STokenizer::setup_relational_state(int _table[][MAX_COLUMNS]) {
    mark_success(_table, RELATIONAL_STATE);
    mark_cell(START_STATE, _table, '>', RELATIONAL_STATE);
    mark_cell(START_STATE, _table, '<', RELATIONAL_STATE);
    mark_cell(START_STATE, _table, '=', RELATIONAL_STATE);
    mark_cell(START_STATE, _table, '!', RELATIONAL_STATE);
    mark_cell('>', _table, '=', RELATIONAL_STATE);
    mark_cell('<', _table, '=', RELATIONAL_STATE);
    mark_cell('!', _table, '=', RELATIONAL_STATE);
    }

void STokenizer::setup_string_state(int _table[][MAX_COLUMNS]) {
    const int OPEN_STRING_STATE = 11;

    mark_success(_table, STRING_STATE);
    mark_fail(_table, OPEN_STRING_STATE);
    mark_cell(START_STATE, _table, '"', OPEN_STRING_STATE);
    mark_cells(OPEN_STRING_STATE, _table, ALFA, OPEN_STRING_STATE);
    mark_cells(OPEN_STRING_STATE, _table, DIGITS, OPEN_STRING_STATE);
    mark_cells(OPEN_STRING_STATE, _table, SPACES, OPEN_STRING_STATE);
    mark_cells(OPEN_STRING_STATE, _table, PUNC, OPEN_STRING_STATE);
    mark_cell(OPEN_STRING_STATE, _table, '"', STRING_STATE);
    }



void STokenizer::setup_special_character_state(int _table[][MAX_COLUMNS]) {
    mark_success(_table, COMMA_STATE);
    mark_cell(START_STATE, _table, ',', COMMA_STATE);

    mark_success(_table, ASTERISK_STATE);
    mark_cell(START_STATE, _table, '*', ASTERISK_STATE);

    mark_success(_table, LEFT_PAREN_STATE);
    mark_cell(START_STATE, _table, '(', LEFT_PAREN_STATE);

    mark_success(_table, RIGHT_PAREN_STATE);
    mark_cell(START_STATE, _table, ')', RIGHT_PAREN_STATE);
    }

void STokenizer::setup_space_state(int _table[][MAX_COLUMNS]) {
    mark_success(_table, SPACE_STATE);
    mark_cells(START_STATE, _table, SPACES, SPACE_STATE);

    }

void STokenizer::setup_name_state(int _table[][MAX_COLUMNS]) {
    mark_success(_table, NAME_STATE);
    mark_cell(ALFA_STATE, _table, '.', NAME_STATE);
    }
