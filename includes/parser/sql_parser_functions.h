#ifndef SQL_PARSER_FUNCTIONS_H
#define SQL_PARSER_FUNCTIONS_H
#include "../../includes/parser/typedefs.h"
#include "../../includes/tokenizer/constants.h"
#include <string>
#include <vector>


// adjacency table column numbers
enum Column
    {
    START = 0,
    MAKE = 1,
    TABLE = 2,
    FIELDS = 3,
    INSERT = 4,
    INTO = 5,
    VALUES = 6,
    SELECT = 7,
    STAR = 8,
    FROM = 9,
    WHERE = 10,
    SYM = 11,
    REL_OP = 12,
    LOG_OP = 13,
    OP = 14,
    LP = 15, // "("
    RP = 16, // ")"
    COMMA,

    };


void init_make_table(int table[MAX_ROWS][MAX_COLUMNS]);
void init_insert_table(int table[MAX_ROWS][MAX_COLUMNS]);
void init_select_table(int table[MAX_ROWS][MAX_COLUMNS]);

void process_make_state(int state, mmap_ss& ptree, const string& token_str);
void process_insert_state(int state, mmap_ss& ptree, const string& token_str);
void process_select_state(int state, mmap_ss& ptree, const string& token_str);

#endif
