#include <iostream>
#include <iomanip>
#include "includes/binary_files/file_record.h"
#include "includes/table/table.h"
#include "includes/sql/sql.h"
#include <cassert>
using namespace std;

using namespace std;
void test_select_all() {
    // Create an instance of SQL
    SQL sql;

    // Step 1: Create a table
    string make_table = "make table students fields id, name, grade";
    sql.command(make_table);

    // Step 2: Insert records
    sql.command("insert into students values 1, Alice, A");
    sql.command("insert into students values 2, Bob, B");
    sql.command("insert into students values 3, Charlie, C");

    // Step 3: Select all records
    Table result = sql.command("select * from students");

    // Step 4: Debug output to verify
    cout << "Select All Results:" << endl;
    for (const auto& recno : sql.select_recnos()) {
        cout << "Record Number: " << recno << endl;
        }

    // Assert the results
    assert(sql.select_recnos().size() == 3);
    assert(result.get_select_recnos().size() == 3);

    cout << "Test Select All Passed!" << endl;
    }
int main(int argv, char** argc) {
    test_select_all();
    cout << "\n\n\n=====================" << endl;
    return 0;
    }