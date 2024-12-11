#include <iostream>
#include <iomanip>
#include "includes/binary_files/file_record.h"
#include "includes/binary_files/utilities.h"
#include "includes/table/table.h"
#include "includes/sql/sql.h"
#include <cassert>
using namespace std;

const vector<string> command_list = {
    /*00*/ "make table employee fields last, first, dep, salary, year",
    /*01*/ "insert into employee values Blow, Joe, CS, 100000, 2018",
    /*02*/ "insert into employee values Blow, JoAnn, Physics, 200000, 2016",
    /*03*/ "insert into employee values Johnson, Jack, HR, 150000, 2014",
    /*04*/ "insert into employee values Johnson, \"Jimmy\", Chemistry, 140000, 2018",
    /*05*/ "make table student fields fname, lname, major, age",
    /*06*/ "insert into student values Flo, Yao, Art, 20",
    /*07*/ "insert into student values Bo, Yang, CS, 28",
    /*08*/ "insert into student values \"Sammuel L.\", Jackson, CS, 40",
    /*09*/ "insert into student values \"Billy\", Jackson, Math, 27",
    /*10*/ "insert into student values \"Mary Ann\", Davis, Math, 30",
    /*11*/ "select * from employee",
    /*12*/ "select * from student"
    };

const int MAKE_TABLE_COMMANDS = 5; // Only "make" commands
const int SELECT_COMMANDS = 11;   // Starting index for "select" commands

void test_select_all() {
    SQL sql;
    Table t;

    cout << "Testing Select All functionality..." << endl;

    // Create tables and insert data
    for (int i = 0; i <= MAKE_TABLE_COMMANDS; i++) {
        cout << "\n>" << command_list[i] << endl;
        sql.command(command_list[i]);
        }

    // Perform "select all" on each table
    for (int i = SELECT_COMMANDS; i < command_list.size(); i++) {
        cout << "\n>" << command_list[i] << endl;
        t = sql.command(command_list[i]);

        // Print table results
        cout << "Table: " << t.get_name() << endl;
        cout << "Fields: ";
        for (const auto& field : t.get_field_names()) {
            cout << field << " ";
            }
        cout << endl;

        cout << "Records:" << endl;
        for (const auto& recno : sql.select_recnos()) {
            cout << "Record Number: " << recno << endl;
            }

        cout << "cmd = " << command_list[i] << endl;
        cout << t << endl;
        }

    cout << "----- END TEST --------" << endl;
    }

int main(int argv, char** argc) {
    test_select_all();
    cout << "\n\n\n=====================" << endl;
    return 0;
    }