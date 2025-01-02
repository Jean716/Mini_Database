jwcomputer@Mac Final_Dec_20 % cmake --build build
[ 28%] Built target main
[ 32%] Built target gtest
[ 60%] Built target basic_test
[ 62%] Building CXX object CMakeFiles/testB.dir/_tests/_test_files/testB.cpp.o
[ 64%] Building CXX object CMakeFiles/testB.dir/includes/binary_files/file_record.cpp.o
[ 66%] Building CXX object CMakeFiles/testB.dir/includes/binary_files/utilities.cpp.o
[ 67%] Building CXX object CMakeFiles/testB.dir/includes/parser/parser.cpp.o
[ 69%] Building CXX object CMakeFiles/testB.dir/includes/parser/sql_parser_functions.cpp.o
[ 71%] Building CXX object CMakeFiles/testB.dir/includes/rpn/resultset.cpp.o
[ 73%] Building CXX object CMakeFiles/testB.dir/includes/rpn/rpn.cpp.o
[ 75%] Building CXX object CMakeFiles/testB.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 77%] Building CXX object CMakeFiles/testB.dir/includes/sql/sql.cpp.o
[ 79%] Building CXX object CMakeFiles/testB.dir/includes/stub/stub.cpp.o
[ 81%] Building CXX object CMakeFiles/testB.dir/includes/table/table.cpp.o
[ 83%] Building CXX object CMakeFiles/testB.dir/includes/tokenizer/ftokenize.cpp.o
[ 84%] Building CXX object CMakeFiles/testB.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 86%] Building CXX object CMakeFiles/testB.dir/includes/tokenizer/stokenize.cpp.o
[ 88%] Linking CXX executable bin/testB
[ 88%] Built target testB
[ 90%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 92%] Linking CXX static library ../../../lib/libgmockd.a
[ 92%] Built target gmock
[ 94%] Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[ 96%] Linking CXX static library ../../../lib/libgmock_maind.a
[ 96%] Built target gmock_main
[ 98%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[100%] Linking CXX static library ../../../lib/libgtest_maind.a
[100%] Built target gtest_main
jwcomputer@Mac Final_Dec_20 % build/bin/testB


----------running testB.cpp---------


[0] make table student fields  fname,          lname,    major,    age
Table student created. cols : fname lname major age 
SQL: DONE.
[1] insert into student values Flo,            Yao,     Art,    20
SQL::run: inserted.
SQL: DONE.
[2] insert into student values Bo,                   Yang,      CS,             28
SQL::run: inserted.
SQL: DONE.
[3] insert into student values "Sammuel L.", Jackson,   CS,             40
SQL::run: inserted.
SQL: DONE.
[4] insert into student values "Billy",      Jackson,   Math,   27
SQL::run: inserted.
SQL: DONE.
[5] insert into student values "Mary Ann",   Davis,     Math,   30
SQL::run: inserted.
SQL: DONE.
[6] insert into student values "James",      Bond,      Spy,    45
SQL::run: inserted.
SQL: DONE.
[7] insert into student values "Clark",      Kent,      Journalist, 35
SQL::run: inserted.
SQL: DONE.
[8] insert into student values "Bruce",      Wayne,     Business, 40
SQL::run: inserted.
SQL: DONE.
[9] insert into student values "Diana",      Prince,    Warrior, 29
SQL::run: inserted.
SQL: DONE.
[10] insert into student values "Peter",      Parker,   Photographer, 22
SQL::run: inserted.
SQL: DONE.
[11] make table employee fields fname, lname, department, salary
Table employee created. cols : fname lname department salary 
SQL: DONE.
[12] insert into employee values John, Doe, HR,   50000.0
SQL::run: inserted.
SQL: DONE.
[13] insert into employee values Jane, Smith, IT, 75000
SQL::run: inserted.
SQL: DONE.
[14] insert into employee values Bill, Gates, Finance, 10000
SQL::run: inserted.
SQL: DONE.
[15] insert into employee values Elon, Musk, Engineering, 150000
SQL::run: inserted.
SQL: DONE.
[16] insert into employee values Jeff, Bezos, Management, 120000
SQL::run: inserted.
SQL: DONE.
[17] insert into employee values Mark, Zuckerberg,IT, 80000
SQL::run: inserted.
SQL: DONE.
[18] insert into employee values Sundar, Pichai, Management, 130000
SQL::run: inserted.
SQL: DONE.
[19] insert into employee values Tim, Cook, Finance, 110000
SQL::run: inserted.
SQL: DONE.
[20] insert into employee values Satya, Nadella, Engineering, 140000
SQL::run: inserted.
SQL: DONE.
[21] insert into employee values Larry, Page, HR, 55000
SQL::run: inserted.
SQL: DONE.
[22] select * from student
>>> Processing SELECT command on table: student
-------Table::select_all fired!-------
Debug: _last_record = 9
select_all(): Found 10 records.
Table name: _select_table_1, records: 10
Select recnos: 0 1 2 3 4 5 6 7 8 9
    record          fname          lname          major            age
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
         4       Mary Ann          Davis           Math             30
         5          James           Bond            Spy             45
         6          Clark           Kent     Journalist             35
         7          Bruce          Wayne       Business             40
         8          Diana         Prince        Warrior             29
         9          Peter         Parker   Photographer             22

SQL: DONE.
[23] select * from employee
>>> Processing SELECT command on table: employee
-------Table::select_all fired!-------
Debug: _last_record = 9
select_all(): Found 10 records.
Table name: _select_table_2, records: 10
Select recnos: 0 1 2 3 4 5 6 7 8 9
    record          fname          lname     department         salary
         0           John            Doe             HR        50000.0
         1           Jane          Smith             IT          75000
         2           Bill          Gates        Finance          10000
         3           Elon           Musk    Engineering         150000
         4           Jeff          Bezos     Management         120000
         5           Mark     Zuckerberg             IT          80000
         6         Sundar         Pichai     Management         130000
         7            Tim           Cook        Finance         110000
         8          Satya        Nadella    Engineering         140000
         9          Larry           Page             HR          55000

SQL: DONE.
[24] select * from  employee where salary <= 150000
>>> Processing SELECT command on table: employee
>>> WHERE condition: salary <= 150000 
-------Table::cond fired!-------
Evaluating relational operation: <=
Matching recnos: 2 7 4 6 8 3 0 9 1 5
-------Table::cond done!-------
Table name: _select_table_3, records: 10
Select recnos: 2 7 4 6 8 3 0 9 1 5
    record          fname          lname     department         salary
         0           Bill          Gates        Finance          10000
         1            Tim           Cook        Finance         110000
         2           Jeff          Bezos     Management         120000
         3         Sundar         Pichai     Management         130000
         4          Satya        Nadella    Engineering         140000
         5           Elon           Musk    Engineering         150000
         6           John            Doe             HR        50000.0
         7          Larry           Page             HR          55000
         8           Jane          Smith             IT          75000
         9           Mark     Zuckerberg             IT          80000

SQL: DONE.
[25] select * from employee where salary <= 10000000
>>> Processing SELECT command on table: employee
>>> WHERE condition: salary <= 10000000 
-------Table::cond fired!-------
Evaluating relational operation: <=
Matching recnos: 2 7 4 6 8 3 0 9 1 5
Error executing command: Invalid RPN expression: Remaining logical operands
[26] select * from employee where aaa = 1 or salary <= 50000
>>> Processing SELECT command on table: employee
>>> WHERE condition: aaa = 1 or salary <= 50000 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 
Evaluating relational operation: <=
Matching recnos: 2 0
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 2
Error executing command: Invalid RPN expression: Remaining logical operands
[27] make table time_test fields tm
Table time_test created. cols : tm 
SQL: DONE.
[28] insert into time_test values "3:12:11"
SQL::run: inserted.
SQL: DONE.
[29] insert into time_test values "4:10"
SQL::run: inserted.
SQL: DONE.
[30] insert into time_test values "12:10:32"
SQL::run: inserted.
SQL: DONE.
[31] select * from time_test
>>> Processing SELECT command on table: time_test
-------Table::select_all fired!-------
Debug: _last_record = 2
select_all(): Found 3 records.
Table name: _select_table_4, records: 3
Select recnos: 0 1 2
    record             tm
         0        3:12:11
         1           4:10
         2       12:10:32

SQL: DONE.
[32] select * from time_test where (tm <= "9:10:32" or as=1) or a = 2
>>> Processing SELECT command on table: time_test
>>> WHERE condition: ( tm <= 9:10:32 or as = 1 ) or a = 2 
-------Table::cond fired!-------
Evaluating relational operation: <=
Matching recnos: 0 1
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1
-------Table::cond done!-------
Table name: _select_table_5, records: 2
Select recnos: 0 1
    record             tm
         0        3:12:11
         1           4:10

SQL: DONE.
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from TEST_STUB
[ RUN      ] TEST_STUB.TestStub
[       OK ] TEST_STUB.TestStub (0 ms)
[----------] 1 test from TEST_STUB (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
>make table employee fields  last,       first,         dep,      salary, year
[0] make table employee fields  last,       first,         dep,      salary, year
Table employee created. cols : last first dep salary year 
SQL: DONE.
basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
[1] make table employee fields  last,       first,         dep,      salary, year
Table employee created. cols : last first dep salary year 
SQL: DONE.
>insert into employee values Blow,       Joe,           CS,       100000, 2018
[2] insert into employee values Blow,       Joe,           CS,       100000, 2018
SQL::run: inserted.
SQL: DONE.
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
[3] insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
SQL::run: inserted.
SQL: DONE.
>insert into employee values Johnson,    Jack,          HR,       150000, 2014
[4] insert into employee values Johnson,    Jack,          HR,       150000, 2014
SQL::run: inserted.
SQL: DONE.
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
[5] insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
SQL::run: inserted.
SQL: DONE.
>make table student fields  fname,          lname,    major,    age
[6] make table student fields  fname,          lname,    major,    age
Table student created. cols : fname lname major age 
SQL: DONE.
>insert into student values Flo,            Yao,        Art,    20
[7] insert into student values Flo,            Yao,     Art,    20
SQL::run: inserted.
SQL: DONE.
>insert into student values Bo,                      Yang,      CS,             28
[8] insert into student values Bo,                   Yang,      CS,             28
SQL::run: inserted.
SQL: DONE.
>insert into student values "Sammuel L.", Jackson,      CS,             40
[9] insert into student values "Sammuel L.", Jackson,   CS,             40
SQL::run: inserted.
SQL: DONE.
>insert into student values "Billy",         Jackson,   Math,   27
[10] insert into student values "Billy",             Jackson,   Math,   27
SQL::run: inserted.
SQL: DONE.
>insert into student values "Mary Ann",   Davis,        Math,   30
[11] insert into student values "Mary Ann",   Davis,    Math,   30
SQL::run: inserted.
SQL: DONE.



>select * from employee
[12] select * from employee
>>> Processing SELECT command on table: employee
-------Table::select_all fired!-------
Debug: _last_record = 3
select_all(): Found 4 records.
Table name: _select_table_1, records: 4
Select recnos: 0 1 2 3
    record           last          first            dep         salary           year
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
         3        Johnson          Jimmy      Chemistry         140000           2018

SQL: DONE.
basic_test: records selected: 0 1 2 3

>select last, first, age from employee
[13] select last, first, age from employee
>>> Processing SELECT command on table: employee
-------Table::select_all fired!-------
Debug: _last_record = 3
select_all(): Found 4 records.
Table name: _select_table_2, records: 4
Select recnos: 0 1 2 3
    record           last          first            age
         0           Blow            Joe               
         1           Blow          JoAnn               
         2        Johnson           Jack               
         3        Johnson          Jimmy               

SQL: DONE.
basic_test: records selected: 0 1 2 3

>select last from employee
[14] select last from employee
>>> Processing SELECT command on table: employee
-------Table::select_all fired!-------
Debug: _last_record = 3
select_all(): Found 4 records.
Table name: _select_table_3, records: 4
Select recnos: 0 1 2 3
    record           last
         0           Blow
         1           Blow
         2        Johnson
         3        Johnson

SQL: DONE.
basic_test: records selected: 0 1 2 3

>select * from employee where last = Johnson
[15] select * from employee where last = Johnson
>>> Processing SELECT command on table: employee
>>> WHERE condition: last = Johnson 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 2 3
-------Table::cond done!-------
Table name: _select_table_4, records: 2
Select recnos: 2 3
    record           last          first            dep         salary           year
         0        Johnson           Jack             HR         150000           2014
         1        Johnson          Jimmy      Chemistry         140000           2018

SQL: DONE.
basic_test: records selected: 2 3

>select * from employee where last=Blow and major="JoAnn"
[16] select * from employee where last=Blow and major="JoAnn"
>>> Processing SELECT command on table: employee
>>> WHERE condition: last = Blow and major = JoAnn 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 0 1
Performing logical operation: and
Logical operation result: 
Error executing command: Invalid RPN expression: Remaining logical operands
basic_test: records selected: 2 3

>select * from student
[17] select * from student
>>> Processing SELECT command on table: student
-------Table::select_all fired!-------
Debug: _last_record = 4
select_all(): Found 5 records.
Table name: _select_table_5, records: 5
Select recnos: 0 1 2 3 4
    record          fname          lname          major            age
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
         4       Mary Ann          Davis           Math             30

SQL: DONE.
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
[18] select * from student where (major=CS or major=Art)
>>> Processing SELECT command on table: student
>>> WHERE condition: ( major = CS or major = Art ) 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 1 2
Evaluating relational operation: =
Matching recnos: 0
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1 2
Evaluating relational operation: =
Matching recnos: 
Performing logical operation: and
Logical operation result: 
Error executing command: Invalid RPN expression: Remaining logical operands
basic_test: records selected: 0 1 2 3 4

>select * from student where lname>J
[19] select * from student where lname>J
>>> Processing SELECT command on table: student
>>> WHERE condition: lname > J 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 1 2
Evaluating relational operation: =
Matching recnos: 0
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1 2
Evaluating relational operation: >
Matching recnos: 3 4
Performing logical operation: and
Logical operation result: 
Error executing command: Invalid RPN expression: Remaining logical operands
basic_test: records selected: 0 1 2 3 4

>select * from student where lname>J and (major=CS or major=Art)
[20] select * from student where lname>J and (major=CS or major=Art)
>>> Processing SELECT command on table: student
>>> WHERE condition: lname > J and ( major = CS or major = Art ) 
-------Table::cond fired!-------
Evaluating relational operation: =
Matching recnos: 1 2
Evaluating relational operation: =
Matching recnos: 0
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1 2
Evaluating relational operation: >
Matching recnos: 3 4
Performing logical operation: and
Logical operation result: 
Evaluating relational operation: =
Matching recnos: 1 2
Evaluating relational operation: =
Matching recnos: 0
Performing logical operation: or
-------ResultSet::or_with fired!-------
Logical operation result: 0 1 2
Performing logical operation: and
Logical operation result: 
Error executing command: Invalid RPN expression: Remaining logical operands
basic_test: records selected: 0 1 2 3 4
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (35 ms)
[----------] 1 test from SQL_BASIC (35 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (35 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % 