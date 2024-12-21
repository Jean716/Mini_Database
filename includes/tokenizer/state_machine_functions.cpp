#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/token/token.h"
#include <iostream>
using namespace std;
using namespace Constants;

//Fill all cells of the array with -1
void init_table(int _table[][MAX_COLUMNS]) {
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++) {
            _table[i][j] = -1;
            }
        }
    }

//Mark this state (row) with a 1 (success)
void mark_success(int _table[][MAX_COLUMNS], int state) {
    _table[state][0] = 1;
    }

//Mark this state (row) with a 0 (fail)
void mark_fail(int _table[][MAX_COLUMNS], int state) {
    _table[state][0] = 0;
    }

//true if state is a success state
bool is_success(int _table[][MAX_COLUMNS], int state) {
    return _table[state][0] == 1;
    }

void mark_cells(int row, int _table[][MAX_COLUMNS], int from, int to, int state) {
    for (int i = from; i <= to; i++) {
        _table[row][i] = state;

        }
    }

//Mark this row and column
// use this to mark a single cell
void mark_cell(int row, int _table[][MAX_COLUMNS], int column, int state) {
    _table[row][column] = state;
    }

//This can be used on a small table
void print_table(int _table[][MAX_COLUMNS]) {
    cout << "State Machine Table (Non-default Transitions):" << endl;

    for (int row = 0; row < MAX_ROWS; ++row) {
        bool has_transition = false;

        for (int col = 0; col < MAX_COLUMNS; ++col) {
            if (_table[row][col] != -1) {
                if (!has_transition) {
                    cout << "State " << row << ": ";
                    has_transition = true;
                    }
                cout << "[Input: " << col << " -> State: " << _table[row][col] << "] ";
                }
            }

        if (has_transition) {
            cout << endl;
            }
        }
    }

//show string s and mark this position on the string:
//hello world   pos: 7
//       ^
void show_string(char s[], int _pos) {
    cout << s << endl;
    for (int i = 0; i < _pos; ++i) {
        cout << " ";
        }
    cout << "^" << endl;
    }


void mark_cells(int row, int _table[][MAX_COLUMNS], const char* str, int state) {
    for (int i = 0; str[i] != '\0'; ++i) {
        int col = static_cast<int>(str[i]);
        _table[row][col] = state;
        }
    }
void setup_number_states(int _table[][MAX_COLUMNS]) {
    // **1. numner**
    mark_fail(_table, 0);     // 0: START_STATE （fail）
    mark_success(_table, 1);  // 1: DIGIT_STATE
    mark_fail(_table, 2);     // 2: DECIMAL_POINT_STATE（fail）
    mark_success(_table, 3);  // 3: FRACTION_STATE

    mark_cells(0, _table, DIGITS, 1); //START -> DIGITS -> DIGIT_STATE
    mark_cell(1, _table, '.', 2);     //DIGITS -> '.' -> DECIMAL_POINT_STATE
    mark_cells(2, _table, DIGITS, 3); // '.' -> DIGITS -> FRACTION_STATE
    }
void setup_comma_states(int _table[][MAX_COLUMNS]) {
    // ** 10. Comma **
    mark_success(_table, 18); // 18: COMMA_STATE
    mark_cell(0, _table, ',', 18);

    }
void setup_relational_operator_states(int _table[][MAX_COLUMNS]) {
    // **2. RELATIONAL OPERATOR**
    mark_success(_table, 4);  // 4: REL_OP_STATE
    mark_success(_table, 5);  // 5: REL_OP_EQUAL_STATE

    mark_cells(0, _table, RELATIONAL_OPERATORS, 4);//  RELATIONAL_OPERATORS -> REL_OP_STATE
    mark_cell(4, _table, '=', 5); // REL_OP_STATE -> '=' -> REL_OP_EQUAL_STATE

    }
void setup_alpha_states(int _table[][MAX_COLUMNS]) {
    // **3. ALPHA and name with dot and underscore **

    mark_success(_table, 6);  // 6: ALPHA_STATE
    mark_cells(0, _table, ALFA, 6);
    mark_cell(0, _table, '_', 6);

    mark_cells(6, _table, ALFA, 6);
    mark_cells(6, _table, DIGITS, 6);
    mark_cell(6, _table, '_', 6);
    mark_cell(6, _table, '.', 6);
    }
void setup_parentheses_states(int _table[][MAX_COLUMNS]) {
    // ** 4. parentheses **
    mark_success(_table, 7);  // 7: LEFT_PAREN_STATE
    mark_success(_table, 8);  // 8: RIGHT_PAREN_STATE

    mark_cell(0, _table, '(', 7);
    mark_cell(0, _table, ')', 8);

    }
void setup_asterisk_states(int _table[][MAX_COLUMNS]) {
    // ** 5. ASTERISK **
    mark_success(_table, 9);  // 9: ASTERISK_STATE
    mark_cell(0, _table, '*', 9);

    }
void setup_space_states(int _table[][MAX_COLUMNS]) {
    // ** 6. SPACES **
    mark_success(_table, 10); // 10: SPACE_STATE
    mark_cells(0, _table, SPACES, 10);
    mark_cells(10, _table, SPACES, 10);
    }
void setup_logical_operator_states(int _table[][MAX_COLUMNS]) {
    // ** 7. LOGICAL **
    // mark_success(_table, 11); // 11: LOGICAL_OP_STATE

    }
void setup_punctuation_states(int _table[][MAX_COLUMNS]) {
    // // ** 8. PUNC **
    // mark_success(_table, 12); // 12: PUNC_STATE

    }


void setup_string_states(int _table[][MAX_COLUMNS]) {
    // ** 9. String **
    // mark_fail(_table,0); // 0: START_STATE
    // mark_fail(_table, 13); // 13: OPEN_ESCAPE_STATE
    // mark_fail(_table, 14); // 14: OPEN_QUOTE_STATE
    // mark_success(_table, 15); // 15: STRING__CONTENT_STATE
    // mark_fail(_table, 16); // 16: CLOSE_ESCAPE_STATE
    // mark_success(_table, 17); // 17: CLOSE_QUOTE_STATE  

    // mark_cells(0, _table, QUOTES, 14);
    // mark_cells(14, _table, ALFA, 15);
    // mark_cells(14, _table, DIGITS, 15);
    // mark_cells(14, _table, SPACES, 15);
    // mark_cells(14, _table, PUNC, 15);
    // mark_cells(14, _table, ESCAPE, 13);

    // mark_cells(13, _table, QUOTES, 15);
    // mark_cells(15, _table, QUOTES, 17);
    }
