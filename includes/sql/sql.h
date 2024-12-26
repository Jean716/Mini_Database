#ifndef SQL_H
#define SQL_H
#include <iostream>
using namespace std;
#include "../../includes/table/table.h"
#include "../../includes/parser/parser.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"
#include "../../includes/bplustree/multimap.h"
#include "../../includes/bplustree/map.h"

class SQL
    {
    public:
        SQL();
        Table command(const string& cmd);
        Table execute_command(const string& cmd);
        const vector<long> select_recnos() const { return _select_recnos; }
        Map<string, Table>& tables() { return _tables; }
        Map<string, Table> _tables; //table name-> table
    private:
        vector<long> _select_recnos;
        Parser _parser;
    };


#endif