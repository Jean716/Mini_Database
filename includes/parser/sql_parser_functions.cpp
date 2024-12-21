#include "../../includes/parser/sql_parser_functions.h"
#include "../../includes/token/token.h"
#include "../../includes/token/child_tokens.h"
#include "../../includes/tokenizer/stokenize.h"
#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/tokenizer/constants.h" 
#include <sstream>
using namespace std;

void init_make_table(int table[MAX_ROWS][MAX_COLUMNS]) {

    //Make Table [tablename] Fields [col1, col2, col3]
    //0-> MAKE -> 1 -> TABLE -> 2 -> ALPHA -> 3 ->  FIELDS ->  4 -> ALPHA -> [5] -> COMMA -> 6
                                                                           //  |_____________________| 
    // 0: START_STATE
    // 1: MAKE_STATE
    // 2: TABLE_STATE
    // 3: TABLE_NAME_STATE
    // 4: FIELDS_STATE
    // 5: FIELD_NAME_STATE (success)
    // 6: COMMA_STATE 

    init_table(table);

    mark_fail(table, 0);
    mark_success(table, 5);

    mark_cell(0, table, MAKE, 1);
    mark_cell(1, table, TABLE, 2);

    mark_cell(2, table, Token::ALPHA_TK, 3);
    mark_cell(3, table, FIELDS, 4);
    mark_cell(4, table, Token::ALPHA_TK, 5);
    mark_cell(5, table, COMMA, 6);
    mark_cell(6, table, Token::ALPHA_TK, 5);
    }

void init_insert_table(int table[MAX_ROWS][MAX_COLUMNS]) {
    // Insert Into [tablename] Values [value1, value2, value3]
    //0-> Insert -> 1 -> Into -> 2 -> tablename -> 3 ->  Values ->  4 -> ALPHA/Numbers/string -> [5] -> COMMA -> 6

    init_table(table);
    // 0: START_STATE
    // 1: INSERT
    // 2: INTO
    // 3: TABLE_NAME
    // 4: VALUES
    // 5: value
    // 6: COMMA


    mark_fail(table, 0);
    mark_success(table, 5);

    mark_cell(0, table, INSERT, 1); // “Insert” -> 1
    mark_cell(1, table, INTO, 2);
    mark_cell(2, table, Token::ALPHA_TK, 3);
    mark_cell(3, table, VALUES, 4);
    mark_cell(4, table, Token::NUMBER_TK, 5);
    mark_cell(4, table, Token::STRING_TK, 5);
    mark_cell(5, table, COMMA, 6);
    mark_cell(6, table, Token::NUMBER_TK, 5);
    mark_cell(6, table, Token::STRING_TK, 5);
    mark_cell(6, table, Token::ALPHA_TK, 5);

    }
void init_select_table(int table[MAX_ROWS][MAX_COLUMNS]) {
    //Select [field,field ..] From [tablename] where [condition]
    mark_fail(table, 0);
    mark_success(table, 8);

    mark_cell(0, table, SELECT, 1);
    mark_cell(1, table, STAR, 2);

    mark_cell(1, table, Token::ALPHA_TK, 2);
    mark_cell(2, table, COMMA, 3);
    mark_cell(3, table, Token::ALPHA_TK, 2);

    mark_cell(2, table, FROM, 4);

    mark_cell(4, table, Token::ALPHA_TK, 5);
    mark_cell(5, table, WHERE, 6);

    mark_cell(6, table, Token::ALPHA_TK, 7);
    mark_cell(6, table, Token::RELATIONAL_OP_TK, 8);
    mark_cell(8, table, Token::STRING_TK, 8);
    mark_cell(8, table, Token::ALPHA_TK, 9);
    mark_cell(8, table, Token::NUMBER_TK, 9);

    mark_cell(9, table, Token::LOGICAL_OP_TK, 10);
    }




void process_make_state(int state, mmap_ss& ptree, const string& token_str) {
    switch (state) {
            case 1:
                ptree["command"].push_back(token_str);
                break;
            case 3:
                ptree["table_name"].push_back(token_str);
                break;
            case 5:
                ptree["col"].push_back(token_str);
                break;
            default:
                break;
        }
    }

void process_insert_state(int state, mmap_ss& ptree, const string& token_str) {
    switch (state) {
            case 1:
                ptree["command"].push_back("insert");
                break;
            case 3:
                ptree["table_name"].push_back(token_str);
                break;
            case 5:
                ptree["values"].push_back(token_str);
                break;
            default:
                break;
        }
    }

void process_select_state(int state, mmap_ss& ptree, const string& token_str) {
    switch (state) {
            case 1:
                ptree["command"].push_back(token_str);
                break;

            case 4:
                ptree["table_name"].push_back(token_str);
                break;
            case 2:
            case 10:
                ptree["fields"].push_back(token_str);
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                ptree["condition"].push_back(token_str);
                break;
            case 5:
                if (token_str == "where") {
                    ptree["where"].push_back("yes");
                    }
                else {
                    ptree["where"].push_back("no");
                    }
            default:
                break;
        }
    }

