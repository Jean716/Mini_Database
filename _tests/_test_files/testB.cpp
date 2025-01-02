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
// void func2() {
//   SQL sql;
//   sql.command("make table employee fields  fname,          lname,    department,  salary");
//   sql.command("insert into employee values John,           Doe,      HR,          50000");
//   sql.command("insert into employee values Jane,           Smith,    IT,          75000");
//   sql.command("insert into employee values Bill,           Gates,    Finance,     100000");
//   sql.command("insert into employee values Elon,           Musk,     Engineering, 150000");
//   sql.command("insert into employee values Jeff,           Bezos,    Management,  120000");
//   sql.command("insert into employee values Mark,           Zuckerberg,IT,         80000");
//   sql.command("insert into employee values Sundar,         Pichai,   Management,  130000");
//   sql.command("insert into employee values Tim,            Cook,     Finance,     110000");
//   sql.command("insert into employee values Satya,          Nadella,  Engineering, 140000");
//   sql.command("insert into employee values Larry,          Page,     HR,          55000");
//   }

void func3() {
  SQL sql;
  sql.command("select * from student");
  sql.command("select * from employee");
  sql.command("select * from  employee where salary <= 150000");
  sql.command("select * from employee where salary <= 10000000");
  sql.command("select * from employee where aaa = 1 or salary <= 50000");

  }



bool test() {
  func1();
  func2();
  func3();
  return true;
  }

TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
  }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  test();
  //test_table_save_and_load();
  return RUN_ALL_TESTS();
  }