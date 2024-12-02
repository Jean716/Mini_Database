#include "sql.h"
#include <iostream>
using namespace std;

#include "sql.h"
#include <iostream>
using namespace std;

Table SQL::command(const string& cmd) {
    cout << ">>> Received command: " << cmd << endl;
    _parser.set_string(cmd);
    mmap_ss ptree = _parser.parse_tree();
    string command = ptree["command"][0];
    cout << ">>> Parsed command: " << command << endl;

    if (command == "make") {
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree["col"];
        cout << ">>> Creating table: " << table_name << " with fields: ";
        for (const auto& field : fields) {
            cout << field << " ";
            }
        cout << endl;
        _tables[table_name] = Table(table_name, fields);
        }
    else if (command == "insert") {
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
        }
    // else if (command == "select") {
    //     }
    else {
        throw runtime_error("Unsupported SQL command: " + command);
        }

    cout << "Command executed successfully." << endl;
    return Table();
    }

