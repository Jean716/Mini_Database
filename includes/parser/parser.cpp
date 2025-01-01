#include "parser.h"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cassert>
#include <queue>
using namespace std;

#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/parser/typedefs.h"
#include "../../includes/tokenizer/stokenize.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/parser/sql_parser_functions.h"
#include "../../includes/queue/MyQueue.h"
#include "../../includes/token/token.h"
#include "../../includes/token/child_tokens.h"  
#include "../../includes/shunting_yard/shunting_yard.h"
extern int make_table[MAX_ROWS][MAX_COLUMNS];
extern int insert_table[MAX_ROWS][MAX_COLUMNS];
extern int select_table[MAX_ROWS][MAX_COLUMNS];
extern int where_table[MAX_ROWS][MAX_COLUMNS];

map_sl Parser::_keywords;
Parser::Parser()
    : _input(""),
    _fail(false),
    _tokens(),
    _ptree(),
    _adjacency_table{} {
    if (_keywords.empty()) {
        build_keyword_list(_keywords);
        }
    //cout << "Parser Default Constructor Fired!" << endl;

    }



Parser::Parser(const char* s) : _input(s), _fail(false) {
    // cout << "Parser Constructor Fired!" << endl;
    // cout << "Input string: " << (s ? s : "null") << endl;
    if (_keywords.empty()) {
        build_keyword_list(_keywords);
        }
    set_string(_input);
    }

mmap_ss Parser::parse_tree() const {
    // cout << "Parse Tree Function Fired!" << endl;
    // cout << "command: " << _ptree["command"][0] << endl;

    // cout << _ptree << endl;
    // cout << "Parse Tree Function Done!" << endl;

    return _ptree;
    }

void Parser::set_string(const string & input) {
    //cout << "set_string Function Fired!" << endl;
    if (input.empty() && _ptree.empty() && _tokens.empty()) {
        //cout << "Empty input, skipping set_string." << endl;
        return;
        }
    _ptree.clear();
    _tokens.clear();
    Queue<Token*> postfix;
    //cout << "set string : Input string: " << input << endl;
    tokenize(input, postfix);
    init_adjacency_table();
    if (!get_parse_tree()) {
        //cout << "Failed to parse the input string." << endl;
        }

    }
void Parser::tokenize(const string& input, Queue<Token*>& infix) {
    // cout << "Tokenize Function Fired!" << endl;
    // cout << "Input string: " << input << endl;
    char c_input[MAX_BUFFER];
    strncpy(c_input, input.c_str(), MAX_BUFFER - 1);
    c_input[MAX_BUFFER - 1] = '\0';

    //cout << "Input string: " << c_input << endl;

    STokenizer tokenizer(c_input);
    Token* token = nullptr;
    _tokens.clear();
    //---------------------------------------
   // cout << "Tokens in vector: " << endl;
    while (tokenizer.more()) {
        tokenizer >> token;
        if (token && token->type() != TOKEN_SPACE) {
            //cout << "Processing token: " << token->value() << " [Type: " << token->type() << "]" << endl;

            _tokens.push_back(token);
            //infix.push(token);
           // cout << *token << endl;
            }
        }
    //---------------------------------------
    vector <Token*> new_tokens;
    string combined = "";
    bool is_combining = false;

    for (size_t i = 0; i < _tokens.size(); ++i) {
        string current_value = _tokens[i]->value();

        // Case 1: Detect "values" keyword to start combining
        if (current_value == "values") {
            // Push the "values" token and start combining
            new_tokens.push_back(_tokens[i]);
            is_combining = true;
            combined = "";
            }
        // Case 2: Detect operator and combine following ALFA tokens

        else if (_tokens[i]->type() == TOKEN_RELATIONAL_OPERATOR) {
            new_tokens.push_back(_tokens[i]); // Push the operator
            size_t j = i + 1;
            combined = "";
            //cout << "Combining tokens after RELATIONAL_OPERATOR at index " << i << endl;

            // Combine consecutive ALFA tokens
            while (j < _tokens.size() && _tokens[j]->type() == TOKEN_ALFA) {
                //cout << "Adding token: " << _tokens[j]->value() << " to combined string." << endl;

                if (!combined.empty()) {
                    combined += " "; // Add space between words
                    }
                combined += _tokens[j]->value();
                j++;
                }

            // Push combined token if any
            if (!combined.empty()) {
                //cout << "Pushing combined token: " << combined << endl;

                new_tokens.push_back(new ALFAToken(combined));
                }

            i = j - 1; // Update the index
            continue;
            }

        // Case 3: Combine ALFA tokens after "values" until a comma
        else if (is_combining) {
            // Combine ALFA tokens until a comma is found
            if (_tokens[i]->value() == ",") {
                if (!combined.empty()) {
                    new_tokens.push_back(new ALFAToken(combined)); // push the combined token before the comma
                    combined = "";
                    is_combining = false; // Stop combining
                    }
                new_tokens.push_back(_tokens[i]); // Push the comma
                is_combining = true;           // Start combining again
                }
            else {
                if (!combined.empty()) {
                    combined += " ";
                    }
                combined += current_value; // Append current value
                }
            }
        else {
            // Push non-combined tokens directly
            new_tokens.push_back(_tokens[i]);
            }
        }

    // Push the final combined token if it exists
    if (is_combining && !combined.empty()) {
        new_tokens.push_back(new ALFAToken(combined));
        }

    // Step 3: Push refined tokens into the infix queue
    for (Token* refined_token : new_tokens) {
        infix.push(refined_token);
        }

    //---------------------------------------
    cout << "Tokens: " << endl;
    _tokens.clear();
    _tokens = new_tokens;
    for (Token* token : _tokens) {
        cout << *token << "->";
        }
    cout << endl;

    cout << "Tokenization done!" << endl;
    }

void Parser::init_adjacency_table() {
    //cout << "Init Adjacency Table Function Fired!" << endl;
    init_table(_adjacency_table);

    if (_tokens.empty()) {
        //cout << "Token list is empty." << endl;
        _fail = true;
        return;
        }

    // Token* token = _tokens[0];
    // string token_str = token->value();
    string token_str = _tokens[0]->value();
    //cout << "First token: " << token_str << endl;
    if (token_str == "select") {
        init_select_table(_adjacency_table);
        }
    else if (token_str == "make" || token_str == "create") {
        //cout << "This is make table!" << endl;
        init_make_table(_adjacency_table);
        }
    else if (token_str == "insert") {
        //cout << "This is insert table!" << endl;
        init_insert_table(_adjacency_table);
        }

    else {
        _fail = true;
        //cout << "Error: Unrecognized keyword '" << token_str << "'." << endl;
        }
    }

bool Parser::get_parse_tree() {
    // cout << "Get Parse Tree Function Fired!" << endl;

    if (_tokens.empty()) {
        _fail = true;
        //cout << "Error: Token list is empty." << endl;
        return false;
        }

    int state = 0;
    int last_success_state = -1;
    //_ptree.clear();
    init_adjacency_table();
    map_sl token_columns = get_column(_tokens);

    for (Token* token : _tokens) {
        string token_str = token->value();
        int token_type = token->type();
        int last_state = state;
        // cout << "This token is: " << token_str << endl;
        // cout << "State = " << state << endl;
        // cout << "last_state = :" << last_state << endl;


        if (token_type == TOKEN_SPACE || token_type == TOKEN_COMMA) {
            continue;
            }

        int column_no = token_columns.get(token_str);
        // cout << "Column Number: " << column_no << endl;
        state = _adjacency_table[last_state][column_no];
        //cout << "State from table: " << state << endl;

        string first_token = _tokens[0]->value();
        if (first_token == "insert") {
            //cout << "command is insert!" << endl;
            process_insert_state(state, _ptree, token_str);
            }
        else if (first_token == "select") {
            //cout << "command is select!" << endl;
            process_select_state(state, _ptree, token_str);
            }
        else if (first_token == "make" || first_token == "create") {
            if (state == 0) {
                //cout << "command is make!" << endl;
                }
            process_make_state(state, _ptree, token_str);
            }
        else {
            throw runtime_error("Unknown SQL command: " + first_token);
            }

        if (state == -1) {
            _fail = true;
            cout << "Error: Invalid SQL syntax at token '" << token_str << "'." << endl;
            _ptree.clear();
            return false;
            }

        if (_adjacency_table[state][0] == 1) {
            last_success_state = state;

            }
        }

    if (_adjacency_table[state][0] == 1) {
        _fail = false;
        return true;
        }
    else {
        _fail = true;
        //cout << "Error: SQL query did not end in a success state." << endl;
        _ptree.clear();
        return false;
        }
    }

map_sl Parser::get_column(vector<Token*> tokens) {
    //cout << "Get Column Function Fired!" << endl;
    map_sl token_columns;

    for (Token* token : tokens) {
        string token_str = token->value();
        int token_type = token->type();
        //cout << "current token is " << token_str << endl;
        int column = -1;

        switch (token_type) {
                case TOKEN_ALFA:
                    if (_keywords.contains(token_str)) {
                        //cout << "get_column: " << token_str << " is a keyword." << endl;
                        column = _keywords.get(token_str);
                        }
                    else {
                        column = SYM;
                        }
                    break;
                case TOKEN_NUMBER:
                case TOKEN_STRING:
                    column = SYM;
                    break;

                case TOKEN_ASTERISK:
                    column = STAR;
                    break;

                case TOKEN_COMMA:
                    column = COMMA;
                    break;
                case TOKEN_RELATIONAL_OPERATOR:
                    column = REL_OP;
                    break;
                case TOKEN_LOGICAL_OPERATOR:
                    column = LOG_OP;
                    break;

                case TOKEN_LEFT_PAREN:
                    column = LP;
                    break;

                case TOKEN_RIGHT_PAREN:
                    column = RP;
                    break;

                default:
                    cerr << "Unhandled token type: " << token_type << " for token: " << token_str << endl;
                    break;
            }

        if (column != -1) {
            token_columns.insert(token_str, column);
            }
        }

    return token_columns;
    }

void Parser::build_keyword_list(map_sl & list) {
    //cout << "Build Keyword List Function Fired!" << endl;
    list["create"] = CREATE;
    list["make"] = MAKE;
    list["table"] = TABLE;
    list["command"] = SELECT;
    list["col"] = TABLE;
    list["fields"] = FIELDS;
    list["insert"] = INSERT;
    list["into"] = INTO;
    list["values"] = VALUES;

    list["select"] = SELECT;
    list["*"] = STAR;
    list["from"] = FROM;
    list["where"] = WHERE;
    list["sym"] = SYM;
    list["and"] = LOG_OP;
    list["or"] = LOG_OP;
    list["not"] = LOG_OP;

    list[","] = COMMA;
    list["="] = REL_OP;
    list["!="] = REL_OP;
    list["<"] = REL_OP;
    list[">"] = REL_OP;
    list["<="] = REL_OP;
    list[">="] = REL_OP;

    //cout << "Keyword list built successfully!" << endl;

    }
Queue<Token*> Parser::convert_to_postfix(Queue<Token*>& infix_queue) {
    // cout << "Converting Infix to Postfix..." << endl;
    // cout << "Infix Queue  " << infix_queue << endl;

    ShuntingYard shunting_yard(infix_queue);

    Queue<Token*> postfix = shunting_yard.postfix(infix_queue);

    //cout << "Postfix Expression: ";
    Queue<Token*> temp_queue = postfix;
    while (!temp_queue.empty()) {
        Token* t = temp_queue.front();
        temp_queue.pop();
        //cout << t->value() << " ";
        }
    //cout << endl;

    return postfix;
    }
