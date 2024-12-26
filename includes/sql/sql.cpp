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
static void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

static int query_number = 0; // For numbering queries
SQL::SQL()
{
    // cout << "SQL constructor fired!" << endl;
    if (!_tables.empty())
    {
        _tables.clear();
    }

    if (!_select_recnos.empty())
    {
        _select_recnos.clear();
    }

    _parser.set_string("");
}

Table SQL::command(const string &cmd)
{
    // cout << "SQL::command() fired: " << cmd << endl;
    if (cmd.empty())
    {
        return Table();
    }

    if (cmd.substr(0, 2) == "//")
    {
        cout << cmd << endl;
        return Table();
    }

    cout << "[" << query_number++ << "] " << cmd << endl;
    try
    {
        Table result = execute_command(cmd); // Delegate execution to `execute_command`
        std::cout << "SQL: DONE." << std::endl;
        return result; // Return the resulting table
    }
    catch (const exception &e)
    {
        cerr << "Error executing command: " << e.what() << endl;
        return Table(); // Return an empty table on error
    }
}

Table SQL::execute_command(const string &cmd)
{
    if (cmd.empty())
    {
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

    if (command == "make" || command == "create")
    {
        // Create or overwrite a table
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree["col"];
        string table_file = table_name + ".tbl";

        if (file_exists(table_file.c_str()))
        {
            // cout << "Removing existing table file: " << table_file << endl;
            remove(table_file.c_str());
        }
        _tables.insert(table_name, Table(table_name, fields));
        
        std::cout << "Table " << table_name << " created. cols : ";
        for (const auto &field : fields)
            std::cout << field << " ";
        std::cout << std::endl;

        return _tables[table_name];
    }
    else if (command == "insert")
    {
        string table_name = ptree["table_name"][0];
        vector<string> values = ptree["values"];
        for(size_t i = 0; i < values.size(); i++){
            ltrim(values[i]);
            rtrim(values[i]);
        }

        if (_tables.find(table_name) == _tables.end())
        {
            throw runtime_error("Table does not exist: " + table_name);
        }

        _tables[table_name].insert_into(values);

        std::cout << "SQL::run: inserted." << std::endl;

        return _tables[table_name];
    }
    else if (command == "select")
    {
        // Handle SELECT command
        string table_name = ptree["table_name"][0];
        vector<string> fields = ptree.get("fields");
        Table result;

        if (_tables.find(table_name) == _tables.end())
        {
            throw runtime_error("Table does not exist: " + table_name);
        }

        if (ptree.find("where") != ptree.end())
        {
            // Process WHERE condition
            Queue<Token *> infix_condition;
            vector<string> infix = ptree.get("condition");
            for(size_t i = 0; i < infix.size(); i++){
                ltrim(infix[i]);
                rtrim(infix[i]);
            }
            string cond;
            for (const auto &token : infix)
            {
                cond += token + " ";
            }

            _parser.tokenize(cond, infix_condition);
            Queue<Token *> postfix_condition = _parser.convert_to_postfix(infix_condition);

            result = _tables[table_name].select(fields, postfix_condition);
    
        }
        else
        {
            // Select all records
            // cout << ">>> No WHERE condition found. Selecting all records." << endl;
            result = _tables[table_name].select_all(fields);
        }

        // Update SQL::_select_recnos with the selected record numbers from the result table
        _select_recnos = result.get_select_recnos();
        
        if (!result.get_name().empty())
        { // Check if the table name is non-empty to validate result
            cout << "Table name: " << result.get_name()
                 << ", records: " << result.get_select_recnos().size() << endl;
            cout << result << endl; // Print formatted table
        }
        else
        {
            // cout << "No records returned or command executed without a result table." << endl;
        }
        return result;
    }

    throw runtime_error("Unknown command: " + command); // Handle unsupported commands
}
