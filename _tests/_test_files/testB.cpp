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
TEST(TEST_STUB, TestStub) {
  EXPECT_EQ(1, test_stub(false));
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
  sql.command("insert into student values \"Alice\",      Lee, 	Chemistry, 25");
  sql.command("insert into student values \"Bob\",        Kim, 	Physics,   19");
  sql.command("insert into student values \"Charlie\",    Brown, 	Literature, 50");
  sql.command("insert into student values \"David\",      White, 	Art,       33");
  sql.command("insert into student values \"Eva\",        Green, 	Math,      31");
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
  sql.command("insert into employee values Alice,          Johnson,  Finance,     20000");
  sql.command("insert into employee values Bob,            Brown,    IT,          25000");
  sql.command("insert into employee values Charlie,        Black,    HR,          30000");
  sql.command("insert into employee values David,          White,    Engineering, 45000");
  sql.command("insert into employee values Eva,            Green,    Management,  60000");
  }

void test_less_than_or_equal() {
  SQL sql;

  sql.command("select * from employee where salary <= 50000");
  sql.command("select * from employee where salary <= 100000");
  sql.command("select * from employee where salary <= 20000");
  sql.command("select * from employee where salary <= 80000");
  sql.command("select * from employee where salary <= 150000");

  sql.command("select * from student where age <= 30");
  sql.command("select * from student where age <= 20");
  sql.command("select * from student where age <= 50");
  }

void test() {
  func1();
  func2();
  test_less_than_or_equal();

  }
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout << "\n\n----------running testB.cpp---------\n\n" << std::endl;
  test();
  return RUN_ALL_TESTS();
  }