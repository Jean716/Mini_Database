#ifndef STATE_MACHINE_FUNCTIONS_H
#define STATE_MACHINE_FUNCTIONS_H
#include "../../includes/tokenizer/constants.h"
using namespace Constants;

//Fill all cells of the array with -1
void init_table(int _table[][MAX_COLUMNS]);

//Mark this state (row) with a 1 (success)
void mark_success(int _table[][MAX_COLUMNS], int state);

//Mark this state (row) with a 0 (fail)
void mark_fail(int _table[][MAX_COLUMNS], int state);

//true if state is a success state
bool is_success(int _table[][MAX_COLUMNS], int state);

// mark the table in specific row ， from one column to another column
void mark_cells(int row, int _table[][MAX_COLUMNS], int from, int to, int state);

//Mark columns represented by the string columns[] for this row
// void mark_cells(int row, int _table[][MAX_COLUMNS], const char columns[], int state);

//Mark this row and column
void mark_cell(int row, int table[][MAX_COLUMNS], int column, int state);

void mark_cells(int row, int _table[][MAX_COLUMNS], const char* str, int state);

//This can realistically be used on a small table
void print_table(int _table[][MAX_COLUMNS]);

//show string s and mark this position on the string:
//hello world   pos: 7
//       ^
void show_string(char s[], int _pos);


void setup_number_states(int _table[][MAX_COLUMNS]);
void setup_relational_operator_states(int _table[][MAX_COLUMNS]);
void setup_alpha_states(int _table[][MAX_COLUMNS]);
void setup_parentheses_states(int _table[][MAX_COLUMNS]);
void setup_asterisk_states(int _table[][MAX_COLUMNS]);
void setup_space_states(int _table[][MAX_COLUMNS]);
void setup_logical_operator_states(int _table[][MAX_COLUMNS]);
void setup_punctuation_states(int _table[][MAX_COLUMNS]);
void setup_comma_states(int _table[][MAX_COLUMNS]);
void setup_alpha_states(int _table[][MAX_COLUMNS]);
void setup_string_states(int _table[][MAX_COLUMNS]);
#endif