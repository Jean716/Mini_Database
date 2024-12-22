#include "sql.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <map>
#include <filesystem>
#include "../../includes/bplustree/multimap.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"
#include "../../includes/parser/parser.h"
#include "../../includes/parser/typedefs.h"
using namespace std;

SQL::SQL() {
    cout << "SQL constructor fired!" << endl;
    _tables.clear();
    _select_recnos.clear();
    _parser.set_string("");
    }

Table SQL::command(const string& cmd) {
    cout << "\n=====Command Function Fired!=====\n " << cmd << endl;

    _parser.set_string(cmd);

    mmap_ss ptree = _parser.parse_tree();

    string command = ptree["command"][0];

    cout << ">>> Parsed command: " << command << endl;

    if (command == "make") {
        cout << ">>> ------>> cmd[0] = Make----------------" << endl;
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree["col"];

        if (_tables.find(table_name) != _tables.end()) {
            cout << "Table already exists. Overwriting: " << table_name << endl;
            _tables.erase(table_name);
            }

        cout << ">>> Creating table: " << table_name << " with fields: ";
        for (const auto& field : fields) {
            cout << field << " ";
            }
        cout << endl;
        _tables[table_name] = Table(table_name, fields);  // create a new table

        }
    else if (command == "insert") {
        cout << ">>> ------>> cmd[0] = insert----------------" << endl;

        string table_name = ptree["table_name"][0];
        vector<string> values = ptree["values"];

        cout << ">>> Inserting into table: " << table_name << " values: ";
        for (const auto& value : values) {
            cout << value << " ";
            }
        cout << endl;


        _tables[table_name].insert_into(values);
        }

    else if (command == "select") {
        cout << ">>> ------>> cmd[0] = select---------------" << endl;
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree.get("fields");
        Table result;

        if (_tables.find(table_name) == _tables.end()) {
            throw runtime_error("Table does not exist: " + table_name);
            }

        // Check if there's a 'where' condition
        if (ptree.find("where") != ptree.end()) {
            cout << ">>> Applying WHERE condition." << endl;

            Queue<Token*> infix_condition;
            cout << ">>> Condition from parse tree: " << ptree.get("condition") << endl;

            vector<string> infix = ptree.get("condition");
            string cond;
            for (size_t i = 0; i < infix.size(); ++i) {
                cond += infix[i] + " ";
                }

            _parser.tokenize(cond, infix_condition);
            //cout << ">>> Infix condition: " << infix_condition << endl;
            // Convert the condition to postfix expression using the Parser's function
            Queue<Token*> postfix_condition = _parser.convert_to_postfix(infix_condition);

            // Call Table's select function with fields and postfix condition
            result = _tables[table_name].select(fields, postfix_condition);
            }
        else {
            // Select all records
            cout << ">>> No WHERE condition found. Selecting all records." << endl;
            result = _tables[table_name].select_all(fields);
            }
        //------------------------------Debug _select_recnos-------------------------------------------------
         //Update SQL::_select_recnos with the selected record numbers from the result table
        _select_recnos = result.get_select_recnos();
        // Store the result table
        return result;
        }


    return Table();  // Return an empty table by default
    }




