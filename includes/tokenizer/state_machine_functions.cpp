#include "../../includes/tokenizer/state_machine_functions.h"
#include "../../includes/token/token.h"
#include <iostream>
using namespace std;
#include <wchar.h>
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
    cout << endl;
    }

//This can be used on a small table
void print_table(int _table[][MAX_COLUMNS]) {

    for (int row = 0; row < MAX_ROWS; ++row) {
        for (int col = 0; col < MAX_COLUMNS; ++col) {
            cout << _table[row][col] << " ";
            }
        cout << endl;
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



