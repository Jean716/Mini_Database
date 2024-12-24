#include "sql.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <map>
#include <filesystem>
#include "../../includes/bplustree/multimap.h"
#include "../../includes/bplustree/map.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"
#include "../../includes/parser/parser.h"
#include "../../includes/parser/typedefs.h"
using namespace std;
int query_number = 0;
SQL::SQL() {
    //cout << "SQL constructor fired!" << endl;
    if (!_tables.empty()) {
        _tables.clear();
        }

    if (!_select_recnos.empty()) {
        _select_recnos.clear();
        }

    _parser.set_string("");

    }

Table SQL::command(const string& cmd) {
    cout << "SQL::command() fired!" << endl;
    static int query_number = 0; // For numbering queries
    cout << "\n[" << query_number++ << "] " << cmd << endl; // Print the query number and command

    try {
        Table result = execute_command(cmd); // Delegate execution to `execute_command`
        if (!result.get_name().empty()) { // Check if the table name is non-empty to validate result
            cout << "Table name: " << result.get_name()
                << ", records: " << result.get_select_recnos() << endl;
            cout << result << endl; // Print formatted table
            }
        else {
            cout << "No records returned or command executed without a result table." << endl;
            }
        return result; // Return the resulting table
        }
    catch (const exception& e) {
        cerr << "Error executing command: " << e.what() << endl;
        return Table(); // Return an empty table on error
        }
    }

Table SQL::execute_command(const string& cmd) {
    //cout << "\n===== Execute Command Function Fired! =====\n " << cmd << endl;

    // Set the string in the parser
    _parser.set_string(cmd);

    // Get the parse tree
    mmap_ss ptree = _parser.parse_tree();
    //cout << "SQL::execute_command() | Parse tree contents: " << ptree << endl;

    string command = ptree["command"][0];
    //cout << ">>> Parsed command: " << command << endl;

    if (command == "make" || command == "create") {
        // Create or overwrite a table
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree["col"];
        string table_file = table_name + ".tbl";

        if (file_exists(table_file.c_str())) {
            //cout << "Removing existing table file: " << table_file << endl;
            remove(table_file.c_str());
            }

        // cout << ">>> Creating table: " << table_name << " with fields: ";
        // for (const auto& field : fields) {
        //     cout << field << " ";
        //     }
        // cout << endl;

        _tables.insert(table_name, Table(table_name, fields));
        //cout << ">>> Table created successfully: " << table_name << endl;
        return _tables[table_name];
        }
    else if (command == "insert") {
        // Insert into an existing table
        string table_name = ptree["table_name"][0];
        vector<string> values = ptree["values"];

        cout << ">>> Inserting into table: " << table_name << " values: ";
        for (const auto& value : values) {
            cout << value << " ";
            }
        cout << endl;

        if (_tables.find(table_name) == _tables.end()) {
            throw runtime_error("Table does not exist: " + table_name);
            }

        _tables[table_name].insert_into(values);
        //cout << ">>> Insert completed for table: " << table_name << endl;

        return _tables[table_name];
        }
    else if (command == "select") {
        // Handle SELECT command
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree.get("fields");
        Table result;

        if (_tables.find(table_name) == _tables.end()) {
            throw runtime_error("Table does not exist: " + table_name);
            }

        if (ptree.find("where") != ptree.end()) {
            // Process WHERE condition
            Queue<Token*> infix_condition;
            vector<string> infix = ptree.get("condition");
            string cond;
            for (const auto& token : infix) {
                cond += token + " ";
                }

            _parser.tokenize(cond, infix_condition);
            Queue<Token*> postfix_condition = _parser.convert_to_postfix(infix_condition);

            result = _tables[table_name].select(fields, postfix_condition);
            }
        else {
            // Select all records
            //cout << ">>> No WHERE condition found. Selecting all records." << endl;
            result = _tables[table_name].select_all(fields);
            }

        // Update SQL::_select_recnos with the selected record numbers from the result table
        _select_recnos = result.get_select_recnos();
        return result;
        }

    throw runtime_error("Unknown command: " + command); // Handle unsupported commands
    }

// Table SQL::command(const string& cmd) {
//     cout << "\n=====Command Function Fired!=====\n " << cmd << endl;

//     // set the string in the parser
//     _parser.set_string(cmd);

//     //get the parse tree 
//     mmap_ss ptree = _parser.parse_tree();
//     cout << "SQL::command()| Parse tree contents: " << ptree << endl;


//     string command = ptree["command"][0];
//     cout << ">>> Parsed command: " << command << endl;

//     if (command == "make" || command == "create") {
//         cout << ">>> ------>> cmd[0] = Make----------------" << endl;

//         //get table name and fields
//         string table_name = ptree["table_name"][0];
//         vector<string> fields = ptree["col"];

//         string table_file = table_name + ".tbl";
//         if (file_exists(table_file.c_str())) {
//             cout << "Removing existing table file: " << table_file << endl;
//             remove(table_file.c_str());
//             }
//         // Create a new table
//         cout << ">>> Creating table: " << table_name << " with fields: ";
//         for (const auto& field : fields) {
//             cout << field << " ";
//             }
//         cout << endl;

//         _tables.insert(table_name, Table(table_name, fields));
//         cout << ">>> Table created successfully: " << table_name << endl;
//         return _tables[table_name];
//         }
//     else if (command == "insert") {
//         cout << ">>> ------>> cmd[0] = insert----------------" << endl;

//         string table_name = ptree["table_name"][0];
//         vector<string> values = ptree["values"];

//         cout << ">>> Inserting into table: " << table_name << " values: ";
//         for (const auto& value : values) {
//             cout << value << " ";
//             }
//         cout << endl;

//         //debug - check if table exists
//         if (_tables.find(table_name) == _tables.end()) {
//             throw runtime_error("Table does not exist: " + table_name);
//             }


//         _tables[table_name].insert_into(values);
//         cout << ">>> Insert completed for table: " << table_name << endl;

//         return _tables[table_name];
//         }

//     else if (command == "select") {
//         cout << ">>> ------>> cmd[0] = select---------------" << endl;

//         string table_name = ptree["table_name"][0];
//         vector<string> fields = ptree.get("fields");
//         Table result;

//         if (_tables.find(table_name) == _tables.end()) {
//             throw runtime_error("Table does not exist: " + table_name);
//             }


//         // Check if there's a 'where' condition
//         if (ptree.find("where") != ptree.end()) {
//             cout << ">>> Applying WHERE condition." << endl;

//             Queue<Token*> infix_condition;
//             cout << ">>> Condition from parse tree: " << ptree.get("condition") << endl;

//             vector<string> infix = ptree.get("condition");
//             string cond;
//             for (size_t i = 0; i < infix.size(); ++i) {
//                 cond += infix[i] + " ";
//                 }

//             _parser.tokenize(cond, infix_condition);
//             //cout << ">>> Infix condition: " << infix_condition << endl;
//             // Convert the condition to postfix expression using the Parser's function
//             Queue<Token*> postfix_condition = _parser.convert_to_postfix(infix_condition);

//             // Call Table's select function with fields and postfix condition
//             result = _tables[table_name].select(fields, postfix_condition);
//             }
//         else {
//             // Select all records
//             cout << ">>> No WHERE condition found. Selecting all records." << endl;
//             result = _tables[table_name].select_all(fields);
//             }
//         //------------------------------Debug _select_recnos-------------------------------------------------
//          //Update SQL::_select_recnos with the selected record numbers from the result table
//         _select_recnos = result.get_select_recnos();
//         // Store the result table
//         return result;
//         }
//     return Table();  // Return an empty table by default
//     }




