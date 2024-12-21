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
using namespace Constants;

STokenizer::STokenizer() {
    cout << "-[0]-STokenizer default constructor called!" << endl;
    memset(_buffer, '\0', sizeof(_buffer));
    _pos = 0;
    make_table(_table);
    _done = false;
    }

STokenizer::STokenizer(char str[]) {
    cout << "-[0]-STokenizer constructor called with input: " << str << endl;
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
    cout << "-[0]-STokenizer::set_string called with input: " << str << endl;
    strcpy(_buffer, str);
    _pos = 0;
    _done = false;
    cout << "-[22]-STokenizer::set_string Done!" << endl;

    }

void STokenizer::make_table(int _table[][MAX_COLUMNS]) {
    cout << "-[0]-STokenizer::make_table Fired!" << endl;
    init_table(_table);
    setup_number_states(_table);
    setup_relational_operator_states(_table);
    setup_alpha_states(_table);
    setup_parentheses_states(_table);
    setup_asterisk_states(_table);
    setup_space_states(_table);
    setup_logical_operator_states(_table);
    setup_punctuation_states(_table);
    setup_string_states(_table);
    setup_comma_states(_table);

    //     mark_fail(_table, 0);     // 0: START_STATE （fail）

    //     // **1. numner**
    //     mark_success(_table, 1);  // 1: DIGIT_STATE
    //     mark_fail(_table, 2);     // 2: DECIMAL_POINT_STATE（fail）
    //     mark_success(_table, 3);  // 3: FRACTION_STATE

    //     mark_cells(0, _table, DIGITS, 1); //START -> DIGITS - > DIGIT_STATE
    //     mark_cell(1, _table, '.', 2);     //DIGITS -> '.' -> DECIMAL_POINT_STATE
    //     mark_cells(2, _table, DIGITS, 3); // '.' -> DIGITES -> FRACTION_STATE

    //     //----------------------------------------------------------
    //     // **2. RELATIONAL OPERATOR**
    //     mark_success(_table, 4);  // 4: REL_OP_STATE
    //     mark_success(_table, 5);  // 5: REL_OP_EQUAL_STATE

    //     mark_cells(0, _table, RELATIONAL_OPERATORS, 4);//  RELATIONAL_OPERATORS -> REL_OP_STATE
    //     mark_cell(4, _table, '=', 5); // REL_OP_STATE -> '=' -> REL_OP_EQUAL_STATE

    //     //----------------------------------------------------------
    //    // **3. ALPHA and name with dot and underscore **
    //     mark_success(_table, 6);  // 6: ALPHA_STATE

    //     mark_cells(0, _table, ALFA, 6);
    //     mark_cell(0, _table, '_', 6);

    //     mark_cells(6, _table, ALFA, 6);
    //     mark_cells(6, _table, DIGITS, 6);
    //     mark_cell(6, _table, '_', 6);
    //     mark_cell(6, _table, '.', 6);

    //     //----------------------------------------------------------
    //     // ** 4. parentheses **
    //     mark_success(_table, 7);  // 7: LEFT_PAREN_STATE
    //     mark_success(_table, 8);  // 8: RIGHT_PAREN_STATE

    //     mark_cell(0, _table, '(', 7);
    //     mark_cell(0, _table, ')', 8);

    //     //----------------------------------------------------------
    //     // ** 5. ASTERISK **
    //     mark_success(_table, 9);  // 9: ASTERISK_STATE
    //     mark_cell(0, _table, '*', 9);

    //     //----------------------------------------------------------
    //     // ** 6. SPACES **
    //     mark_success(_table, 10); // 10: SPACE_STATE
    //     mark_cells(0, _table, SPACES, 10);
    //     mark_cells(10, _table, SPACES, 10);

    //     //----------------------------------------------------------
    //     // ** 7. LOGICAL **
    //     mark_success(_table, 11); // 11: LOGICAL_OP_STATE
    //     //----------------------------------------------------------
    //     // ** 8. PUNC **
    //     mark_success(_table, 12); // 12: PUNC_STATE
    //     //----------------------------------------------------------
    //     // ** 9. String **
    //     mark_fail(_table, 13); // 13: OPEN_ESCAPE_STATE
    //     mark_fail(_table, 14); // 14: OPEN_QUOTE_STATE
    //     mark_success(_table, 15); // 15: STRING__CONTENT_STATE
    //     mark_fail(_table, 16); // 16: CLOSE_ESCAPE_STATE
    //     mark_success(_table, 17); // 17: CLOSE_QUOTE_STATE  

    //     mark_cells(0, _table, QUOTES, 14);

    //     mark_cells(0, _table, QUOTES, 14);

    //     mark_cells(14, _table, ALFA, 15); // 14: OPEN_QUOTE_STATE -> ALFA -> 15: STRING__CONTENT_STATE
    //     mark_cells(14, _table, DIGITS, 15);// 14: OPEN_QUOTE_STATE -> DIGITS -> 15: STRING__CONTENT_STATE
    //     mark_cells(14, _table, SPACES, 15);// 14: OPEN_QUOTE_STATE -> SPACES -> 15: STRING__CONTENT_STATE
    //     mark_cells(14, _table, PUNC, 15);// 14: OPEN_QUOTE_STATE -> PUNC -> 15: STRING__CONTENT_STATE
    //     mark_cells(14, _table, ESCAPE, 13);

    //     mark_cells(13, _table, QUOTES, 15);
    //     mark_cells(16, _table, QUOTES, 15);


    //     mark_cells(15, _table, QUOTES, 17);

    //     //----------------------------------------------------------
    //     // ** 10. Comma **
    //     mark_success(_table, 18); // 18: COMMA_STATE
    //     mark_cell(0, _table, ',', 18);
    cout << "-[1]-STokenizer::make_table Done!" << endl;
    }

bool STokenizer::get_token(int& start_state, string & token) {
    cout << "-[0]-STokenizer::get_token Fired!" << endl;
    token.clear();
    int state = start_state;
    int last_success_state = -1;
    int last_pos = _pos;

    cout << "Initial state: " << state << ", _pos: " << _pos << endl;

    while (_pos < strlen(_buffer)) {
        char current_char = _buffer[_pos];
        cout << "Current char: '" << current_char << "', ASCII: " << static_cast<int>(current_char) << endl;

        state = _table[state][static_cast<unsigned char>(current_char)];
        cout << "Transitioned to state: " << state << endl;

        if (state == -1) {
            cout << "Encountered invalid state. Breaking loop." << endl;
            break;
            }

        token += current_char;
        _pos++;
        cout << "Token so far: '" << token << "', _pos: " << _pos << endl;

        if (is_success(_table, state)) {
            last_success_state = state;
            last_pos = _pos;
            cout << "Success state: " << last_success_state << ", last_pos: " << last_pos << endl;
            }
        }

    if (last_success_state != -1) {
        _pos = last_pos;
        start_state = last_success_state;
        cout << "Final token: '" << token << "', final state: " << start_state << ", _pos: " << _pos << endl;

        if (start_state == STRING_STATE && token.size() >= 2 && token.front() == '"' && token.back() == '"') {
            token = token.substr(1, token.size() - 2);
            cout << "Trimmed quotes from token: '" << token << "'" << endl;
            }

        return true;
        }

    _done = true;
    cout << "No valid token found. Marking as done." << endl;
    return false;
    }


STokenizer& operator>>(STokenizer & s, Token * &t) {
    string token_str;
    int last_success_state = 0;
    static bool is_keyword = false;  // Track if we're in the 'values' section

    if (s.get_token(last_success_state, token_str)) {
        switch (last_success_state) {
                case DIGITS_STATE:
                case FRACTION_STATE:
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
                        t = new ALPHAToken(token_str);
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
                case REL_OP_STATE:
                case REL_OP_EQUAL_STATE:
                    t = new RelationalOperatorToken(token_str);
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




