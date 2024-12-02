#ifndef SQL_H
#define SQL_H
#include <iostream>
#include <map>
using namespace std;
#include "../../includes/table/table.h"
#include "../../includes/parser/parser.h"

class SQL
    {
    public:
        Table command(const string& cmd);
        const vector<long>& select_recnos() const { return _select_recnos; }

    private:
        map<string, Table> _tables; //table name-> table
        vector<long> _select_recnos;
        Parser _parser;
    };


#endif