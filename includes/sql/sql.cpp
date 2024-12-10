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
                result = _tables[table_name].select(fields, postfix_condition);


                }
            else {
                // Select all records
                cout << ">>> No WHERE condition found. Selecting all records." << endl;
                result = _tables[table_name].select_all(fields);

                }
            //------------------------------Debug _select_recnos-------------------------------------------------
               // get the selected record numbers and store them in  multimap _select_recnos
            vector<long> recnos = result.get_select_recnos();
            _tables[table_name].get_select_recnos() = recnos;
            cout << "Debug: _tables[table_name].get_select_recnos() = " << _tables[table_name].get_select_recnos() << endl;
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
    if (_select_recnos.empty()) {
        cout << "Debug: _select_recnos is empty. No records selected." << endl;
        return {};
        }
    // Get the last entry in the multimap
    const auto& last_entry = _select_recnos.rbegin(); // get the last entry in the multimap

    auto it = _select_recnos.begin();
    while (it != _select_recnos.end()) {
        cout << "[Key]Record Numbers: ";
        for (const auto& recno : it->first) {
            cout << recno << " ";
            }

        cout << " -> [Value]Tables: ";
        auto range = _select_recnos.equal_range(it->first);
        for (auto val_it = range.first; val_it != range.second; ++val_it) {
            cout << val_it->second.get_name() << " ";
            }
        cout << endl;

        it = range.second;
        }

    return last_entry->first;
    }


