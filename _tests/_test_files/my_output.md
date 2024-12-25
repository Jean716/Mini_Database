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
  CMakeLists.txt:31 (FetchContent_Declare)
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
-- Generating done (0.0s)
-- Build files have been written to: /Users/jwcomputer/Documents/CS8_Projects/Final_Dec_20/build
jwcomputer@Mac Final_Dec_20 % cmake --build build
[  1%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[  3%] Building CXX object CMakeFiles/main.dir/includes/binary_files/file_record.cpp.o
[  5%] Building CXX object CMakeFiles/main.dir/includes/parser/parser.cpp.o
[  7%] Building CXX object CMakeFiles/main.dir/includes/parser/sql_parser_functions.cpp.o
[  9%] Building CXX object CMakeFiles/main.dir/includes/rpn/resultset.cpp.o
[ 11%] Building CXX object CMakeFiles/main.dir/includes/rpn/rpn.cpp.o
[ 13%] Building CXX object CMakeFiles/main.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 15%] Building CXX object CMakeFiles/main.dir/includes/sql/sql.cpp.o
[ 16%] Building CXX object CMakeFiles/main.dir/includes/table/table.cpp.o
[ 18%] Building CXX object CMakeFiles/main.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 20%] Building CXX object CMakeFiles/main.dir/includes/tokenizer/stokenize.cpp.o
[ 22%] Linking CXX executable bin/main
[ 28%] Built target main
[ 32%] Built target gtest
[ 33%] Building CXX object CMakeFiles/basic_test.dir/_tests/_test_files/basic_test.cpp.o
[ 35%] Building CXX object CMakeFiles/basic_test.dir/includes/binary_files/file_record.cpp.o
[ 37%] Building CXX object CMakeFiles/basic_test.dir/includes/parser/parser.cpp.o
[ 39%] Building CXX object CMakeFiles/basic_test.dir/includes/parser/sql_parser_functions.cpp.o
[ 41%] Building CXX object CMakeFiles/basic_test.dir/includes/rpn/resultset.cpp.o
[ 43%] Building CXX object CMakeFiles/basic_test.dir/includes/rpn/rpn.cpp.o
[ 45%] Building CXX object CMakeFiles/basic_test.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 47%] Building CXX object CMakeFiles/basic_test.dir/includes/sql/sql.cpp.o
[ 49%] Building CXX object CMakeFiles/basic_test.dir/includes/table/table.cpp.o
[ 50%] Building CXX object CMakeFiles/basic_test.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 52%] Building CXX object CMakeFiles/basic_test.dir/includes/tokenizer/stokenize.cpp.o
[ 54%] Linking CXX executable bin/basic_test
[ 60%] Built target basic_test
[ 62%] Building CXX object CMakeFiles/testB.dir/_tests/_test_files/testB.cpp.o
[ 64%] Building CXX object CMakeFiles/testB.dir/includes/binary_files/file_record.cpp.o
[ 66%] Building CXX object CMakeFiles/testB.dir/includes/parser/parser.cpp.o
[ 67%] Building CXX object CMakeFiles/testB.dir/includes/parser/sql_parser_functions.cpp.o
[ 69%] Building CXX object CMakeFiles/testB.dir/includes/rpn/resultset.cpp.o
[ 71%] Building CXX object CMakeFiles/testB.dir/includes/rpn/rpn.cpp.o
[ 73%] Building CXX object CMakeFiles/testB.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 75%] Building CXX object CMakeFiles/testB.dir/includes/sql/sql.cpp.o
[ 77%] Building CXX object CMakeFiles/testB.dir/includes/table/table.cpp.o
[ 79%] Building CXX object CMakeFiles/testB.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 81%] Building CXX object CMakeFiles/testB.dir/includes/tokenizer/stokenize.cpp.o
[ 83%] Linking CXX executable bin/testB
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
Build Keyword List Function Fired!
Keyword list built successfully!
Parser Default Constructor Fired!
>make table employee fields  last,       first,         dep,      salary, year
Make table state machine Fired!
Make table state machine Fired!
-----------------------------------------------
Table name: employee, records: 
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------

basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
Make table state machine Fired!
Make table state machine Fired!
-----------------------------------------------
Table name: employee, records: 
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------

>insert into employee values Blow,       Joe,           CS,       100000, 2018
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Blow Joe CS 100000 2018 
SQL::DONE.
Table name: employee, records: 0
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
------------------------------------------------------------------------------------------

>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Blow JoAnn Physics 200000 2016 
SQL::DONE.
Table name: employee, records: 0 1
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
------------------------------------------------------------------------------------------

>insert into employee values Johnson,    Jack,          HR,       150000, 2014
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Johnson Jack HR 150000 2014 
SQL::DONE.
Table name: employee, records: 0 1 2
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
------------------------------------------------------------------------------------------

>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Johnson Jimmy Chemistry 140000 2018 
SQL::DONE.
Table name: employee, records: 0 1 2 3
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
         3        Johnson          Jimmy      Chemistry         140000           2018
------------------------------------------------------------------------------------------

>make table student fields  fname,          lname,    major,    age
Make table state machine Fired!
Make table state machine Fired!
-----------------------------------------------
Table name: student, records: 
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
---------------------------------------------------------------------------

>insert into student values Flo,            Yao,        Art,    20
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Flo Yao Art 20 
SQL::DONE.
Table name: student, records: 0
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
---------------------------------------------------------------------------

>insert into student values Bo,                      Yang,      CS,             28
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Bo Yang CS 28 
SQL::DONE.
Table name: student, records: 0 1
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
---------------------------------------------------------------------------

>insert into student values "Sammuel L.", Jackson,      CS,             40
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Sammuel L. Jackson CS 40 
SQL::DONE.
Table name: student, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

>insert into student values "Billy",         Jackson,   Math,   27
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Billy Jackson Math 27 
SQL::DONE.
Table name: student, records: 0 1 2 3
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
---------------------------------------------------------------------------

>insert into student values "Mary Ann",   Davis,        Math,   30
This is insert table!
This is insert table!
SQL::run: inserted.
insert into table:  values: Mary Ann Davis Math 30 
SQL::DONE.
Table name: student, records: 0 1 2 3 4
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
         4       Mary Ann          Davis           Math             30
---------------------------------------------------------------------------




>select * from employee
-------Table::select_all fired!-------
-----------------------------------------------
Table name: _selected_table_3, records: 0 1 2 3
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
         3        Johnson          Jimmy      Chemistry         140000           2018
------------------------------------------------------------------------------------------

basic_test: records selected: 0 1 2 3

>select last, first, dep from employee
-------Table::select_all fired!-------
-----------------------------------------------
Table name: _selected_table_4, records: 0 1 2 3
------------------------------------------------------------
   Record#           last          first            dep
------------------------------------------------------------
         0           Blow            Joe             CS
         1           Blow          JoAnn        Physics
         2        Johnson           Jack             HR
         3        Johnson          Jimmy      Chemistry
------------------------------------------------------------

basic_test: records selected: 0 1 2 3

>select last from employee
-------Table::select_all fired!-------
-----------------------------------------------
Duplicate record found, skipping insertion.
Duplicate record found, skipping insertion.
Table name: _selected_table_5, records: 0 1
------------------------------
   Record#           last
------------------------------
         0           Blow
         1           Blow
------------------------------

basic_test: records selected: 0 1

>select * from employee where last = Johnson
-------Table::select fired!-------
Field index for last: 0
2 3 
-------Table::cond done!-------
-----------------------------------------------
Table name: _selected_table_6, records: 2 3
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         2        Johnson           Jack             HR         150000           2014
         3        Johnson          Jimmy      Chemistry         140000           2018
------------------------------------------------------------------------------------------

basic_test: records selected: 2 3

>select * from employee where last=Blow and first="JoAnn"
-------Table::select fired!-------
Field index for last: 0
Field index for first: 1
1 
-------Table::cond done!-------
-----------------------------------------------
Table name: _selected_table_7, records: 1
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         1           Blow          JoAnn        Physics         200000           2016
------------------------------------------------------------------------------------------

basic_test: records selected: 1

>select * from student
-------Table::select_all fired!-------
-----------------------------------------------
Table name: _selected_table_8, records: 0 1 2 3 4
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
         4       Mary Ann          Davis           Math             30
---------------------------------------------------------------------------

basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
-------Table::select fired!-------
Field index for major: 2
Field index for major: 2
0 1 2 
-------Table::cond done!-------
-----------------------------------------------
Table name: _selected_table_9, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

basic_test: records selected: 0 1 2

>select * from student where lname>J
-------Table::select fired!-------
Field index for lname: 1
2 3 1 0 
-------Table::cond done!-------
-----------------------------------------------
Table name: _selected_table_10, records: 2 3 1 0
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         2     Sammuel L.        Jackson             CS             40
         3          Billy        Jackson           Math             27
         1             Bo           Yang             CS             28
         0            Flo            Yao            Art             20
---------------------------------------------------------------------------

basic_test: records selected: 2 3 1 0

>select * from student where lname>J and (major=CS or major=Art)
-------Table::select fired!-------
Field index for lname: 1
Field index for major: 2
Field index for major: 2
0 1 2 
-------Table::cond done!-------
-----------------------------------------------
Table name: _selected_table_11, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

basic_test: records selected: 0 1 2
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (40 ms)
[----------] 1 test from SQL_BASIC (40 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (40 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % 