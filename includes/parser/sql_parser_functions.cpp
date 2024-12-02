#include "../../includes/parser/sql_parser_functions.h"
#include "../../includes/token/token.h"
#include "../../includes/tokenizer/stokenize.h"
#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/tokenizer/constants.h" 
#include <sstream>


void init_make_table(int table[MAX_ROWS][MAX_COLUMNS]) {
    init_table(table);
    mark_fail(table, 1);
    mark_fail(table, 2);
    mark_fail(table, 3);
    mark_fail(table, 4);
    mark_success(table, 5);

    mark_cell(0, table, MAKE, 1);
    mark_cell(1, table, TABLE, 2);
    mark_cell(2, table, SYM, 3);
    mark_cell(3, table, FIELDS, 4);
    mark_cell(4, table, SYM, 5);
    mark_cell(5, table, SYM, 5);
    mark_cell(5, table, COMMA, 5);
    mark_cell(6, table, SYM, 5);
    }


void init_insert_table(int table[MAX_ROWS][MAX_COLUMNS]) {
    init_table(table);

    mark_fail(table, 0);
    mark_fail(table, 1);
    mark_fail(table, 2);
    mark_fail(table, 3);
    mark_fail(table, 4);
    mark_success(table, 5);

    mark_cell(0, table, INSERT, 1);
    mark_cell(1, table, INTO, 2);
    mark_cell(2, table, SYM, 3);
    mark_cell(3, table, VALUES, 4);
    mark_cell(3, table, SYM, 5);
    mark_cell(4, table, SYM, 5);
    mark_cell(5, table, SYM, 5);
    mark_cell(6, table, SYM, 5);

    }


void init_select_table(int table[MAX_ROWS][MAX_COLUMNS]) {
    const int START_STATE = 0;
    const int COMMAND_STATE = 1;
    const int FIELDS_STATE = 2;
    const int FROM_STATE = 3;
    const int TABLE_NAME_STATE = 4;
    const int WHERE_STATE = 5;
    const int LEFT_P_STATE = 6;
    const int RIGHT_P_STATE = 7;
    const int CONDITION_STATE = 8;
    const int LOGICAL_OP_STATE = 9;
    const int REL_OP_STATE = 10;
    const int END_STATE = 11;

    init_table(table);
    mark_fail(table, COMMAND_STATE);
    mark_success(table, FIELDS_STATE);
    mark_fail(table, FROM_STATE);
    mark_success(table, TABLE_NAME_STATE);
    mark_success(table, CONDITION_STATE);
    mark_fail(table, LOGICAL_OP_STATE);
    mark_fail(table, REL_OP_STATE);
    mark_fail(table, LEFT_P_STATE);
    mark_success(table, RIGHT_P_STATE);
    mark_success(table, END_STATE);


    mark_cell(START_STATE, table, SELECT, COMMAND_STATE);
    mark_cell(COMMAND_STATE, table, STAR, FIELDS_STATE);
    mark_cell(FIELDS_STATE, table, STAR, FIELDS_STATE);       // STAR_STATE -> FROM

    mark_cell(COMMAND_STATE, table, SYM, FIELDS_STATE);
    mark_cell(FIELDS_STATE, table, FROM, FROM_STATE);
    mark_cell(FROM_STATE, table, SYM, TABLE_NAME_STATE);
    mark_cell(FIELDS_STATE, table, SYM, FIELDS_STATE);
    mark_cell(TABLE_NAME_STATE, table, SYM, TABLE_NAME_STATE);
    mark_cell(TABLE_NAME_STATE, table, WHERE, WHERE_STATE);
    mark_cell(WHERE_STATE, table, WHERE, WHERE_STATE);
    mark_cell(WHERE_STATE, table, LP, LEFT_P_STATE);
    mark_cell(LEFT_P_STATE, table, LP, LEFT_P_STATE);
    mark_cell(LEFT_P_STATE, table, SYM, CONDITION_STATE);
    mark_cell(WHERE_STATE, table, SYM, CONDITION_STATE);

    mark_cell(CONDITION_STATE, table, SYM, REL_OP_STATE);
    mark_cell(CONDITION_STATE, table, REL_OP, REL_OP_STATE);
    mark_cell(LOGICAL_OP_STATE, table, SYM, CONDITION_STATE);


    mark_cell(REL_OP_STATE, table, REL_OP, REL_OP_STATE);
    mark_cell(REL_OP_STATE, table, SYM, CONDITION_STATE);
    mark_cell(CONDITION_STATE, table, LOG_OP, LOGICAL_OP_STATE);
    mark_cell(CONDITION_STATE, table, RP, RIGHT_P_STATE);
    mark_cell(RIGHT_P_STATE, table, LOG_OP, LOGICAL_OP_STATE);
    mark_cell(LOGICAL_OP_STATE, table, LP, LEFT_P_STATE);



    mark_cell(RIGHT_P_STATE, table, RP, END_STATE);

    }

void process_make_state(int state, mmap_ss& ptree, const string& token_str) {
    switch (state) {
            case 1:
                ptree["command"].push_back("make");
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
                ptree["fields"].push_back(token_str);
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                ptree["condition"].push_back(token_str);
                break;
            case 5:

                ptree["where"].push_back("yes");

            default:
                break;
        }
    }