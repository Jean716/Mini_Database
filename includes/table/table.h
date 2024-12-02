#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <fstream>
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

using namespace std;

class Table
    {
    private:
        vector<multimap<string, long>> _indices; // vector<multimap> for restore the indices， 
        string _name; // table name
        string _file_name; // file name
        vector<string> _field_names; // field names , e.g ["fname", "lname", "age"]
        vector<long> _select_recnos; // the result of the select operation
        map<string, long> _field_map;
        map<string, long>  _keyword;

        bool _empty;
        long _last_record; // the last record number
        static int serial; // used to generate a unique serial number for each table

    public:
        Table();  // default constructor
        Table(const string& name); // for opening an existing table，for selecting a table by name
        Table(const string& name, const vector<string> &fields_names); // for creating a new table with fields

        void set_fields(vector<string> &fld_names);
        vector<string> get_fields() const;         // vectorstr is a typedef for vector<string> that include the field names
        int field_col_no(string field_name);

        void delete_table();
        bool is_empty();
        int  insert_into(vector<string> & fields); // insert a record into the table and return the record number

        //LINK - select functions
        Table select_all(vector<string> fields);
        Table select(const vector<string>& fields, const Queue<Token *>& postfix); // Combined with the RPN module, it is used to parse conditional expressions
        // Table select(const vectorstr& fields, const vectorstr& condition); // Pass a conditional expression in infix form
        // Table select(const vectorstr& fields, const string& field, const string op, const string& value);
        // // Table select(const vectorstr& fields, const string& field,const string op, const string& value,const mmap_ss& p_tree = mmap_ss());


        void reindex(); // call this from ctor!

        vector<long> cond(const Queue<Token*> &post);
        vector<long> select_recnos() const {
            return _select_recnos;
            }

        // void build_keyword_list(map_sl &list);
        //int get_token_type(const string& s); // NOT USED
        string Name() { return _name; }
        Table vector_to_table(const vector<string> &fields, const vector<long> &vector_of_recnos);

        long get_file_size(const string& filename) {
            ifstream in(filename, ifstream::ate | ifstream::binary);
            return in.tellg();
            }
        /*
 create a new Table object based on the provided field list and record number list
        */
        vector<long> get_matching_recnos(const string& field_name, const string& field_value);
        friend ostream& operator<<(ostream& outs, const Table& t);
        friend ostream& operator<<(ostream& outs, const vector<long>& vec) {
            outs << "[";
            for (size_t i = 0; i < vec.size(); ++i) {
                outs << vec[i];
                if (i != vec.size() - 1) {
                    outs << ", ";
                    }
                }
            outs << "]";
            return outs;

            }
        // void print_table(ostream& outs);

        vector<string> get_field_names() const { return _field_names; }
        vector<long> get_select_recnos() const { return _select_recnos; }
        string get_file_name() const { return _file_name; }

        void filter_unique_records(fstream& table_file, long total_records, vector<FileRecord>& valid_records);




    };




#endif