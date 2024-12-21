#include "parser.h"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cassert>
#include <queue>
#include <map>
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
    build_keyword_list(_keywords);
    cout << "Parser Default Constructor Fired!" << endl;
    }

Parser::Parser(const char* s) : _input(s), _fail(false) {
    cout << "-[0]---Parser::Parser Constructor Fired!------" << endl;
    cout << "Input string: " << (s ? s : "null") << endl;
    build_keyword_list(_keywords);
    set_string(_input);
    cout << "-[100]---Parser::Parser Constructor Done!------" << endl;
    }

mmap_ss Parser::parse_tree() const {
    cout << "Parse Tree Function Fired! [" << _input << "]" << endl;
    cout << "command: " << _ptree["command"][0] << endl;
    cout << "table_name: " << _ptree["table_name"][0] << endl;

    cout << _ptree << endl;
    cout << "Parse Tree Function Done!" << endl;
    cout << "-65 Parser::parse_tree()----returning _ptree -----------[" << _input << "]" << endl;
    return _ptree;
    }

void Parser::set_string(const string & input) {
    cout << "-[0]---set_string Function Fired!------" << endl;
    _ptree.clear();
    _tokens.clear();
    Queue<Token*> infix;
    _input = input;
    tokenize(_input, infix);
    init_adjacency_table();
    _fail = !get_parse_tree();

    }

void Parser::tokenize(const string& input, Queue<Token*>& infix) {
    cout << "-[0]-Parser::tokenize() function Fired!" << endl;
    cout << "Input string: " << input << endl;

    STokenizer tokenizer;
    tokenizer.set_string(input.c_str());
    Token* token = nullptr;

    //---------------------------------------
    while (tokenizer.more()) {
        tokenizer >> token;
        if (token) {
            cout << "Token: " << token->getType() << " - " << token->getValue() << endl;
            if (token->getType() != Token::SPACE_TK) {
                infix.push(token);
                cout << "Token pushed to infix queue." << endl;
                }
            else {
                delete token; // Clean up space tokens
                cout << "Space token ignored and deleted." << endl;
                }
            }
        }
    //---------------------------------------
    cout << "generate basic tokens:\n " << endl;
    cout << infix << endl;
    _tokens.clear();
    while (!infix.empty()) {
        Token* token = infix.front();
        infix.pop();
        if (token->getType() != Token::SPACE_TK) {
            _tokens.push_back(token);
            }
        else {
            delete token; // Clean up space tokens
            cout << "Space token ignored and deleted." << endl;
            }
        }
    cout << "Tokens after removing spaces: " << endl;
    for (Token* token : _tokens) {
        cout << *token << "->";
        }
    cout << "-[1]-Tokenization done!" << endl;

    }

void Parser::init_adjacency_table() {
    cout << "-[0]--Init Adjacency Table Function Fired------" << endl;
    init_table(_adjacency_table);

    if (_tokens.empty()) {
        cout << "Error: Token list is empty." << endl;
        _fail = true;
        return;
        }

    string token_str = _tokens[0]->getValue();
    cout << "First token: " << token_str << endl;
    if (token_str == "select") {
        init_select_table(_adjacency_table);
        }
    else if (token_str == "make") {
        cout << "This is make table!" << endl;
        init_make_table(_adjacency_table);
        }
    else if (token_str == "insert") {
        cout << "This is insert table!" << endl;
        init_insert_table(_adjacency_table);
        }

    else {
        _fail = true;
        cout << "Error: Unrecognized keyword '" << token_str << "'." << endl;
        }
    }

bool Parser::get_parse_tree() {
    cout << "Get Parse Tree Function Fired!" << endl;
    cout << "[---- 65 Debug]Print Tokens first in get_parse_tree function: " << endl;
    for (Token* token : _tokens) {
        cout << *token << "->";
        }
    cout << endl;

    if (_tokens.empty()) {
        _fail = true;
        cout << "Error: Token list is empty." << endl;
        return false;
        }

    int state = 0;
    int last_success_state = -1;
    _ptree.clear();
    // init_adjacency_table();
    map_sl token_columns = get_column(_tokens);
    cout << "-- 65 ---after get_column" << endl;
    for (Token* token : _tokens) {
        string token_str = token->getValue();
        int token_type = token->getType();
        int last_state = state;
        cout << "This token is: " << token_str << endl;
        cout << "State = " << state << endl;
        cout << "last_state = :" << last_state << endl;


        if (token_type == Token::SPACE_TK || token_type == Token::COMMA_TK) {
            continue;
            }

        int column_no = token_columns.get(token_str);
        cout << "Column Number: " << column_no << endl;
        state = _adjacency_table[last_state][column_no];
        cout << "State from table: " << state << endl;

        string first_token = _tokens[0]->getValue();
        if (first_token == "insert") {
            cout << "command is insert!" << endl;
            process_insert_state(state, _ptree, token_str);
            }
        else if (first_token == "select") {
            cout << "command is select!" << endl;
            process_select_state(state, _ptree, token_str);
            }
        else if (first_token == "make") {
            cout << "command is make!" << endl;
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
        cout << "Error: SQL query did not end in a success state." << endl;
        _ptree.clear();
        return false;
        }

    cout << "Get Parse Tree Function Done!" << endl;
    }

map_sl Parser::get_column(vector<Token*> tokens) {
    cout << "-[0]-Get Column Function Fired!" << endl;
    map_sl token_columns;

    for (Token* token : tokens) {
        string token_str = token->getValue();
        int token_type = token->getType();
        cout << "current token is " << token_str << endl;
        int column = -1;

        switch (token_type) {
                case Token::ALPHA_TK:
                case Token::NUMBER_TK:
                case Token::STRING_TK:
                    column = SYM;
                    break;
                case Token::STAR_TK:
                    column = STAR;
                    break;
                case Token::COMMA_TK:
                    column = COMMA;
                    break;
                case Token::RELATIONAL_OP_TK:
                    column = REL_OP;
                    break;
                case Token::LOGICAL_OP_TK:
                    column = LOG_OP;
                    break;

                case Token::LEFT_PAREN_TK:
                    column = LP;
                    break;

                case Token::RIGHT_PAREN_TK:
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
    cout << "\n\nreturning from get_column\n\n";
    return token_columns;
    }

void Parser::build_keyword_list(map_sl & list) {
    cout << "-[0]---Parser::Build Keyword List Function Fired!------" << endl;
    list["make"] = MAKE;
    list["table"] = TABLE;
    list["command"] = SELECT;
    list["fields"] = FIELDS;
    list["insert"] = INSERT;
    list["into"] = INTO;
    list["values"] = VALUES;

    list["select"] = SELECT;
    list["*"] = STAR;
    list["from"] = FROM;
    list["where"] = WHERE;
    list[","] = COMMA;

    cout << "Keyword list built done!" << endl;

    }
Queue<Token*> Parser::convert_to_postfix(Queue<Token*>& infix_queue) {
    cout << "Converting Infix to Postfix..." << endl;
    cout << "Infix Queue  " << infix_queue << endl;

    ShuntingYard shunting_yard(infix_queue);

    Queue<Token*> postfix = shunting_yard.postfix(infix_queue);

    cout << "Postfix Expression: ";
    Queue<Token*> temp_queue = postfix;
    while (!temp_queue.empty()) {
        Token* t = temp_queue.front();
        temp_queue.pop();
        }
    cout << endl;

    return postfix;
    }
