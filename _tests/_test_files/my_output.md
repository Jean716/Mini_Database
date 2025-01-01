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
[11] make table employee fields  fname,          lname,    department,  salary
Table employee created. cols : fname lname department salary 
SQL: DONE.
[12] insert into employee values John,           Doe,      HR,          50000
SQL::run: inserted.
SQL: DONE.
[13] insert into employee values Jane,           Smith,    IT,          75000
SQL::run: inserted.
SQL: DONE.
[14] insert into employee values Bill,           Gates,    Finance,     100000
SQL::run: inserted.
SQL: DONE.
[15] insert into employee values Elon,           Musk,     Engineering, 150000
SQL::run: inserted.
SQL: DONE.
[16] insert into employee values Jeff,           Bezos,    Management,  120000
SQL::run: inserted.
SQL: DONE.
[17] insert into employee values Mark,           Zuckerberg,IT,         80000
SQL::run: inserted.
SQL: DONE.
[18] insert into employee values Sundar,         Pichai,   Management,  130000
SQL::run: inserted.
SQL: DONE.
[19] insert into employee values Tim,            Cook,     Finance,     110000
SQL::run: inserted.
SQL: DONE.
[20] insert into employee values Satya,          Nadella,  Engineering, 140000
SQL::run: inserted.
SQL: DONE.
[21] insert into employee values Larry,          Page,     HR,          55000
SQL::run: inserted.
SQL: DONE.
[22] select * from student where ((major = "CS" or major = "Math") and (age < 30 or age > 40)) and (lname = "Jackson" or lname = "Prince")
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_1, records: 1
Select recnos: 3
    record          fname          lname          major            age
         0          Billy        Jackson           Math             27

SQL: DONE.
[23] select * from employee where ((department = "Engineering" or department = "IT") and (salary < 80000 or salary > 120000)) and (fname = "Elon" or fname = "Mark")
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_2, records: 1
Select recnos: 3
    record          fname          lname     department         salary
         0           Elon           Musk    Engineering         150000

SQL: DONE.
[24] select * from student where age <= 35
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_3, records: 7
Select recnos: 0 9 3 1 8 4 6
    record          fname          lname          major            age
         0            Flo            Yao            Art             20
         1          Peter         Parker   Photographer             22
         2          Billy        Jackson           Math             27
         3             Bo           Yang             CS             28
         4          Diana         Prince        Warrior             29
         5       Mary Ann          Davis           Math             30
         6          Clark           Kent     Journalist             35

SQL: DONE.
[25] select * from student where age <= 15
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_4, records: 0
Select recnos: 
    record          fname          lname          major            age

SQL: DONE.
[26] select * from employee where salary <= 100000
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_5, records: 5
Select recnos: 2 0 9 1 5
    record          fname          lname     department         salary
         0           Bill          Gates        Finance         100000
         1           John            Doe             HR          50000
         2          Larry           Page             HR          55000
         3           Jane          Smith             IT          75000
         4           Mark     Zuckerberg             IT          80000

SQL: DONE.
[27] select * from employee where salary <= 40000
-------Table::cond fired!-------
-------Table::cond done!-------
Table name: _select_table_6, records: 0
Select recnos: 
    record          fname          lname     department         salary

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
jwcomputer@Mac Final_Dec_20 % 