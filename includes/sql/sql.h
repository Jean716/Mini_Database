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
            cout << "Selected records: ";
            for (long recno : _select_recnos) {
                cout << recno << " ";
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