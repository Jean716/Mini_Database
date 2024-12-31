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
  sql.command("make table employee fields  fname,          lname,    department,  salary");
  sql.command("insert into employee values John,           Doe,      HR,          50000");
  sql.command("insert into employee values Jane,           Smith,    IT,          75000");
  sql.command("insert into employee values Bill,           Gates,    Finance,     100000");
  sql.command("insert into employee values Elon,           Musk,     Engineering, 150000");
  sql.command("insert into employee values Jeff,           Bezos,    Management,  120000");
  sql.command("insert into employee values Mark,           Zuckerberg,IT,         80000");
  sql.command("insert into employee values Sundar,         Pichai,   Management,  130000");
  sql.command("insert into employee values Tim,            Cook,     Finance,     110000");
  sql.command("insert into employee values Satya,          Nadella,  Engineering, 140000");
  sql.command("insert into employee values Larry,          Page,     HR,          55000");
  }

void func3() {
  SQL sql;
  sql.command("select * from student");
  sql.command("select * from employee");
  // sql.command("select fname, lname, age from employee");
  // sql.command("select * from employee where salary > 100000");
  // sql.command("select * from employee where department = IT");
  // sql.command("select * from employee where salary >= 50000 and salary <= 80000");
  // sql.command("select * from employee where department = Engineering and salary > 130000");
  }

void func4() {
  SQL sql;
  //sql.command("select * from student where ((major = \"CS\" or major = \"Math\") and (age < 30 or age > 40)) and (lname = \"Jackson\" or lname = \"Prince\")");
  // sql.command("select * from employee where ((department = \"Engineering\" or department = \"IT\") and (salary < 80000 or salary > 120000)) and (fname = \"Elon\" or fname = \"Mark\")");
  sql.command("select * from student where age <= 35");
  sql.command("select * from student where age <= 15"); // Value not in list
  sql.command("select * from employee where salary <= 100000 ");
  }

// void func5() {
//   SQL sql;
//   sql.command("select * from student where ((major = \"Physics\" or major = \"Chemistry\") and (age < 10 or age > 80)) and (lname = \"Smith\" or lname = \"Brown\")");
//   sql.command("select * from employee where ((department = \"HR\" or department = \"Management\") and (salary < 70000 or salary > 200000)) and (fname = \"Jeff\" or fname = \"Mark\")");
//   sql.command("select * from student where (((major = \"CS\" and age > 20) or (major = \"Math\" and age < 30)) and lname = \"Jackson\") and (fname = \"Billy\" or fname = \"Sammuel L.\")");
//   sql.command("select * from employee where ((salary >= 75000 and salary <= 100000) or (salary > 50000 and salary < 75000)) and (department = \"IT\" or department = \"HR\")");
//   sql.command("select * from employee where ((department = \"Engineering\" or department = \"Finance\") and (salary > 100000)) or ((fname = \"John\" or lname = \"Smith\") and salary <= 80000)");
//   sql.command("select * from student where ((major = \"CS\" or major = \"Math\") and (lname < \"K\" or lname > \"Z\")) and (fname = \"Clark\" or fname = \"Bruce\")");
//   sql.command("select * from student where ((major = \"CS\" or major = \"Math\") and (lname >= \"D\" and lname <= \"M\")) and (fname = \"Billy\")");
//   sql.command("select * from employee where department = \"Medicine\" and salary > 200000");
//   }



bool test() {
  func1();
  func2();
  // func3();
  func4();
  //func5();
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