#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;
#include "../../includes/sql/sql.h"

bool test_stub(bool debug = false) {
  if (debug) {
    cout << "testB:: test-sub() entering test_sub" << endl;
    }
  return true;
  }

// TEST(BasicTest, CreateAndInsert) {
//   SQL sql;

//   cout << "-[22]-creat table" << endl;
//   sql.command("make table employee fields last, first, dep");
//   sql.command("make table student fields fname, lname, major, age");

//   cout << "-[22]-insert into employee " << endl;
//   cout << "\n> 00 insert into <employee> values Blow, Joe, CS" << endl;
//   sql.command("insert into employee values Blow, Joe, CS");

//   cout << "\n> 01 nsert into <employee> values Johnson, \"Jimmy\", Chemistry" << endl;
//   sql.command("insert into employee values Johnson, \"Jimmy\", Chemistry");

//   cout << "\n> 02 insert into <employee> values Yang, Bo, CS" << endl;
//   sql.command("insert into employee values Yang, Bo, CS");
//   //------------------------------------------------------------------------------------------
//   cout << "-[22]-insert into student " << endl;
//   cout << "\n> 00 nsert into <student> values Flo, Yao, CS, 20" << endl;
//   sql.command("insert into student values Flo, Yao, CS, 20");
//   cout << "\n> 01 insert into <student> values \"Flo\", \"Jackson\", Math, 21" << endl;
//   sql.command("insert into student values \"Flo\", \"Jackson\", Math, 21");

//   cout << "-[22]-select  " << endl;

//   cout << "\n> select * from employee" << endl;
//   Table employee = sql.command("select * from employee");
//   cout << employee;

//   vector<long> expected_employee_recnos = { 0, 1, 2 };
//   ASSERT_EQ(employee.get_select_recnos(), expected_employee_recnos);

//   cout << "\n> select * from student" << endl;
//   Table student = sql.command("select * from student");
//   cout << student;

//   vector<long> expected_student_recnos = { 0, 1 };
//   ASSERT_EQ(student.get_select_recnos(), expected_student_recnos);
//   }

TEST(SQLTest, BatchInsertAndSelect) {
  SQL sql;

  const vector<string> command_list = {
    /*00*/ "make table student fields fname, lname, major, age, company",
    /*01*/ "insert into student values Flo, Yao, CS, 20, Google",
    /*02*/ "insert into student values Bo, Yang, CS, 28, Microsoft",
    /*03*/ "insert into student values Sammuel L., Jackson, CS, 40, Uber",
    /*04*/ "insert into student values Flo, Jackson, Math, 21, Google",
    /*05*/ "insert into student values Greg, Pearson, Physics, 20, Amazon",
    /*06*/ "insert into student values Jim Bob, Smith, Math, 23, Verizon",
    /*07*/ "insert into student values Calvin, Woo, Physics, 22, Uber",
    /*08*/ "insert into student values Anna Grace, Del Rio, CS, 22, USAF",
    /*09*/ "insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon",
    /*10*/ "insert into student values Alex, Smith, Gender Studies, 53, Amazon",

    /*11*/ "make table employee fields lname, fname, dep, salary, year",
    /*12*/ "insert into employee values Blow, Joe, CS, 100000, 2018",
    /*13*/ "insert into employee values Blow, JoAnn, Physics, 200000, 2016",
    /*14*/ "insert into employee values Johnson, Jack, HR, 150000, 2014",
    /*15*/ "insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018",
    /*16*/ "insert into employee values Yao, Jimmy, Math, 145000, 2014",
    /*17*/ "insert into employee values Yao, Flo, CS, 147000, 2012",
    /*18*/ "insert into employee values Yang, Bo, CS, 160000, 2013",
    /*19*/ "insert into employee values Jackson, Flo, Math, 165000, 2017",
    /*20*/ "insert into employee values Jackson, Bo, Chemistry, 130000, 2011",
    /*21*/ "insert into employee values Jackson, Billy, Math, 170000, 2017",
    /*22*/ "insert into employee values Johnson, Mary Ann, Math, 165000, 2014",
    /*23*/ "insert into employee values Johnson, Billy Bob, Physics, 142000, 2014",
    /*24*/ "insert into employee values Johnson, Billy, Phys Ed, 102000, 2014",
    /*25*/ "insert into employee values Van Gogh, Vincent, Art, 240000, 2015",
    /*26*/ "insert into employee values Van Gogh, Vincent, CS, 245000, 2015",
    /*27*/ "insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010",

    /*28*/ "select * from student",
    /*29*/ "select * from employee"
    };

  // Execute all commands
  for (const string& command : command_list) {
    cout << "\n----------------------------------------\n" << endl;
    cout << ">>> Executing: " << command << endl;
    sql.command(command);
    }

  // Validate student table content
  Table student = sql.command("select * from student");
  vector<long> expected_student_recnos = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  ASSERT_EQ(student.get_select_recnos(), expected_student_recnos);

  // Validate employee table content
  Table employee = sql.command("select * from employee");
  vector<long> expected_employee_recnos = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
  ASSERT_EQ(employee.get_select_recnos(), expected_employee_recnos);
  }

TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
  }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  return RUN_ALL_TESTS();
  }