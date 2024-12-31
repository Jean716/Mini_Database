jwcomputer@Mac Final_Dec_20 % cmake -S . -B build
CMake Warning (dev) at /opt/homebrew/share/cmake/Modules/FetchContent.cmake:1373 (message):
  The DOWNLOAD_EXTRACT_TIMESTAMP option was not given and policy CMP0135 is
  not set.  The policy's OLD behavior will be used.  When using a URL
  download, the timestamps of extracted files should preferably be that of
  the time of extraction, otherwise code that depends on the extracted
  contents might not be rebuilt if the URL changes.  The OLD behavior
  preserves the timestamps from the archive instead, but this is usually not
  what you want.  Update your project to the NEW behavior or specify the
  DOWNLOAD_EXTRACT_TIMESTAMP option with a value of true to avoid this
  robustness issue.
Call Stack (most recent call first):
  CMakeLists.txt:32 (FetchContent_Declare)
This warning is for project developers.  Use -Wno-dev to suppress it.

CMake Deprecation Warning at build/_deps/googletest-src/CMakeLists.txt:4 (cmake_minimum_required):
  Compatibility with CMake < 3.10 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value.  Or, use the <min>...<max> syntax
  to tell CMake that the project requires at least <min> but has been updated
  to work with policies introduced by <max> or earlier.


CMake Deprecation Warning at build/_deps/googletest-src/googlemock/CMakeLists.txt:45 (cmake_minimum_required):
  Compatibility with CMake < 3.10 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value.  Or, use the <min>...<max> syntax
  to tell CMake that the project requires at least <min> but has been updated
  to work with policies introduced by <max> or earlier.


CMake Deprecation Warning at build/_deps/googletest-src/googletest/CMakeLists.txt:56 (cmake_minimum_required):
  Compatibility with CMake < 3.10 will be removed from a future version of
  CMake.

  Update the VERSION argument <min> value.  Or, use the <min>...<max> syntax
  to tell CMake that the project requires at least <min> but has been updated
  to work with policies introduced by <max> or earlier.


-- Configuring done (0.3s)
-- Generating done (0.1s)
-- Build files have been written to: /Users/jwcomputer/Documents/CS8_Projects/Final_Dec_20/build
jwcomputer@Mac Final_Dec_20 % cmake --build build
[ 28%] Built target main
[ 32%] Built target gtest
[ 60%] Built target basic_test
[ 88%] Built target testB
[ 92%] Built target gmock
[ 96%] Built target gmock_main
[100%] Built target gtest_main
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
Table name: _select_table_5, records: 0
Select recnos: 
    record           last          first            dep         salary           year

SQL: DONE.
basic_test: records selected: 

>select * from student
[17] select * from student
-------Table::select_all fired!-------
Debug: _last_record = 4
select_all(): Found 5 records.
Table name: _select_table_6, records: 5
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
-------Table::cond done!-------
Table name: _select_table_7, records: 3
Select recnos: 0 1 2
    record          fname          lname          major            age
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40

SQL: DONE.
basic_test: records selected: 0 1 2

>select * from student where lname>J
[19] select * from student where lname>J
-------Table::cond done!-------
Table name: _select_table_8, records: 4
Select recnos: 2 3 1 0
    record          fname          lname          major            age
         0     Sammuel L.        Jackson             CS             40
         1          Billy        Jackson           Math             27
         2             Bo           Yang             CS             28
         3            Flo            Yao            Art             20

SQL: DONE.
basic_test: records selected: 2 3 1 0

>select * from student where lname>J and (major=CS or major=Art)
[20] select * from student where lname>J and (major=CS or major=Art)
-------Table::cond done!-------
Table name: _select_table_9, records: 3
Select recnos: 0 1 2
    record          fname          lname          major            age
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40

SQL: DONE.
basic_test: records selected: 0 1 2
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (32 ms)
[----------] 1 test from SQL_BASIC (32 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (33 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % 