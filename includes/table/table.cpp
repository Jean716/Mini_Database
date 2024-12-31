#include "table.h"
#include <algorithm>
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
static int table_serial = 1;

Table::Table()
    : _name("default_table"),
    _file_name("default_table.tbl"),
    _empty(true),
    _last_record(-1) {
    //cout << "Table default constructor called at address: " << this << endl;

    ofstream file(_file_name, ios::app | ios::binary);
    if (!file.is_open()) {
        cerr << "Error: Could not create default table file: " << _file_name << endl;
        }
    else {
        //cout << "Default table file created: " << _file_name << endl;
        }
    file.close();
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
    long total_records = get_file_size(_file_name) / record_size;
    _last_record = total_records - 1;
    // 5. filter out the empty records
    // filter_unique_records(table_file, total_records, valid_records);
    table_file.close();

    // update the table state
    // _select_recnos.clear();
    // for (long i = 0; i <= _last_record; ++i) {
    //     _select_recnos.push_back(i);
    //     }
    // cout << "Table(name)::_select_recnos: ";
    // for (const auto& recno : _select_recnos) {
    //     cout << to_string(recno);
    //     }

    // 6. reindex the table
    reindex();


    //DEBUG_PRINT("-------------------Table ctor 2 Done!----------------------------");
    }

//LINK - Table ctor 3
Table::Table(const string& name, const vector<string> &fields_names) {
    //cout << "\n-------Table ctor 3 fired!-------\n" << endl;
    //serial++;
    _name = name;
    _field_names = fields_names;
    _empty = true;
    _last_record = -1;
    _file_name = _name + ".tbl";
    _field_map.clear();
    _indices.clear();
    // ofstream ofs(_file_name, ios::trunc | ios::binary);
    // ofs.close();

    if (_field_names.empty()) {
        cerr << "Error: Field names vector is empty!" << endl;
        throw runtime_error("Field names vector is empty");
        }


    // create a file for the table
    ofstream field_file(_name + "_fields.txt");
    if (!field_file.is_open()) {
        cerr << "Error: Unable to create fields file: " << _name + "_fields.txt" << endl;
        throw runtime_error("Field file creation failed");
        }

    for (size_t i = 0; i < _field_names.size(); ++i) {
        if (_field_names[i].empty()) {
            cerr << "Error: Field name at index " << i << " is empty!" << endl;
            throw runtime_error("Empty field name detected");
            }
        field_file << _field_names[i] << endl;
        //cout << " Adding to _field_map: " << _field_names[i] << " -> " << i << endl;

        _field_map[_field_names[i]] = i;
        //cout << "Initializing index for field: " << _field_names[i] << endl;

        _indices.push_back(MMap<string, long>());

        }
    field_file.close();

    if (_indices.size() != _field_names.size()) {
        cerr << "Error: _indices size (" << _indices.size()
            << ") does not match _field_names size (" << _field_names.size() << ")" << endl;
        throw runtime_error("_indices size mismatch");
        }
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
        intersection.insert(intersection.end(), it->second().begin(), it->second().end());
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
            current_recnos.insert(current_recnos.end(), it->second().begin(), it->second().end());
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
    //cout << "\n-------Table::insert_into fired!-------" << endl;
    // cout << "Fields to insert : " << fields << endl;
    // cout << "_field_names " << _field_names << endl;
    // cout << "_field_names size: " << _field_names.size() << endl;
    // cout << "_field_map.size() " << fields.size() << endl;

    // cout << "Fields to insert: ";
    // for (const auto& field : fields) {
    //     cout << "[" << field << "] ";
    //     }
    // cout << endl;

    // check if the number of fields matches the table definition
    // if (fields.size() != _field_names.size()) {
    //     throw runtime_error("The number of fields in the input does not match the table definition.");
    //     }
    //---------------------------------------------------------
    // if (record_exists(fields)) {
    //   cout << "Duplicate record found, skipping insertion." << endl;
    //   return _last_record;
    // }

    //---------------------------------------------------------
    // 2. create FileRecord object and open the file
    FileRecord record(fields);
    fstream file;
    open_fileRW(file, _file_name.c_str());

    // 3. write the record to the file
    long record_number = _last_record + 1;
    record.write(file);

    // cout << "Record written successfully with record number: " <<
    // record_number << endl;

    // update _last_record and _select_recnos
    _last_record = record_number;
    _select_recnos.push_back(record_number);

    // update the indices
    // cout << "\nUpdating _indices with field values:" << endl;
    //------------------------for loop
    //-----------------------------------------
    for (size_t i = 0; i < fields.size(); ++i) {
        string field_value = fields[i];
        string field_name = _field_names[i];

        // cout << "Field name: " << _field_names[i] << endl;
        int field_index = _field_map.at(_field_names[i]);
        // cout << "Field index for " << field_name << ": " << field_index <<
        // endl;

        // cout << "Inserting field value: " << field_value << " for field: "
        // << field_name << " at index: " << field_index;

        // insert into the corresponding index
        _indices[field_index].insert(fields[i], record_number);

        // cout << "Inserted into _indices[" << field_index << "]: (" <<
        // field_value << ", " << record_number << ")";
        }

    //------------------------for loop  done-------------------------
    file.close();
    return record_number;
    }

//LINK - vector_to_table
Table Table::vector_to_table(const vector<string>& fields, const vector<long>& vector_of_recnos) {
    //cout << "-------Table::vector_to_table fired!-------" << endl;

    // cout << "vector_to_table :: check vector_of_recnos: ";
    // for (const auto& recno : vector_of_recnos) {
    //     cout << recno << " ";
    //     }

    // 1. Handle '*' case
    vector<string> actual_fields;
    if (fields.size() == 1 && fields[0] == "*") {
        // cout << "'*' detected. Expanding to all fields." << endl;
        actual_fields = _field_names;
        }
    else {
        actual_fields = fields;
        }

    // 2. Initialize new table,use the constructor3
    string new_table_name = "_select_table_" + to_string(table_serial++);

    // cout << "Creating new table with name: " << new_table_name << " and fields: ";
    // for (const auto& field : actual_fields) {
    //     cout << field << " ";
    //     }
    // cout << endl;
    //cout << "\n-[01]----------------------------------------DEBUG HERE!" << endl;

    Table new_table(new_table_name, actual_fields);
    // cout << "\n-[02]--------------------------------------DEBUG HERE!" << endl;

     // 3. Open original file for reading
    fstream file;
    open_fileRW(file, _file_name.c_str());
    //cout << "File opened for reading: " << _file_name << endl;

    // 4. Open new file for writing
    fstream new_file;
    open_fileW(new_file, new_table.get_file_name().c_str());
    //cout << "File opened for writing: " << new_table.get_file_name() << endl;


    // 5. Process each record in vector_of_recnos
    for (const auto &recno : vector_of_recnos) {
        FileRecord record;
        record.read(file, recno);
        vector<string> record_fields;

        for (const auto &field : actual_fields) {
            int field_index = field_col_no(field);
            if (field_index == -2) {
                // Handle '*': Add all fields
                record_fields.insert(record_fields.end(), record.get_record().begin(),
                    record.get_record().end());
                break;
                }
            else if (field_index == -1 || field_index == -3) {
                //cout << "Field not found: " + field << endl;
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

    // cout << "Vector_to_table :: record numbers: ";
    // for (const auto& recno : new_table.get_select_recnos()) {
    //     cout << recno << " ";
    //     }
    // cout << endl;

    //cout << "Vector_to_table :: table name: " << new_table.get_name() << endl;
    //cout << "-------------------Table::vector_to_table done!----------------------------\n" << endl;

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
        _indices.push_back(MMap<string, long>());
        DEBUG_PRINT("Field added: " << fld_names[i] << " at index " << i);
        }

    DEBUG_PRINT("-------set_fields done!-------");
    }


vectorstr Table::get_fields() const { return _field_names; }


bool Table::is_empty() { return _empty; }

// LINK - field_col_no
int Table::field_col_no(string field_name) {
    //cout << "-------Table::field_col_no fired!-------" << endl;
    // cout << "Field name: " << field_name << endl;
    // cout << "Field map size: " << _field_map.size() << endl;
    //cout << _field_map << endl;

    // Remove extra spaces from field_name
    field_name.erase(remove_if(field_name.begin(), field_name.end(), ::isspace), field_name.end());

    if (field_name == "*") {
        //cout << "'*' detected; returning -2 (indicating all fields)." << endl;
        return -2;   // -2 indicates all fields
        }

    // Search in the field map
    auto it = _field_map.find(field_name);
    if (it != _field_map.end()) {
        int index = (*it).value;
        // cout << "Field found: " << field_name << " at index " << index << endl;
        return index;
        }

    //cout << "Field not found: " << field_name << ". Returning -3." << endl;
    return -3;  // -3 indicates field not found
    }

//LINK - get_matching_recnos
vectorlong Table::get_matching_recnos(const string& field_name, const string& field_value) {
    vector<long> recnos;

    int field_index = field_col_no(field_name);
    if (field_index == -3) {
        throw runtime_error("Field not found: " + field_name);
        }

    auto range = _indices[field_index].equal_range(field_value);
    for (auto it = range.first; it != range.second; ++it) {
        recnos.insert(recnos.end(), it->second().begin(), it->second().end());
        }

    return recnos;
    }

//LINK - select_all
Table Table::select_all(vector<string> fields) {
    cout << "-------Table::select_all fired!-------" << endl;
    cout << "Debug: _last_record = " << _last_record << endl;

    vector<long> recnos;
    for (long i = 0; i <= _last_record; ++i) {
        recnos.push_back(i);
        }
    //---------------------------------------------------------
    if (recnos.empty()) {
        cerr << "Error: No records found in the table." << endl;
        }
    else {
        cout << "select_all(): Found " << recnos.size() << " records." << endl;
        }
    //---------------------------------------------------------

    // file.close();
    Table t = vector_to_table(fields, recnos);
    _select_recnos = t._select_recnos;

    return t;
    }


Table Table::select(const vector<string>&  fields, const Queue<Token*>& postfix) {
    //cout << "-------Table::select fired!-------" << endl;

    vector<long> matching_recnos = cond(postfix);

    // cout << "Matching record numbers:" << endl;
    // for (long rec : matching_recnos) {
    //     cout << "  " << rec << " ";
    //     }
    // cout << endl;

    Table result = vector_to_table(fields, matching_recnos);

    //cout << "vector_to_table() result->_name: " << result._name << endl;

    //cout << result;
    result._select_recnos = matching_recnos;
    // _select_recnos = matching_recnos;
    _select_recnos = result._select_recnos;



    //DEBUG_PRINT("-------Table::select done!-------");
    return result;
    }


//LINK - reindex
void Table::reindex() {
    DEBUG_PRINT("-------reindex fired!-------");
    _indices.clear();
    //_select_recnos.clear();

    for (size_t i = 0; i < _field_names.size(); ++i) {
        _indices.push_back(MMap<string, long>()); // push an empty multimap for each field
        }

    fstream file;
    open_fileRW(file, _file_name.c_str());
    for (long recno = 0; recno <= _last_record; ++recno) {
        FileRecord record;
        record.read(file, recno);
        for (size_t i = 0; i < _field_names.size(); ++i) {
            string field_value(record._record[i]);
            _indices[i].insert(field_value, recno);
            }
        }
    file.close();

    DEBUG_PRINT("-------reindex done!-------");
    }


vector<long> Table::cond(const Queue<Token*>& postfix) {
    cout << "-------Table::cond fired!-------" << endl;

    RPN rpn(postfix);

    ResultSet result_set;
    Stack<vector<long>> logical_stack;
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
            if (field_index == -1) {
                throw runtime_error("Field not found: " + field_name);
                }
            if (field_index == -3) {
                return {}; // Field not found; return empty results.
                }

            const auto& field_index_map = _indices[field_index];
            vector<long> matching_recnos;

            for (const auto& pair : field_index_map) {
                const auto& key = pair.first();
                const auto& recnos = pair.second();
                if (rpn.evaluate_relational(token->value(), key, field_value)) {
                    matching_recnos.insert(matching_recnos.end(), recnos.begin(), recnos.end());
                    }
                }

            logical_stack.push(matching_recnos);
            }
        else if (token->type() == TOKEN_LOGICAL_OPERATOR) {
            if (logical_stack.size() < 2) {
                throw runtime_error("Invalid RPN expression: Insufficient operands for logical operation");
                }

            vector<long> right_set = logical_stack.pop();
            vector<long> left_set = logical_stack.pop();

            vector<long> result = rpn.evaluate_logical(token->value(), left_set, right_set);
            logical_stack.push(result);
            }
        else {
            throw runtime_error("Unsupported token type in cond evaluation");
            }
        }

    if (logical_stack.size() != 1) {
        throw runtime_error("Invalid RPN expression: Remaining logical operands");
        }

    vector<long> final_recnos = logical_stack.pop();
    _select_recnos = final_recnos;

    cout << "-------Table::cond done!-------" << endl;
    return final_recnos;
    }

//LINK - operator<<
ostream& operator<<(ostream & outs, const Table & t) {
    //DEBUG_PRINT("-------Table operator<< fired!-------");
    cout << "Select recnos: " << t._select_recnos << endl;
    //outs << string(15 + 15 * t.get_field_names().size(), '-') << endl;
    outs << setw(10) << "record";
    for (const auto& field : t.get_field_names()) {
        outs << setw(15) << field;
        }
    outs << endl;
    //outs << string(15 + 15 * t.get_field_names().size(), '-') << endl;

    fstream file;
    open_fileRW(file, t.get_file_name().c_str());
    auto recnos = t.get_select_recnos();
    sort(recnos.begin(), recnos.end());
    if (!recnos.empty()) {
        long actual_recno = 0;
        for (const auto &recno : t.get_select_recnos()) {
            FileRecord record;
            record.read(file, actual_recno);
            outs << setw(10) << actual_recno;
            for (int i = 0; i < t.get_field_names().size(); ++i) {
                outs << setw(15) << record._record[i];
                }
            outs << endl;
            actual_recno++;
            }
        }

    //outs << string(15 + 15 * t.get_field_names().size(), '-') << endl;

    file.close();
    return outs;
    }

