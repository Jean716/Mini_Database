#include "gtest/gtest.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <algorithm>
#include <cstring>

//------------------------------------------------------------------------------------------
//Files we are testing:
#include "../../includes/sql/sql.h"
//------------------------------------------------------------------------------------------
using namespace std;
const vector<string> command_list = {

     /*00*/     "make table employee fields  last,       first,         dep,      salary, year",
     /*01*/     "insert into employee values Blow,       Joe,           CS,       100000, 2018",
     /*02*/     "insert into employee values Blow,       JoAnn,         Physics,  200000, 2016",
     /*03*/     "insert into employee values Johnson,    Jack,          HR,       150000, 2014",
     /*04*/     "insert into employee values Johnson,    \"Jimmy\",     Chemistry,140000, 2018",

     /*05*/     "make table student fields  fname,          lname,    major,    age",
     /*06*/     "insert into student values Flo,            Yao, 	Art, 	20",
     /*07*/     "insert into student values Bo, 		     Yang, 	CS, 		28",
     /*08*/     "insert into student values \"Sammuel L.\", Jackson, 	CS, 		40",
     /*09*/     "insert into student values \"Billy\",	     Jackson, 	Math,	27",
     /*10*/     "insert into student values \"Mary Ann\",   Davis,	Math,	30",

     /*11*/     "select * from employee",
     /*12*/     "select last, first, age from employee",
     /*13*/     "select last from employee",
     /*14*/     "select * from employee where last = Johnson",
     /*15*/     "select * from employee where last=Blow and major=\"JoAnn\"",

     /*16*/     "select * from student",
     /*17*/     "select * from student where (major=CS or major=Art)",
     /*18*/     "select * from student where lname>J",
     /*19*/     "select * from student where lname>J and (major=CS or major=Art)"

     };

// Expected record numbers (sorted) for each select command, verified by hand
// against the rows inserted above.
const vector<vector<long>> expected_recnos = {
     /*11*/ {0, 1, 2, 3},
     /*12*/ {0, 1, 2, 3},
     /*13*/ {0, 1, 2, 3},
     /*14*/ {2, 3},          // last = Johnson
     /*15*/ {},              // employee has no "major" field -> no match
     /*16*/ {0, 1, 2, 3, 4},
     /*17*/ {0, 1, 2},       // Yao (Art), Yang (CS), Jackson (CS)
     /*18*/ {0, 1, 2, 3},    // every lname except Davis sorts after "J"
     /*19*/ {0, 1, 2},       // intersection of 17 and 18
     };

const int MAKE_TABLE_COMMANDS = 11;
const int SELECT_COMMANDS = 20;



bool sql_basic(bool debug = false) {
     SQL sql;
     Table t;
     cout << ">" << command_list[0] << endl;
     sql.command(command_list[0]);
     cout << "basic_test: table created." << endl << endl;

     for (int i = 0; i < MAKE_TABLE_COMMANDS; i++) {
          cout << ">" << command_list[i] << endl;
          sql.command(command_list[i]);
          }

     cout << endl
          << endl;
     for (int i = MAKE_TABLE_COMMANDS; i < command_list.size(); i++) {
          cout << "\n>" << command_list[i] << endl;
          if (debug)
               cout << sql.command(command_list[i]) << endl;
          else
               t = sql.command(command_list[i]);
          cout << "basic_test: records selected: " << sql.select_recnos() << endl;

          vector<long> got = sql.select_recnos();
          sort(got.begin(), got.end());
          EXPECT_EQ(got, expected_recnos[i - MAKE_TABLE_COMMANDS])
               << "query: " << command_list[i];
          }

     cout << "----- END TEST --------" << endl;
     return true;
     }

// ==============================
// global BAD!
bool debug = false;
// ==============================

TEST(SQL_BASIC, SQLBasic) {
     bool success = sql_basic(debug);
     EXPECT_EQ(success, true);
     }

int main(int argc, char **argv) {
     if (argc > 1) {
          debug = !strcmp(argv[1], "debug");
          }

     ::testing::InitGoogleTest(&argc, argv);
     std::cout << "\n\n----------running basic_test.cpp---------\n\n" << std::endl;
     return RUN_ALL_TESTS();
     }
