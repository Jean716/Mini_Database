#ifndef CONSTANTS_H
#define CONSTANTS_H
#include "../../includes/parser/typedefs.h"
#include <unordered_set> // for unordered_set
#include <string>

constexpr int MAX_COLUMNS = 256;
constexpr int MAX_ROWS = 100;
constexpr int MAX_BUFFER = 256;
//NOTE -  constexpr can be considered a efficient version of const: 
// not only is the value immutable, but it must also be determined at compile time.


namespace Constants {

    const char  ALFA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char DIGITS[] = "0123456789";
    const char OPERATORS[] = { '+', '-', '*', '/', '%' };
    const char RELATIONAL_OPERATORS[] = { '=', '!', '<', '>' };
    const char SPACES[] = { ' ', '\t', '\n', '\0' };
    const char PUNC[] = { '.', ';' };
    const char PARENTHESIS[] = { '(', ')' };
    const char QUOTES[] = { '\'', '"', '`' };
    const char ESCAPE[] = { '\\' };


    const unordered_set<string> KEYWORDS = {
        "SELECT", "FROM", "WHERE", "INSERT", "INTO", "VALUES", "AND", "OR", "NOT"
        };


    enum STATE
        {
        START_STATE = 0,
        DIGITS_STATE = 1,
        DECIMAL_POINT_STATE = 2,
        FRACTION_STATE = 3,

        REL_OP_STATE = 4,
        REL_OP_EQUAL_STATE = 5,

        ALFA_STATE = 6,

        LEFT_PAREN_STATE = 7,
        RIGHT_PAREN_STATE = 8,

        ASTERISK_STATE = 9,
        SPACE_STATE = 10,
        LOGICAL_OP_STATE = 11,
        PUNC_STATE = 12,

        OPEN_ESCAPE_STATE = 13,
        OPEN_QUOTE_STATE = 14,
        STRING_STATE = 15,
        CLOSE_ESCAPE_STATE = 16,
        CLOSE_QUOTE_STATE = 17,

        COMMA_STATE = 18,
        };


    }

#endif // CONSTANTS_H