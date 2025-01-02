#include "gtest/gtest.h"
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;
#include "../../includes/sql/sql.h"
#include "../../includes/rpn/rpn.h"

bool test_stub(bool debug = false) {
  if (debug) {
    cout << "testB:: test-sub() entering test_sub" << endl;
    }
  return true;
  }

void func1() {
  SQL sql;
  sql.command("make table student fields  fname,          lname,    major,    age");
  sql.command("insert into student values Flo,            Yao, 	Art, 	20");
  sql.command("insert into student values Bo, 		     Yang, 	CS, 		28");
  sql.command("insert into student values \"Sammuel L.\", Jackson, 	CS, 		40");
  sql.command("insert into student values \"Billy\",	     Jackson, 	Math,	27");
  sql.command("insert into student values \"Mary Ann\",   Davis,	Math,	30");
  sql.command("insert into student values \"James\",      Bond, 	Spy, 	45");
  sql.command("insert into student values \"Clark\",      Kent, 	Journalist, 35");
  sql.command("insert into student values \"Bruce\",      Wayne, 	Business, 40");
  sql.command("insert into student values \"Diana\",      Prince, 	Warrior, 29");
  sql.command("insert into student values \"Peter\",      Parker, 	Photographer, 22");


  }
void func2() {
  SQL sql;
  sql.command("make table employee fields fname, lname, department, salary");
  sql.command("insert into employee values John, Doe, HR,   50000.0");
  sql.command("insert into employee values Jane, Smith, IT, 75000");
  sql.command("insert into employee values Bill, Gates, Finance, 10000");
  sql.command("insert into employee values Elon, Musk, Engineering, 150000");
  sql.command("insert into employee values Jeff, Bezos, Management, 120000");
  sql.command("insert into employee values Mark, Zuckerberg,IT, 80000");
  sql.command("insert into employee values Sundar, Pichai, Management, 130000");
  sql.command("insert into employee values Tim, Cook, Finance, 110000");
  sql.command("insert into employee values Satya, Nadella, Engineering, 140000");
  sql.command("insert into employee values Larry, Page, HR, 55000");
  }


void func3() {
  SQL sql;
  sql.command("select * from student");
  sql.command("select * from employee");
  sql.command("select * from  employee where salary <= 150000");
  sql.command("select * from employee where salary <= 10000000");
  sql.command("select * from employee where aaa = 1 or salary <= 50000");
  }

void func4() {
  SQL sql;
  sql.command("make table time_test fields tm");
  sql.command("insert into time_test values \"3:12:11\"");
  sql.command("insert into time_test values \"4:10\"");
  sql.command("insert into time_test values \"12:10:32\"");
  }

void func5() {
  SQL sql;
  sql.command("select * from time_test");
  sql.command("select * from time_test where (tm <= \"9:10:32\" or as=1) or a = 2");
  }
void func_test_same_digit_numbers() {
  SQL sql;
  sql.command("make table employee fields fname, lname, department, salary");
  sql.command("insert into employee values John, Doe, HR, 100000");
  sql.command("insert into employee values Jane, Smith, IT, 150000");
  sql.command("insert into employee values Bill, Gates, Finance, 200000");
  sql.command("insert into employee values Elon, Musk, Engineering, 250000");
  sql.command("insert into employee values Jeff, Bezos, Management, 300000");
  sql.command("insert into employee values Mark, Zuckerberg, IT, 350000");
  sql.command("insert into employee values Sundar, Pichai, Management, 400000");
  sql.command("insert into employee values Tim, Cook, Finance, 450000");
  sql.command("insert into employee values Satya, Nadella, Engineering, 500000");
  sql.command("insert into employee values Larry, Page, HR, 550000");

  sql.command("select * from employee where salary <= 300000");

  sql.command("select * from employee where salary >= 400000");

  sql.command("select * from employee where salary = 200000");

  sql.command("select * from employee");
  }
bool test() {
  func1();
  func2();
  func3();
  func4();
  func5();
  func_test_same_digit_numbers();
  return true;
  }

TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
  }

void test_evaluate_relational() {
  RPN rpn;

  //case 1
  string field_value1 = " 123 ";
  string key1 = "123";
  assert(rpn.evaluate_relational("=", field_value1, key1) == true);
  assert(rpn.evaluate_relational("<", field_value1, "124") == true);
  assert(rpn.evaluate_relational(">", field_value1, "122") == true);
  cout << "Test Case 1 Passed: Leading/trailing spaces handled correctly.\n";

  // case 2
  // string field_value2 = "1 23"; 
  // string key2 = "123";
  //// test after removing spaces
  // remove_all_spaces(field_value2);
  // remove_all_spaces(key2);
  // assert(rpn.evaluate_relational("=", field_value2, key2) == true);
  // cout << "Test Case 2 Passed: Spaces within numbers handled correctly.\n";

  //case 3
  string field_value3 = "456";
  string key3 = "456";
  assert(rpn.evaluate_relational("=", field_value3, key3) == true);
  assert(rpn.evaluate_relational("<=", field_value3, key3) == true);
  assert(rpn.evaluate_relational(">=", field_value3, key3) == true);
  cout << "Test Case 3 Passed: Exact matches handled correctly.\n";


  //case 4: Mixed spacing handled correctly
  string field_value5 = "   789";
  string key5 = "789   ";
  assert(rpn.evaluate_relational("=", field_value5, key5) == true);
  assert(rpn.evaluate_relational(">", field_value5, "788") == true);
  assert(rpn.evaluate_relational("<", field_value5, "790") == true);
  cout << "Test Case 4 Passed: Mixed spacing handled correctly.\n";


  cout << "All Test Cases Passed.\n";
  }


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  cout << "\n\n----------running testB.cpp---------\n\n" << endl;
  test();
  test_evaluate_relational();
  return RUN_ALL_TESTS();
  }