#include "sql.h"
#include <iostream>
#include <fstream> 
#include <string>
#include "../../includes/bplustree/multimap.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"
using namespace std;

Table SQL::command(const string& cmd) {
    try {
        cout << "Command Function Fired! " << cmd << endl;

        _parser.set_string(cmd);
        mmap_ss ptree = _parser.parse_tree();

        string command = ptree["command"][0];

        cout << ">>> Parsed command: " << command << endl;

        if (command == "make") {
            cout << ">>> ------>> cmd[0] = Make----------------" << endl;
            string table_name = ptree["table_name"][0];
            vector<string> fields = ptree["col"];
            cout << ">>> Creating table: " << table_name << " with fields: ";
            for (const auto& field : fields) {
                cout << field << " ";
                }
            cout << endl;
            _table = Table(table_name, fields);
            cout << "Make a new table: " << endl;
            cout << _table << endl;
            _tables.insert({ table_name,_table });
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


            _table.insert_into(values);
            cout << "Current table: " << endl;
            cout << _table << endl;

            _tables[_table.get_name()] = _table;


            //_tables[table_name].insert_into(values);
            }

        else if (command == "select") {
            cout << ">>> ------>> cmd[0] = select---------------" << endl;
            string table_name = ptree["table_name"][0];
            cout << ">>> Selecting from table: " << table_name << endl;
            vector<string> fields = ptree.get("fields");
            Table result;

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
                result = _table.select(fields, postfix_condition);

                _tables.insert({ _table.get_name(), result });


                }
            else {
                // Select all records
                cout << ">>> No WHERE condition found. Selecting all records." << endl;
                result = _table.select_all(fields);
                _tables.insert({ _table.get_name(), result });


                }
            //------------------------------Debug _select_recnos-------------------------------------------------
               // get the selected record numbers and store them in  multimap _select_recnos
            vector<long> recnos = result.get_select_recnos();
            _table.get_select_recnos() = recnos;
            // _tables[table_name].get_select_recnos() = recnos;
            _select_recnos.insert({ recnos, result });
            //---------------------------------------------------------------------------------------------------
            cout << "debug: command()::Record Number: ";
            for (const auto& recno : recnos) {
                cout << recno << "";
                }
            cout << endl;

            // Store the result table
            _table = result;
            return result;
            }
        else {
            throw runtime_error("Unsupported SQL command: " + command);
            }
        }

    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;

        ofstream log("debug.log", ios::app);
        log << "Error: " << e.what() << endl;
        log.close();
        }
    catch (...) {
        cerr << "Unknown error occurred while executing command: " << cmd << endl;
        }


    return Table();  // Return an empty table by default
    }

const vector<long> SQL::select_recnos() const {

    return _table.get_select_recnos();

    }


