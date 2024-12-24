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

  // 创建表
  sql.command("make table employee fields last, first, dep");
  sql.command("make table student fields fname, lname, major, age");

  // 插入记录到 employee 表
  sql.command("insert into employee values Blow, Joe, CS");
  sql.command("insert into employee values Johnson, \"Jimmy\", Chemistry");
  sql.command("insert into employee values Yang, Bo, CS");

  // 插入记录到 student 表
  sql.command("insert into student values Flo, Yao, CS, 20");
  sql.command("insert into student values \"Flo\", \"Jackson\", Math, 21");

  // 验证结果
  Table employee = sql.command("select * from employee");
  vector<long> expected_employee_recnos = { 0, 1, 2 };
  ASSERT_EQ(employee.get_select_recnos(), expected_employee_recnos);

  Table student = sql.command("select * from student");
  vector<long> expected_student_recnos = { 0, 1 };
  ASSERT_EQ(student.get_select_recnos(), expected_student_recnos);
  }

TEST(BasicTest, ConditionalSelect) {
  SQL sql;

  // 创建并插入数据
  sql.command("make table student fields fname, lname, major, age");
  sql.command("insert into student values Flo, Yao, CS, 20");
  sql.command("insert into student values \"Anna Grace\", \"Del Rio\", CS, 22");

  // 简单条件查询
  Table result = sql.command("select * from student where lname = \"Del Rio\"");
  vector<long> expected_recnos = { 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  // 比较运算符
  result = sql.command("select * from student where age > 20");
  expected_recnos = { 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  result = sql.command("select * from student where age < 30 and major = CS");
  expected_recnos = { 0, 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);
  }

TEST(BasicTest, LogicalOperators) {
  SQL sql;

  // 创建并插入数据
  sql.command("make table student fields fname, lname, major, age");
  sql.command("insert into student values Flo, Yao, CS, 20");
  sql.command("insert into student values \"Anna Grace\", \"Del Rio\", CS, 22");

  // 逻辑操作符
  Table result = sql.command("select * from student where fname = Flo or lname = Yao");
  vector<long> expected_recnos = { 0 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  result = sql.command("select * from student where fname = Flo and lname = Yao");
  expected_recnos = { 0 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);

  result = sql.command("select * from student where major = CS and age <= 22");
  expected_recnos = { 0, 1 };
  ASSERT_EQ(result.get_select_recnos(), expected_recnos);
  }
TEST(TEST_STUB, TestStub) {

  //EXPECT_EQ(0, <your individual test functions are called here>);

  EXPECT_EQ(1, test_stub(false));
  }




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  return RUN_ALL_TESTS();
  }
