#ifndef STOKENIZE_H
#define STOKENIZE_H
#include <string>
#include <iostream>
using namespace std;
#include <cctype> // for isdigit, isalpha, isspace, ispunct
#include "../../includes/token/token.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/tokenizer/state_machine_functions.h"

class STokenizer
    {
    public:
        STokenizer(); //default constructor
        STokenizer(char str[]); //constructor that takes a string
        bool done();            //true: there are no more tokens
        bool more();            //true: there are more tokens

        //extract one token (very similar to the way cin >> works)
        friend STokenizer& operator >> (STokenizer& s, Token*& t);

        //Note: char str[] is an array of characters that will be used as the input string
        //Note: the array will be null-terminated (e.g. "Hello" will be 'H', 'e', 'l', 'l', 'o', '\0')
        void set_string(const char str[]);

    private:
        //create table for all the tokens we will recognize (e.g. doubles, words, etc.)              
        void make_table(int _table[][MAX_COLUMNS]); //the table to define the rules for the transitions of the states
        bool get_token(int& start_state, string& token);
        //one of the acceptable token types

//---------------------------------
        char _buffer[MAX_BUFFER];   //buffer to store the input string
        int _pos = 0;                       //current position in the string
        static int _table[MAX_ROWS][MAX_COLUMNS]; //table to store the tokens
        bool _done;

    };


#endif