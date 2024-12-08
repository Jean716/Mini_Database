#ifndef CONSTANTS_H
#define CONSTANTS_H
#include "../../includes/parser/typedefs.h"
#include <unordered_set>
#include <string>

const int MAX_COLUMNS = 512;
const int MAX_ROWS = 200;
const int MAX_BUFFER = 200;

const char ALFA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char DIGITS[] = "0123456789";
const char OPERATORS[] = { '+', '-', '*', '/' };
const char RELATIONAL_OPERATORS[] = { '=', '!', '<', '>' };
const char SPACES[] = { ' ', '\t', '\n', '\0' };
const char PUNC[] = { '.', ',', ';' };
const char PARENS[] = { '(', ')' };

// state in state machine
const int START_STATE = 0;          // start
const int NUMBER_STATE = 1;         // number
const int DECIMAL_STATE = 2;        // decimal
const int STRING_STATE = 10;        // string
const int ALFA_STATE = 20;        // symbol
const int SPACE_STATE = 30;         // space
const int COMMA_STATE = 40;         // comma
const int ASTERISK_STATE = 50;      // asterisk *
const int DOT_STATE = 60;           // dot .
const int LEFT_PAREN_STATE = 70;    // left paren (
const int RIGHT_PAREN_STATE = 80;   // right pare )
const int OPERATOR_STATE = 90;     // operator
const int RELATIONAL_OPEN_STATE = 100;   // relational operator
const int RELATIONAL_STATE = 110;   // relational operator
const int LOGICAL_STATE = 120;      // logical operator
const int NAME_STATE = 130;         // name
const int Dot_STATE = 140;          // dot




enum OPERATORS
    {

    EQUAL = 0,  // ”=”
    NOT_EQUAL = 1, // “!=”
    LESS_THAN = 2, // “<”
    GREATER_THAN = 3, // “>”
    LESS_EQUAL = 4, // “<=”
    GREATER_EQUAL = 5, // “>=”

    ADD = 6, // “+”
    SUBTRACT = 7, // “-”
    MULTIPLY = 8, // “*”
    DIVIDE = 9, // “/”

    AND = 10,
    OR = 11,
    NOT = 12,

    LEFT_PAREN = 13, // “(”
    RIGHT_PAREN = 14, // “)”
    INVALID_OPERATOR
    };

static const unordered_set<string> keywords = {
       "insert", "into", "values", "select", "from", "where", "and", "or", "not"
    };






#endif