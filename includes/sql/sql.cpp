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

// trim from start (in place)
static void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [] (unsigned char ch)
        { return !isspace(ch); }));
    }

// trim from end (in place)
static void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [] (unsigned char ch)
        { return !isspace(ch); })
        .base(),
        s.end());
    }

static int query_number = 0; // For numbering queries
SQL::SQL() {
    ifstream in("_tables.txt");
    if (!in.is_open()) {
        cerr << "Warning: Could not open tables.txt. Starting with an empty _tables map." << endl;
        return;
        }

    string line;
    while (getline(in, line)) {
        std::stringstream ss(line);
        string table_name;
        ss >> table_name;
        string file_name;
        ss >> file_name;
        Table table(table_name);
        _tables.insert(table_name, table);
        }
    }


SQL::~SQL() {
    // Write the tables to "tables.txt"
    ofstream out("_tables.txt", ios::trunc);
    if (!out.is_open()) {
        cerr << "Error: Could not open tables.txt for writing." << endl;
        return;
        }

    for (const auto &pair : _tables) {
        // out << pair.key << endl; // Write table name
        out << pair.key << "\t" << pair.value.get_file_name() << endl;
        // Ensure field file for the table exists
        // const auto& table = pair.value;
        // ofstream field_file(pair.key + "_fields.txt");
        // if (!field_file.is_open()) {
        //     cerr << "Error: Could not write fields file for table " << pair.value << endl;
        //     continue;
        //     }

        // for (const auto& field : table.get_field_names()) {
        //     field_file << field << endl; // Write fields to the file
        //     }
        // field_file.close();
        }
    out.close();
    }

Table SQL::command(const string &cmd) {
    // cout << "SQL::command() fired: " << cmd << endl;
    if (cmd.empty()) {
        return Table();
        }

    if (cmd.substr(0, 2) == "//") {
        cout << cmd << endl;
        return Table();
        }

    cout << "[" << query_number++ << "] " << cmd << endl;
    try {
        Table result = execute_command(cmd); // Delegate execution to `execute_command`
        cout << "SQL: DONE." << endl;
        //_tables[result.get_name()] = result;
        return result; // Return the resulting table
        }
    catch (const exception &e) {
        cerr << "Error executing command: " << e.what() << endl;
        return Table(); // Return an empty table on error
        }
    }

Table SQL::execute_command(const string &cmd) {
    if (cmd.empty()) {
        return Table();
        }
    // cout << "\n===== Execute Command Function Fired! =====\n " << cmd << endl;

    // Set the string in the parser
    _parser.set_string(cmd);

    // Get the parse tree
    mmap_ss ptree = _parser.parse_tree();
    // cout << "SQL::execute_command() | Parse tree contents: " << ptree << endl;

    string command = ptree["command"][0];
    // cout << ">>> Parsed command: " << command << endl;

    if (command == "make" || command == "create") {
        // Create or overwrite a table
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree["col"];
        string table_file = table_name + ".tbl";

        if (file_exists(table_file.c_str())) {
            // cout << "Removing existing table file: " << table_file << endl;
            remove(table_file.c_str());
            }
        Table new_tb(table_name, fields);
        _tables[table_name] = new_tb;

        cout << "Table " << table_name << " created. cols : ";
        for (const auto &field : fields)
            cout << field << " ";
        cout << endl;

        return _tables[table_name];
        }
    else if (command == "insert") {
        string table_name = ptree["table_name"][0];
        vector<string> values = ptree["values"];
        for (size_t i = 0; i < values.size(); i++) {
            ltrim(values[i]);
            rtrim(values[i]);
            }

        for (size_t i = 0; i < values.size(); i++) {
            if (!values[i].empty() && values[i].front() == '"' && values[i].back() == '"') {
                values[i] = values[i].substr(1, values[i].size() - 2); // Remove quotes
                }
            }

        if (_tables.find(table_name) == _tables.end()) {
            throw runtime_error("Table does not exist: " + table_name);
            }

        _tables[table_name].insert_into(values);

        cout << "SQL::run: inserted." << endl;

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
            Queue<Token *> infix_condition;
            vector<string> infix = ptree.get("condition");
            for (size_t i = 0; i < infix.size(); i++) {
                ltrim(infix[i]);
                rtrim(infix[i]);
                }
            string cond;
            for (const auto &token : infix) {
                cond += token + " ";
                }

            _parser.tokenize(cond, infix_condition);
            Queue<Token *> postfix_condition = _parser.convert_to_postfix(infix_condition);

            result = _tables[table_name].select(fields, postfix_condition);
            }
        else {
            // Select all records
            // cout << ">>> No WHERE condition found. Selecting all records." << endl;
            result = _tables[table_name].select_all(fields);
            }

        // Update SQL::_select_recnos with the selected record numbers from the result table
        _select_recnos = result.get_select_recnos();

        if (!result.get_name().empty()) { // Check if the table name is non-empty to validate result
            cout << "Table name: " << result.get_name()
                << ", records: " << result.get_select_recnos().size() << endl;
            cout << result << endl; // Print formatted table
            }
        else {
            // cout << "No records returned or command executed without a result table." << endl;
            }
        return result;
        }

    throw runtime_error("Unknown command: " + command); // Handle unsupported commands
    }
