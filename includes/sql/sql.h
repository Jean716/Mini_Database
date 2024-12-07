#ifndef SQL_H
#define SQL_H
#include <iostream>
#include <map>
using namespace std;
#include "../../includes/table/table.h"
#include "../../includes/parser/parser.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"

class SQL
    {
    public:
        Table command(const string& cmd);
        const vector<long> select_recnos() const {
            cout << "basic_test: records selected: ";
            for (auto i : _select_recnos) {
                cout << "[ " << i << " ] ";
                }
            cout << endl;
            return _select_recnos;
            }

    private:
        map<string, Table> _tables; //table name-> table
        vector<long> _select_recnos;
        Parser _parser;
        Table _table; // current table
    };


#endif