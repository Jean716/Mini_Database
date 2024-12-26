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

TEST(SQLTest, CreateInsertAndSelect) {
  SQL sql;

  const vector<string> command_list = {
    //****************************************************************************
    //		CREATE AND INSERT
    //****************************************************************************

    // "create table student fields last, first, major",
    // "insert into student values Yang, Bo, \"Computer Science\"",
    // "insert into student values Davis, John, Math",
    // "insert into student values Johnson, \"Mary Ann\", \"Biology\"",
    // "create table employee fields lname, fname, dept, hireyear",
    // "insert into employee values Jackson, David, Finance, 2016",
    // "insert into employee values Davidson, “Mary Alice”, complaints, 2012",
    //---- student table ----------
    /*00*/ "create table student fields fname, lname, major, age, company",
    /*01*/ "insert into student values Alice, Brown, CS, 21, Apple",
    /*02*/ "insert into student values Charlie, Davis, Math, 23, Google",
    /*03*/ "insert into student values Emily, Johnson, Physics, 22, Amazon",
    /*04*/ "insert into student values George, Lee, Chemistry, 24, Microsoft",
    /*05*/ "insert into student values Hannah, Clark, Biology, 20, Tesla",
    /*06*/ "insert into student values Isaac, Miller, CS, 25, Facebook",
    /*07*/ "insert into student values Julia, Thompson, Engineering, 26, Nvidia",
    /*08*/ "insert into student values Kevin, Wright, History, 27, Intel",
    /*09*/ "insert into student values Laura, Green, Art, 22, Netflix",
    /*10*/ "insert into student values Michael, Taylor, Music, 23, Spotify",

    //---- employee table ----------
    /*11*/ "make table employee fields lname, fname, dep, salary, year",
    /*12*/ "insert into employee values Adams, John, HR, 90000, 2015",
    /*13*/ "insert into employee values Baker, Sarah, Finance, 120000, 2018",
    /*14*/ "insert into employee values Carter, Michael, IT, 110000, 2016",
    /*15*/ "insert into employee values Dixon, Emily, Marketing, 95000, 2017",
    /*16*/ "insert into employee values Evans, George, Sales, 85000, 2014",
    /*17*/ "insert into employee values Foster, Alice, Legal, 105000, 2019",
    /*18*/ "insert into employee values Griffin, Kevin, Support, 95000, 2020",
    /*19*/ "insert into employee values Harris, Laura, Operations, 98000, 2013",
    /*20*/ "insert into employee values Ingram, Julia, Logistics, 87000, 2012",
    /*21*/ "insert into employee values Jones, Hannah, Procurement, 92000, 2016",
    /*22*/ "insert into employee values Kelly, Isaac, Training, 88000, 2011",
    /*23*/ "insert into employee values Lewis, Charlie, Development, 115000, 2017",
    /*24*/ "insert into employee values Moore, Sarah, Research, 125000, 2018",
    /*25*/ "insert into employee values Nelson, Brian, Security, 93000, 2019",
    /*26*/ "insert into employee values Owens, Emily, Administration, 97000, 2021",
    /*27*/ "insert into employee values Perry, George, Communications, 91000, 2010",

    //****************************************************************************
    //		SIMPLE SELECT
    //****************************************************************************

    //------- simple strings -------------------
    /*28*/ "select * from employee ",

    /*29*/ "select * from student",

    // //****************************************************************************
    // //		LOGICAL OPERATORS
    // //****************************************************************************

    // // Simple logical combinations
    // /*31*/ "select * from student where major = CS and age < 30",
    // /*32*/ "select * from employee where lname = Jackson or salary >= 170000",

    //****************************************************************************
    //		COMMENTS
    //****************************************************************************

    // Add some comments to verify they are ignored
    "// This is a comment and should not affect the execution",
    "// Another comment for testing purposes",

    // "select * from student where lname>J",
    };

  // Execute all commands
  for (size_t i = 0; i < command_list.size(); ++i) {
    const string& command = command_list[i];

    Table result = sql.command(command);
    // cout << "Resulting table: " << endl;
    // cout << result << endl;
    }

  //****************************************************************************
  //		VALIDATION
  //****************************************************************************

  // Validate student table record count
  // Table student = sql.command("select * from student");
  // ASSERT_EQ(student.get_select_recnos().size(), 10);

  // Validate employee table record count
  // Table employee = sql.command("select * from employee");
  // ASSERT_EQ(employee.get_select_recnos().size(), 16);
  }
TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
  }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  return RUN_ALL_TESTS();
  }