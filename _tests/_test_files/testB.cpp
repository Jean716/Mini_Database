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

TEST(BasicTest, CreateAndInsert) {
  SQL sql;

  cout << "-[22]-creat table" << endl;
  sql.command("make table employee fields last, first, dep");
  sql.command("make table student fields fname, lname, major, age");

  cout << "-[22]-insert into employee " << endl;
  cout << "\n> 00 insert into <employee> values Blow, Joe, CS" << endl;
  sql.command("insert into employee values Blow, Joe, CS");

  cout << "\n> 01 nsert into <employee> values Johnson, \"Jimmy\", Chemistry" << endl;
  sql.command("insert into employee values Johnson, \"Jimmy\", Chemistry");

  cout << "\n> 02 insert into <employee> values Yang, Bo, CS" << endl;
  sql.command("insert into employee values Yang, Bo, CS");
  //------------------------------------------------------------------------------------------
  cout << "-[22]-insert into student " << endl;
  cout << "\n> 00 nsert into <student> values Flo, Yao, CS, 20" << endl;
  sql.command("insert into student values Flo, Yao, CS, 20");
  cout << "\n> 01 insert into <student> values \"Flo\", \"Jackson\", Math, 21" << endl;
  sql.command("insert into student values \"Flo\", \"Jackson\", Math, 21");

  cout << "-[22]-select  " << endl;

  cout << "\n> select * from employee" << endl;
  Table employee = sql.command("select * from employee");
  cout << employee;

  vector<long> expected_employee_recnos = { 0, 1, 2 };
  ASSERT_EQ(employee.get_select_recnos(), expected_employee_recnos);

  cout << "\n> select * from student" << endl;
  Table student = sql.command("select * from student");
  cout << student;

  vector<long> expected_student_recnos = { 0, 1 };
  ASSERT_EQ(student.get_select_recnos(), expected_student_recnos);
  }

TEST(BasicTest, ConditionalSelect) {
  SQL sql;

  // 创建并插入数据
  cout << "\n> make table student fields fname, lname, major, age" << endl;
  sql.command("make table student fields fname, lname, major, age");

  cout << "\n> insert into student values Flo, Yao, CS, 20" << endl;
  sql.command("insert into student values Flo, Yao, CS, 20");

  cout << "\n> insert into student values \"Anna Grace\", \"Del Rio\", CS, 22" << endl;
  sql.command("insert into student values \"Anna Grace\", \"Del Rio\", CS, 22");

  // 简单条件查询
  cout << "\n> select * from student where lname = \"Del Rio\"" << endl;
  Table result = sql.command("select * from student where lname = \"Del Rio\"");
  cout << result;

  cout << "expected: 1" << endl;
  vector<long> expected_recnos = { 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  // 比较运算符
  cout << "\n> select * from student where age > 20" << endl;
  result = sql.command("select * from student where age > 20");
  cout << result;

  cout << "expected: 1" << endl;
  expected_recnos = { 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  cout << "\n> select * from student where age < 30 and major = CS" << endl;
  result = sql.command("select * from student where age < 30 and major = CS");
  cout << result;

  cout << "expected: 0,1" << endl;
  expected_recnos = { 0, 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);
  }


TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
  }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  return RUN_ALL_TESTS();
  }