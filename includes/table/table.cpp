#include "table.h"
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "../../includes/queue/MyQueue.h"
#include "../../includes/token/token.h"
#include "../../includes/bplustree/bplustree.h"
#include "../../includes/bplustree/map.h"
#include "../../includes/bplustree/multimap.h"
#include "../../includes/binary_files/file_record.h"
#include "../../includes/binary_files/utilities.h"
#include "../../includes/bplustree/btree_array_functions.h"
#include "../../includes/stack/MyStack.h"
#include "../../includes/shunting_yard/shunting_yard.h"
#include "../../includes/rpn/rpn.h"
#include "../../includes/rpn/rpn.h"
int Table::serial = 0;

Table::Table() {
    DEBUG_PRINT("-------Table ctor 1 fired!-------");
    // serial++;
    // _name = "_select_table_" + to_string(serial);
    _name = "";
    _file_name = "";
    _empty = true;
    _last_record = -1;
    _field_names = vector<string>();
    _select_recnos = vector<long>();
    _field_map = map<string, long>();
    _keyword = map<string, long>();
    _indices = vector<multimap<string, long>>();

    DEBUG_PRINT("Table serial number: " << serial);
    DEBUG_PRINT("Table file name: " << _file_name);

    cout << "-------------Table ctor 1 Done!-----" << endl;
    }

Table::Table(const string& name) {
    DEBUG_PRINT("-------Table ctor 2 fired!-------");
    //serial++;
    _name = name;
    _file_name = name + ".tbl";

    // 1. open
    string fields_file = name + "_fields.txt";
    ifstream field_file(fields_file);
    if (!field_file.is_open()) {
        throw runtime_error("Fields file not found: " + fields_file);
        }
    vector<string> field_names;
    string field;
    while (getline(field_file, field)) {
        field_names.push_back(field);
        }
    field_file.close();

    set_fields(field_names);


    // 4. read the table file and build the indices
    fstream table_file;
    open_fileRW(table_file, _file_name.c_str());
    table_file.seekg(0, ios::beg);

    long record_size = FileRecord::MAX_ROWS * FileRecord::MAX_COLS;
    // long total_records =filesystem::file_size(_file_name) / record_size;
    long total_records = get_file_size(_file_name) / record_size;

    // 5. filter out the empty records
   // filter_unique_records(table_file, total_records, valid_records);
    table_file.close();

    // update the table state
    _select_recnos.clear();
    for (long i = 0; i <= _last_record; ++i) {
        _select_recnos.push_back(i);
        }
    cout << "Table(name)::_select_recnos: ";
    for (const auto& recno : _select_recnos) {
        cout << to_string(recno);
        }

    // 6. reindex the table
    reindex();


    DEBUG_PRINT("-------------------Table ctor 2 Done!----------------------------");
    }

//LINK - Table ctor 3
Table::Table(const string& name, const vector<string> &fields_names) {
    DEBUG_PRINT("-------Table ctor 3 fired!-------");
    serial++;
    _name = name;
    _field_names = fields_names;
    _empty = true;
    _last_record = -1;
    _file_name = _name + ".tbl";
    ofstream ofs(_file_name, ios::trunc | ios::binary);
    ofs.close();

    DEBUG_PRINT("Table serial number: " << serial);

    // create a file for the table
    ofstream field_file(_name + "_fields.txt");

    for (size_t i = 0; i < _field_names.size(); ++i) {
        field_file << _field_names[i] << endl;
        _field_map[_field_names[i]] = i;
        _indices.push_back(multimap<string, long>());
        DEBUG_PRINT("Field added: " << _field_names[i]);
        }
    field_file.close();

    cout << "-------------------Table ctor 3 Done!----------------------------" << endl;

    cout << "Current state of _indices:" << endl;
    cout << "_indices size: " << _indices.size() << endl;
    for (size_t i = 0; i < _indices.size(); ++i) {
        cout << "Index " << i << " initialized for field: " << _field_names[i] << endl;
        }
    cout << "-----------------------------------------------" << endl;
    }

void Table::clear_data() {
    ofstream ofs(_file_name, ios::trunc | ios::binary);
    ofs.close();

    _last_record = -1;
    _select_recnos.clear();
    _empty = true;
    _indices.clear();

    reindex();
    }

void Table::delete_table() {
    if (remove(_file_name.c_str()) != 0) {
        cerr << "Error removing " << _file_name << endl;
        }
    else {
        cout << "Table file " << _file_name << " removed." << endl;
        }

    string fields_file = _name + "_fields.txt";
    if (remove(fields_file.c_str()) != 0) {
        cerr << "Error removing " << fields_file << endl;
        }
    else {
        cout << "Fields file " << fields_file << " removed." << endl;
        }

    _field_names.clear();
    _field_map.clear();
    _indices.clear();
    _select_recnos.clear();
    _empty = true;
    _last_record = -1;
    }


bool Table::record_exists(const vector<string>& fields) {
    if (fields.size() != _field_names.size()) {
        return false;
        }

    vector<long> intersection;
    {
    int field_index = _field_map.at(_field_names[0]);
    string val = fields[0];

    auto range = _indices[field_index].equal_range(val);
    for (auto it = range.first; it != range.second; ++it) {
        intersection.push_back(it->second);
        }

    if (intersection.empty()) {
        return false;
        }
    }

    for (size_t i = 1; i < fields.size(); ++i) {
        int field_index = _field_map.at(_field_names[i]);
        string val = fields[i];

        vector<long> current_recnos;
        {
        auto range = _indices[field_index].equal_range(val);
        for (auto it = range.first; it != range.second; ++it) {
            current_recnos.push_back(it->second);
            }
        }

        vector<long> new_intersection;
        sort(intersection.begin(), intersection.end());
        sort(current_recnos.begin(), current_recnos.end());
        set_intersection(
            intersection.begin(), intersection.end(),
            current_recnos.begin(), current_recnos.end(),
            back_inserter(new_intersection)
        );

        intersection = new_intersection;

        if (intersection.empty()) {
            return false;
            }
        }

    return !intersection.empty();
    }
//LINK - insert_into
int Table::insert_into(vector<string>& fields) {
    cout << "\n-------Table::insert_into fired!-------" << endl;
    cout << "Fields to insert : " << fields << endl;
    cout << "_field_names " << _field_names << endl;
    cout << "_field_names size: " << _field_names.size() << endl;
    cout << "_field_map.size() " << _field_map.size() << endl;


    // 1. check if the number of fields matches the table definition
    if (_field_map.size() != _field_names.size()) {
        throw runtime_error("The number of fields does not match the table definition.");
        }
    //---------------------------------------------------------
    // if (record_exists(fields)) {
    //     cout << "Duplicate record found, skipping insertion." << endl;
    //     return _last_record;
    //     }

    //---------------------------------------------------------
    // 2. create FileRecord object and open the file
    FileRecord record(fields);
    fstream file;
    open_fileRW(file, _file_name.c_str());

    // 3. write the record to the file
    long record_number = _last_record + 1;
    record.write(file);

    cout << "Record written successfully with record number: " << record_number << endl;

    // update _last_record and _select_recnos
    _last_record = record_number;
    _select_recnos.push_back(record_number);

    // update the indices
    cout << "\nUpdating _indices with field values:" << endl;
    //------------------------for loop  -----------------------------------------
    for (size_t i = 0; i < fields.size(); ++i) {
        string field_value = fields[i];
        string field_name = _field_names[i];
        //---------------------------------------------------------
        // cout << "Field map contents:" << endl;
        // for (const auto& pair : _field_map) {
        //     cout << pair.first << " -> " << pair.second << endl;
        //     }
        //---------------------------------------------------------

        cout << "Field name: " << _field_names[i] << endl;
        int field_index = _field_map.at(_field_names[i]);
        cout << "Field index for " << field_name << ": " << field_index << endl;

        cout << "Inserting field value: " << field_value << " for field: " << field_name << " at index: " << field_index;

        // insert into the corresponding index
        _indices[field_index].insert(make_pair(fields[i], record_number));

        cout << "Inserted into _indices[" << field_index << "]: (" << field_value << ", " << record_number << ")";
        }

    //------------------------for loop  done-------------------------


    file.close();
    return record_number;
    }

//LINK - vector_to_table
Table Table::vector_to_table(const vector<string>& fields, const vector<long>& vector_of_recnos) {
    cout << "-------Table::vector_to_table fired!-------" << endl;

    cout << "vector_to_table :: check vector_of_recnos: ";
    for (const auto& recno : vector_of_recnos) {
        cout << recno << " ";
        }

    // 1. Handle '*' case
    vector<string> actual_fields;
    if (fields.size() == 1 && fields[0] == "*") {
        cout << "'*' detected. Expanding to all fields." << endl;
        actual_fields = _field_names;
        }
    else {
        actual_fields = fields;
        }


    // 2. Initialize new table,use the constructor3
    string new_table_name = "_selected_table_" + to_string(serial);
    Table new_table(new_table_name, actual_fields);

    // 3. Open original file for reading
    fstream file;
    open_fileRW(file, _file_name.c_str());
    cout << "File opened for reading: " << _file_name << endl;

    // 4. Open new file for writing
    fstream new_file;
    open_fileW(new_file, new_table.get_file_name().c_str());
    cout << "File opened for writing: " << new_table.get_file_name() << endl;


    // 5. Process each record in vector_of_recnos
    for (const auto& recno : vector_of_recnos) {
        FileRecord record;
        record.read(file, recno);
        vector<string> record_fields;
        for (const auto& field : actual_fields) {
            int field_index = field_col_no(field);
            if (field_index == -2) {
                // Handle '*': Add all fields
                record_fields.insert(record_fields.end(), record.get_record().begin(), record.get_record().end());
                break;
                }
            else if (field_index == -1 || field_index == -3) {
                cout << "Field not found: " + field << endl;
                continue;
                }
            else {
                record_fields.push_back(record[field_index]);
                }
            }

        FileRecord new_record(record_fields);
        new_record.write(new_file);

        new_table.insert_into(record_fields);
        }

    // 6. Close files
    file.close();
    new_file.close();

    cout << "Vector_to_table :: record numbers: ";
    for (const auto& recno : new_table.get_select_recnos()) {
        cout << recno << " ";
        }
    cout << endl;

    cout << "Vector_to_table :: table name: " << new_table.get_name() << endl;
    cout << "-------------------Table::vector_to_table done!----------------------------" << endl;

    return new_table;
    }
//set fields
void Table::set_fields(vector<string>& fld_names) {
    DEBUG_PRINT("-------set_fields fired!-------");
    _field_names = fld_names;
    _field_map.clear();
    _indices.clear();

    for (size_t i = 0; i < fld_names.size(); ++i) {
        _field_map[fld_names[i]] = i;
        _indices.push_back(multimap<string, long>());
        DEBUG_PRINT("Field added: " << fld_names[i] << " at index " << i);
        }

    DEBUG_PRINT("-------set_fields done!-------");
    }
vectorstr Table::get_fields() const { return _field_names; }


bool Table::is_empty() { return _empty; }

//LINK - field_col_no
int Table::field_col_no(string field_name) {
    cout << "-------Table::field_col_no fired!-------" << endl;
    cout << "Field name: " << field_name << endl;
    cout << "Field map size:" << _field_map.size() << endl;

    cout << endl;

    field_name.erase(remove_if(field_name.begin(), field_name.end(), ::isspace), field_name.end());

    if (field_name == "*") {
        cout << "'*' detected; returning -2 (indicating all fields)." << endl;
        return -2;   // -2 indicates all fields
        }

    cout << "Field map contents:" << endl;
    for (const auto& pair : _field_map) {
        cout << pair.first << " -> " << pair.second << endl;
        }

    if (_field_map.find(field_name) != _field_map.end()) {
        cout << "Field found: " << field_name << " at index "
            << _field_map.at(field_name) << endl;
        return _field_map.at(field_name);
        }

    cout << "Field not found: " << field_name << ". Returning -3." << endl;
    return -3;
    }

//LINK - get_matching_recnos
vectorlong Table::get_matching_recnos(const string& field_name, const string& field_value) {
    vectorlong recnos;

    int field_index = field_col_no(field_name);
    if (field_index == -1) {
        throw runtime_error("Field not found: " + field_name);
        }

    auto range = _indices[field_index].equal_range(field_value);
    for (auto it = range.first; it != range.second; ++it) {
        recnos.push_back(it->second);
        }

    return recnos;
    }

//LINK - select_all
Table Table::select_all(vector<string> fields) {
    cout << "-------Table::select_all fired!-------" << endl;
    vector<long> recnos;
    for (long i = 0; i <= _last_record; ++i) {
        recnos.push_back(i);
        }
    //---------------------------------------------------------
    cout << "select_all()::recnos: ";
    for (const auto& recno : recnos) {
        cout << recno << " ";
        }
    cout << endl;
    //---------------------------------------------------------

    Table t = vector_to_table(fields, recnos);
    _select_recnos = t._select_recnos;

    return t;
    }

// cout << "Before assignment, _select_recnos: ";
// for (const auto& recno : _select_recnos) {
//     cout << recno << " ";
//     }
// cout << endl;
// Table new_table;
// new_table._field_names = fields;
// new_table._field_map = _field_map;

// new_table._select_recnos = _select_recnos;

// cout << "Records selected in select_all:";
// for (const auto& recno : _select_recnos) {
//     cout << recno << " ";
//     }
// cout << endl;
// for (const auto& index : _indices) {
//     new_table._indices.push_back(index);
//     }


// //LINK - select (RPN)

Table Table::select(const vector<string>&  fields, const Queue<Token*>& postfix) {
    cout << "-------Table::select fired!-------" << endl;

    vector<long> matching_recnos = cond(postfix);

    cout << "Matching record numbers:" << endl;
    for (long rec : matching_recnos) {
        cout << "  " << rec << " ";
        }
    cout << endl;

    Table result = vector_to_table(fields, matching_recnos);

    cout << "vector_to_table() result->_name: " << result._name << endl;

    cout << result;
    result._select_recnos = matching_recnos;
    // _select_recnos = matching_recnos;
    _select_recnos = result._select_recnos;



    DEBUG_PRINT("-------Table::select done!-------");
    return result;
    }


//LINK - reindex
void Table::reindex() {
    DEBUG_PRINT("-------reindex fired!-------");
    _indices.clear();
    //_select_recnos.clear();

    for (size_t i = 0; i < _field_names.size(); ++i) {
        _indices.push_back(multimap<string, long>()); // push an empty multimap for each field
        }

    fstream file;
    open_fileRW(file, _file_name.c_str());
    for (long recno = 0; recno <= _last_record; ++recno) {
        FileRecord record;
        record.read(file, recno);
        for (size_t i = 0; i < _field_names.size(); ++i) {
            string field_value(record._record[i]);
            _indices[i].insert(make_pair(field_value, recno));
            }
        }
    file.close();

    DEBUG_PRINT("-------reindex done!-------");
    }



//LINK - cond
vector<long> Table::cond(const Queue<Token*>& postfix) {
    cout << "-------Table::cond fired!-------" << endl;
    cout << "Postfix expression: ";
    cout << postfix << endl;

    ResultSet result_set;
    Stack<vectorlong> logical_stack;
    Stack<string> string_stack;
    Queue<Token*> temp_postfix = postfix;

    while (!temp_postfix.empty()) {
        Token* token = temp_postfix.pop();

        if (token->type() == TOKEN_STRING || token->type() == TOKEN_NUMBER || token->type() == TOKEN_ALFA) {
            string_stack.push(token->value());
            }

        else if (token->type() == TOKEN_RELATIONAL_OPERATOR) {
            if (string_stack.size() < 2) {
                throw runtime_error("Invalid condition: Missing field or value");
                }

            string field_value = string_stack.pop();
            string field_name = string_stack.pop();

            int field_index = field_col_no(field_name);
            cout << "Field index for " << field_name << ": " << field_index << endl;
            if (field_index == -1) {
                throw runtime_error("Field not found: " + field_name);
                }
            if (field_index == -3) {
                cout << "Field not found: " << field_name << ". Returning empty results." << endl;
                return {};
                }

            const auto& field_index_map = _indices[field_index];
            cout << "Debug cond(): printing _indices: ";
            for (const auto& pair : field_index_map) {
                cout << pair.first << " -> " << pair.second << endl;
                }
            vector<long> matching_recnos;

            if (token->value() == "=") {
                cout << "Processing '=': field_value = " << field_value << endl;
                auto range = field_index_map.equal_range(field_value);
                for (auto it = range.first; it != range.second; ++it) {
                    matching_recnos.push_back(it->second);

                    }
                }
            else if (token->value() == "!=") {
                for (auto it = field_index_map.begin(); it != field_index_map.end(); ++it) {
                    if (it->first != field_value) {
                        matching_recnos.push_back(it->second);
                        }
                    }
                }
            else if (token->value() == "<") {
                auto end = field_index_map.lower_bound(field_value);
                for (auto it = field_index_map.begin(); it != end; ++it) {
                    matching_recnos.push_back(it->second);
                    }
                }
            else if (token->value() == ">") {
                cout << "Processing '>': field_value = " << field_value << endl;

                auto start = field_index_map.upper_bound(field_value);
                for (auto it = start; it != field_index_map.end(); ++it) {
                    cout << "Matching record: Key = " << it->first << ", Record = " << it->second << endl;
                    matching_recnos.push_back(it->second);
                    }
                }
            else if (token->value() == "<=") {
                auto end = field_index_map.lower_bound(field_value);
                for (auto it = field_index_map.begin(); it != end; ++it) {
                    matching_recnos.push_back(it->second);
                    }
                }
            else if (token->value() == ">=") {
                auto start = field_index_map.lower_bound(field_value);
                for (auto it = start; it != field_index_map.end(); ++it) {
                    matching_recnos.push_back(it->second);
                    }
                }
            else {
                throw runtime_error("Unknown relational operator: " + token->value());
                }

            logical_stack.push(matching_recnos);
            }
        else if (token->type() == TOKEN_LOGICAL_OPERATOR) {
            if (logical_stack.size() < 2) {
                throw runtime_error("Invalid RPN expression: Insufficient operands for logical operation");
                }

            vectorlong right_set = logical_stack.pop();
            vectorlong left_set = logical_stack.pop();
            vectorlong result;

            if (token->value() == "AND" || token->value() == "&&" || token->value() == "and") {
                ResultSet result_set(left_set);
                result_set.and_with(right_set);
                result = result_set.get_recnos();
                }
            else if (token->value() == "OR" || token->value() == "||" || token->value() == "or") {
                ResultSet result_set(left_set);
                result_set.or_with(right_set);
                result = result_set.get_recnos();
                cout << "Result set after OR operation: ";
                for (long recno : result) {
                    cout << recno << " ";
                    }
                }
            else {
                throw runtime_error("Unknown logical operator: " + token->value());
                }

            logical_stack.push(result);
            }
        else {
            throw runtime_error("Unsupported token type in cond evaluation");
            }
        }

    if (logical_stack.size() != 1) {
        throw runtime_error("Invalid RPN expression: Remaining logical operands");
        }

    vectorlong final_recnos = logical_stack.pop();

    cout << "Final record numbers after cond evaluation:";
    for (long recno : final_recnos) {
        cout << recno << " ";
        }
    _select_recnos = final_recnos;

    cout << "\n-------Table::cond done!-------" << endl;

    return final_recnos;
    }


//LINK - operator<<
ostream& operator<<(ostream & outs, const Table & t) {
    DEBUG_PRINT("-------Table operator<< fired!-------");
    cout << "Table name: " << t._name << ", records: " << t._last_record + 1 << endl;
    cout << "_last_record: " << t._last_record << endl;

    outs << string(15 + 15 * t.get_field_names().size(), '-') << endl;
    outs << setw(15) << "Record#";
    for (const auto& field : t.get_field_names()) {
        outs << setw(15) << field;
        }
    outs << endl;
    outs << string(15 + 15 * t.get_field_names().size(), '-') << endl;

    fstream file;
    open_fileRW(file, t.get_file_name().c_str());
    for (const auto& recno : t.get_select_recnos()) {
        FileRecord record;
        record.read(file, recno);
        outs << setw(15) << recno;
        for (int i = 0; i < t.get_field_names().size(); ++i) {
            outs << setw(15) << record._record[i];
            }
        outs << endl;
        }
    file.close();
    return outs;
    }
