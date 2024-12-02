#include "table.h"
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <map>
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
    serial++;
    _name = "_select_table_" + to_string(serial);
    _file_name = _name + ".tbl";
    _empty = true;
    _last_record = -1;
    _field_names = vector<string>();
    _select_recnos = vector<long>();
    _field_map = map<string, long>();
    _keyword = map<string, long>();
    _indices = vector<multimap<string, long>>();


    DEBUG_PRINT("Table serial number: " << serial);
    DEBUG_PRINT("Table file name: " << _file_name);

    cout << "-------------------Table ctor 1 Done!----------------------------" << endl;
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
    // long total_records = std::filesystem::file_size(_file_name) / record_size;
    long total_records = get_file_size(_file_name) / record_size;
    vector<FileRecord> valid_records;

    // 5. filter out the empty records
    filter_unique_records(table_file, total_records, valid_records);
    table_file.close();

    cout << "Table loaded with " << _field_names.size() << " fields and "
        << valid_records.size() << " valid records." << endl;

    // update the table state
    _empty = valid_records.empty();
    _last_record = valid_records.size() - 1;
    _select_recnos.clear();
    for (long i = 0; i <= _last_record; ++i) {
        _select_recnos.push_back(i);
        }

    // 6. reindex the table
    reindex();

    DEBUG_PRINT("Table loaded with " << _field_names.size() << " fields and "
        << valid_records.size() << " valid records.");
    DEBUG_PRINT("-------------------Table ctor 2 Done!----------------------------");
    }

//LINK - Table ctor 3
Table::Table(const string& name, const vector<string> &fields_names) {
    DEBUG_PRINT("-------Table ctor 3 fired!-------");
    //serial++;
    _name = name;
    _field_names = fields_names;
    _empty = true;
    _last_record = -1;
    _file_name = _name + ".tbl";
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

//LINK - insert_into
int Table::insert_into(vector<string>& fields) {
    DEBUG_PRINT("-------Table::insert_into fired!-------");
    //cout << "Fields to insert: " << fields << endl;


    // 1. check if the number of fields matches the table definition
    if (fields.size() != _field_names.size()) {
        throw runtime_error("The number of fields does not match the table definition.");
        }

    // 2. create FileRecord object and open the file
    FileRecord record(fields);
    fstream file;
    open_fileRW(file, _file_name.c_str());

    // 3. write the record to the file
    long record_number = _last_record + 1;
    record.write(file);

    DEBUG_PRINT("Record written successfully with record number: " << record_number);

    // update _last_record and _select_recnos
    _last_record = record_number;
    _select_recnos.push_back(record_number);

    // update the indices
    DEBUG_PRINT("Updating _indices with field values:");
    for (size_t i = 0; i < fields.size(); ++i) {
        string field_value = fields[i];
        string field_name = _field_names[i];

        //cout<< "Field name: " << field_name << endl;
        int field_index = _field_map.at(field_name);
        //cout<< "Field index for " << field_name << ": " << field_index << endl;

        DEBUG_PRINT("Inserting field value: " << field_value << " for field: " << field_name << " at index: " << field_index);

        // insert into the corresponding index
        _indices[field_index].insert(make_pair(fields[i], record_number));

        DEBUG_PRINT("Inserted into _indices[" << field_index << "]: (" << field_value << ", " << record_number << ")");
        }



    file.close();
    return record_number;
    }

//LINK - vector_to_table
Table Table::vector_to_table(const vectorstr & fields, const vectorlong & vector_of_recnos) {
    DEBUG_PRINT("-------Table::vector_to_table fired!-------");

    Table new_table = Table();
    new_table._field_names = fields;

    // initialize the field map and indices
    for (size_t i = 0; i < fields.size(); ++i) {
        new_table._field_map[fields[i]] = i;
        new_table._indices.push_back(multimap<string, long>());
        }

    fstream file;
    open_fileRW(file, _file_name.c_str());
    string new_file_name = _name + "_updated.tbl";
    fstream new_file;

    open_fileW(new_file, new_file_name.c_str()); // open the new file for writing

    for (const auto& recno : vector_of_recnos) {
        FileRecord record;
        record.read(file, recno); // read the record from the file

        vectorstr record_fields;

        // get the data based on the field names
        for (const auto& field : fields) {
            long new_recno = 0;
            int field_index = field_col_no(field); //  get the field index
            record_fields.push_back(record._record[field_index]); // get the field value
            }

        // write the record to the new file
        FileRecord new_record(record_fields);
        new_record.write(new_file);

        // update the indices
        new_table.insert_into(record_fields);
        }

    file.close();
    new_file.close();

    new_table._last_record = vector_of_recnos.size() - 1;

    DEBUG_PRINT("New table created with updated fields and records:");
    for (const auto& field : new_table._field_names) {
        DEBUG_PRINT(field);
        }
    for (const auto& recno : new_table._select_recnos) {
        DEBUG_PRINT(recno);
        }

    new_table._file_name = new_file_name;


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

void Table::delete_table() {}
bool Table::is_empty() { return _empty; }

//LINK - field_col_no
int Table::field_col_no(string field_name) {
    //cout<< "-------Table::field_col_no fired!-------" << endl;
    if (_field_map.find(field_name) != _field_map.end()) {
        return _field_map.at(field_name);
        }
    return -1;
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

// //LINK - select_all
// Table Table::select_all(vectorstr fields) {
//     DEBUG_PRINT("-------Table::select_all fired!-------");

//     Table new_table;
//     // new_table._field_names = fields;
//     // new_table._field_map = _field_map;

//     // new_table._select_recnos = _select_recnos;

//     // DEBUG_PRINT("Records selected in select_all:");
//     // for (const auto& recno : _select_recnos) {
//     //     DEBUG_PRINT("  Record#: " << recno);
//     //     }

//     // for (const auto& index : _indices) {
//     //     new_table._indices.push_back(index);
//     //     }

//     // DEBUG_PRINT("All fields and records selected into new table");
//     return new_table;
//     }

// //LINK - select (RPN)

// Table Table::select(const vectorstr&  fields, const Queue<Token*>& postfix) {
//     DEBUG_PRINT("-------Table::select fired!-------");

//     vector<long> matching_recnos = cond(postfix);

//     DEBUG_PRINT("Matching record numbers:");
//     for (long rec : matching_recnos) {
//         DEBUG_PRINT("  " << rec);
//         }

//     Table selected_table = vector_to_table(fields, matching_recnos);

//     DEBUG_PRINT("-------Table::select done!-------");
//     return selected_table;
//     }





// Table Table::select(const vectorstr& fields, const vectorstr& condition) {
//     // DEBUG_PRINT("-------Table::select fired!-------");

//     // string query;
//     // for (const auto& token : condition) {
//     //     query += token + " ";
//     //     }
//     // DEBUG_PRINT("Query: " << query);

//     // Tokenizer tokenizer(query);
//     // Queue<Token*> tokens = tokenizer.tokenize();
//     // DEBUG_PRINT("Tokenized condition:");
//     // Queue<Token*> temp_tokens = tokens;
//     // Token* token = temp_tokens.pop();
//     // DEBUG_PRINT("  " << token->value());



//     ShuntingYard shunting_yard(tokens);
//     Queue<Token*> postfix = shunting_yard.to_postfix();
//     DEBUG_PRINT("Postfix expression:");
//     Queue<Token*> temp_postfix = postfix;
//     while (!temp_postfix.empty()) {
//         Token* token = temp_postfix.pop();
//         DEBUG_PRINT("  " << token->value());
//         }

//     vectorlong filtered_recnos = cond(postfix);
//     DEBUG_PRINT("Filtered record numbers:");
//     for (const auto& recno : filtered_recnos) {
//         DEBUG_PRINT("  " << recno);
//         }

//     Table new_table = vector_to_table(fields, filtered_recnos);

//     // DEBUG_PRINT("-------Table::select done!-------");
//     return new_table;
//     }



// // Table Table::select(const vectorstr & fields, const string & field,
// //     const string op, const string & value,
// //     const mmap_ss & p_tree) {
// //     return Table();
// //     }


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

// //LINK - cond
// vectorlong Table::cond(const Queue<Token*>& postfix) {
//     DEBUG_PRINT("-------Table::cond fired!-------");

//     ResultSet result_set;
//     Stack<vectorlong> logical_stack;
//     Stack<string> string_stack;

//     Queue<Token*> temp_postfix = postfix;

//     while (!temp_postfix.empty()) {
//         Token* token = temp_postfix.pop();

//         if (token->type() == TOKEN_STRING || token->type() == TOKEN_NUMBER) {
//             string_stack.push(token->value());
//             }

//         else if (token->type() == TOKEN_RELATIONAL_OPERATOR) {
//             if (string_stack.size() < 2) {
//                 throw runtime_error("Invalid condition: Missing field or value");
//                 }

//             string field_value = string_stack.pop();
//             string field_name = string_stack.pop();

//             int field_index = field_col_no(field_name);
//             if (field_index == -1) {
//                 throw runtime_error("Field not found: " + field_name);
//                 }

//             const auto& field_index_map = _indices[field_index];
//             vector<long> matching_recnos;

//             if (token->value() == "=") {
//                 auto range = field_index_map.equal_range(field_value);
//                 for (auto it = range.first; it != range.second; ++it) {
//                     matching_recnos.push_back(it->second);
//                     }
//                 }
//             else if (token->value() == "!=") {
//                 for (auto it = field_index_map.begin(); it != field_index_map.end(); ++it) {
//                     if (it->first != field_value) {
//                         matching_recnos.push_back(it->second);
//                         }
//                     }
//                 }
//             else if (token->value() == "<") {
//                 auto end = field_index_map.lower_bound(field_value);
//                 for (auto it = field_index_map.begin(); it != end; ++it) {
//                     matching_recnos.push_back(it->second);
//                     }
//                 }
//             else if (token->value() == ">") {
//                 auto start = field_index_map.upper_bound(field_value);
//                 for (auto it = start; it != field_index_map.end(); ++it) {
//                     matching_recnos.push_back(it->second);
//                     }
//                 }
//             else if (token->value() == "<=") {
//                 auto end = field_index_map.upper_bound(field_value);
//                 for (auto it = field_index_map.begin(); it != end; ++it) {
//                     matching_recnos.push_back(it->second);
//                     }
//                 }
//             else if (token->value() == ">=") {
//                 auto start = field_index_map.lower_bound(field_value);
//                 for (auto it = start; it != field_index_map.end(); ++it) {
//                     matching_recnos.push_back(it->second);
//                     }
//                 }
//             else {
//                 throw runtime_error("Unknown relational operator: " + token->value());
//                 }

//             logical_stack.push(matching_recnos);
//             }
//         else if (token->type() == TOKEN_LOGICAL_OPERATOR) {
//             if (logical_stack.size() < 2) {
//                 throw runtime_error("Invalid RPN expression: Insufficient operands for logical operation");
//                 }

//             vectorlong right_set = logical_stack.pop();
//             vectorlong left_set = logical_stack.pop();
//             vectorlong result;

//             if (token->value() == "AND" || token->value() == "&&" || token->value() == "and") {
//                 ResultSet result_set(left_set);
//                 result_set.and_with(right_set);
//                 result = result_set.get_recnos();
//                 }
//             else if (token->value() == "OR" || token->value() == "||" || token->value() == "or") {
//                 ResultSet result_set(left_set);
//                 result_set.or_with(right_set);
//                 result = result_set.get_recnos();
//                 }
//             else {
//                 throw runtime_error("Unknown logical operator: " + token->value());
//                 }

//             logical_stack.push(result);
//             }
//         else {
//             throw runtime_error("Unsupported token type in cond evaluation");
//             }
//         }

//     if (logical_stack.size() != 1) {
//         throw runtime_error("Invalid RPN expression: Remaining logical operands");
//         }

//     vectorlong final_recnos = logical_stack.pop();

//     DEBUG_PRINT("Final record numbers after cond evaluation:");
//     for (long recno : final_recnos) {
//         DEBUG_PRINT(recno << " ");
//         }
//     _select_recnos = final_recnos;

//     return final_recnos;
//     }

// void Table::build_keyword_list(map_sl & list) {

//     }
// int Table::get_token_type(const string & s) { return 0; }

 //LINK - operator<<
ostream& operator<<(ostream & outs, const Table & t) {
    DEBUG_PRINT("-------Table operator<< fired!-------");
    cout << "Table name: " << t._name << ", records: " << t._last_record + 1 << endl;
    cout << "_last_record: " << t._last_record << endl;

    outs << string(10 + 20 * t.get_field_names().size(), '-') << endl;
    outs << setw(10) << "Record#";
    for (const auto& field : t.get_field_names()) {
        outs << setw(20) << field;
        }
    outs << endl;
    outs << string(10 + 20 * t.get_field_names().size(), '-') << endl;

    fstream file;
    open_fileRW(file, t.get_file_name().c_str());
    for (const auto& recno : t.get_select_recnos()) {
        FileRecord record;
        record.read(file, recno);
        outs << setw(10) << recno;
        for (int i = 0; i < t.get_field_names().size(); ++i) {
            outs << setw(20) << record._record[i];
            }
        outs << endl;
        }
    file.close();
    return outs;
    }

// //LINK - select
// Table Table::select(const vectorstr & fields, const string & field, const string op, const string & value) {
//     DEBUG_PRINT("-------Table::select 4 fired!-------");
//     // 1. build the query string
//     string query = field + " " + op + " " + value;

//     DEBUG_PRINT("Query: " << query);

//     // 2. tokenize the query
//     Tokenizer tokenizer(query);
//     Queue<Token*> tokens = tokenizer.tokenize();
//     //cout<< "Tokens: " << tokens << endl;

//      // 3. convert the infix expression to postfix
//     ShuntingYard shunting_yard(tokens);
//     Queue<Token*> postfix = shunting_yard.to_postfix();

//     vectorlong recnos = cond(postfix);

//     //cout<< "RPN Evaluation Results: ";
//     for (long rec : recnos) {
//         cout << rec << " ";
//         }
//     cout << endl;



//     DEBUG_PRINT("New table created with updated fields and indices.");
//     return vector_to_table(fields, recnos);


//     }



void Table::filter_unique_records(fstream& table_file, long total_records, vector<FileRecord>& valid_records) {
    std::set<std::vector<std::string>> unique_records;
    long current_record = 0;

    while (current_record < total_records) {
        FileRecord record;
        long bytes_read = record.read(table_file, current_record);

        if (bytes_read > 0) {
            int field_count = record.num_of_fields();
            if (field_count > 0) {
                vector<string> record_fields = record.get_record();


                if (unique_records.find(record_fields) == unique_records.end()) {
                    unique_records.insert(record_fields);
                    valid_records.push_back(record);
                    }
                }
            }
        ++current_record;
        }
    }