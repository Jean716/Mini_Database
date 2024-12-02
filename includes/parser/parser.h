#ifndef PARSER_H
#define PARSER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "../../includes/token/token.h"
#include "../../includes/bplustree/multimap.h"
#include "../../includes/tokenizer/constants.h"
#include "../../includes/parser/sql_parser_functions.h"
#include "../../includes/parser/typedefs.h"
#include "../../includes/tokenizer/stokenize.h"
class Parser
    {
    private:
        string _input;
        mmap_ss _ptree;
        vector<Token*> _tokens;
        bool _fail;
        static map_sl _keywords; // map of keywords to (column, number)
        int _adjacency_table[MAX_ROWS][MAX_COLUMNS];


    public:
        Parser();
        Parser(const char* s);
        /*
        - copy str to internal buffer
        - initialize "make" adjacency table
        - build keyword list
        - set_string
        */
        void set_string(const string& input);
        /*
        tokenize input buffer into input
        calls get_parse_tree
        sets/resets fail flag
        Accessors and Mutators
    */

        mmap_ss parse_tree() const;
        bool fail() const { return _fail; }

        void init_adjacency_table();
        void tokenize(const string& input);
        bool get_parse_tree();
        /*
        sets ptree
        returns true(valid SQL Query) if ends at a success state , false otherwise
       */

        void build_keyword_list(map_sl &list);
        map_sl get_column(vector<Token*> tokens);
        // maps tokens to keywords constants like SELECT, FROM, WHERE, etc

    };

#endif