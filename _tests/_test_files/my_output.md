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
BPlusTree default constructor called!


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Build Keyword List Function Fired!
Insert Function Fired! Inserting: create: 0Next pointer is nullptr
Insert Function Fired! Inserting: make: 0Next pointer is nullptr
Insert Function Fired! Inserting: table: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: 0Next pointer is nullptr
Insert Function Fired! Inserting: col: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: fields: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: insert: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: into: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: select: 0Next pointer is nullptr
Insert Function Fired! Inserting: *: 0Next pointer is nullptr
Insert Function Fired! Inserting: from: 0Next pointer is nullptr
Insert Function Fired! Inserting: where: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: sym: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: and: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: or: 0Next pointer is nullptr
Insert Function Fired! Inserting: not: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ,: 0Next pointer is nullptr
Insert Function Fired! Inserting: =: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: !=: 0Next pointer is nullptr
Insert Function Fired! Inserting: <: 0BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: >: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: <=: 0Next pointer is nullptr
Insert Function Fired! Inserting: >=: 0BPlusTree default constructor called!
Next pointer is nullptr
Keyword list built successfully!
Parser Default Constructor Fired!
BPlusTree default constructor called!
BPlusTree default constructor called!
>make table employee fields  last,       first,         dep,      salary, year
SQL::command() fired!

[0] make table employee fields  last,       first,         dep,      salary, year
Make table state machine Fired!
Make table state machine Fired!
BPlusTree default constructor called!
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: fields: 3Next pointer is nullptr
Insert Function Fired! Inserting: last: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17Next pointer is nullptr
Insert Function Fired! Inserting: first: 11BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: dep: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: salary: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: year: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: salary: 0BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: year: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Insert Function Fired! Inserting: employee: ------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: employee, records: 
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------

basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
SQL::command() fired!

[1] make table employee fields  last,       first,         dep,      salary, year
Make table state machine Fired!
Make table state machine Fired!
BPlusTree default constructor called!
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: fields: 3Next pointer is nullptr
Insert Function Fired! Inserting: last: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17Next pointer is nullptr
Insert Function Fired! Inserting: first: 11BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: dep: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: salary: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: year: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: salary: 0BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: year: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: employee, records: 
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------

>insert into employee values Blow,       Joe,           CS,       100000, 2018
SQL::command() fired!

[2] insert into employee values Blow,       Joe,           CS,       100000, 2018
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Blow: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Joe: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: 100000: 11Next pointer is nullptr
Insert Function Fired! Inserting: 2018: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 100000: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 2018: [0]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: employee, records: 0
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
------------------------------------------------------------------------------------------

>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
SQL::command() fired!

[3] insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Blow: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: JoAnn: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Physics: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 200000: 11Next pointer is nullptr
Insert Function Fired! Inserting: 2016: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 200000: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 2016: [1]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: employee, records: 0 1
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
------------------------------------------------------------------------------------------

>insert into employee values Johnson,    Jack,          HR,       150000, 2014
SQL::command() fired!

[4] insert into employee values Johnson,    Jack,          HR,       150000, 2014
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jack: 11Next pointer is nullptr
Insert Function Fired! Inserting: HR: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 150000: 11Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 150000: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 2014: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: employee, records: 0 1 2
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
------------------------------------------------------------------------------------------

>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
SQL::command() fired!

[5] insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jimmy: 11Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 140000: 11Next pointer is nullptr
Insert Function Fired! Inserting: 2018: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Jimmy: [3]Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: [3]Next pointer is nullptr
Insert Function Fired! Inserting: 140000: [3]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
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
SQL::command() fired!

[6] make table student fields  fname,          lname,    major,    age
Make table state machine Fired!
Make table state machine Fired!
BPlusTree default constructor called!
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: fields: 3Next pointer is nullptr
Insert Function Fired! Inserting: fname: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17Next pointer is nullptr
Insert Function Fired! Inserting: lname: 11BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: major: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: age: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: ---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
---------------------------------------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: student, records: 
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
---------------------------------------------------------------------------

>insert into student values Flo,            Yao,        Art,    20
SQL::command() fired!

[7] insert into student values Flo,            Yao,     Art,    20
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Flo: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Yao: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Art: 11Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: student values: Flo Yao Art 20 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: student, records: 0
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
---------------------------------------------------------------------------

>insert into student values Bo,                      Yang,      CS,             28
SQL::command() fired!

[8] insert into student values Bo,                   Yang,      CS,             28
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Bo: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Yang: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: 28: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: student values: Bo Yang CS 28 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: student, records: 0 1
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
---------------------------------------------------------------------------

>insert into student values "Sammuel L.", Jackson,      CS,             40
SQL::command() fired!

[9] insert into student values "Sammuel L.", Jackson,   CS,             40
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Sammuel L.: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 40: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Sammuel L.: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 40: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: student, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

>insert into student values "Billy",         Jackson,   Math,   27
SQL::command() fired!

[10] insert into student values "Billy",             Jackson,   Math,   27
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Billy: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 27: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: student values: Billy Jackson Math 27 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Billy: [3]Next pointer is nullptr
Insert Function Fired! Inserting: Math: [3]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 27: [3]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
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
SQL::command() fired!

[11] insert into student values "Mary Ann",   Davis,    Math,   30
This is insert table!
This is insert table!
BPlusTree default constructor called!
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Mary Ann: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Davis: 11Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 30: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
>>> Inserting into table: student values: Mary Ann Davis Math 30 
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Mary Ann: [4]BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Davis: [4]Next pointer is nullptr
Insert Function Fired! Inserting: 30: [4]BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
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
SQL::command() fired!

[12] select * from employee
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select_all fired!-------
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: salary: 0BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: year: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 100000: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 2018: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 200000: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 2016: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 150000: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 2014: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Jimmy: [3]Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: [3]Next pointer is nullptr
Insert Function Fired! Inserting: 140000: [3]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: _selected_table_3, records: 0 1 2 3
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         0           Blow            Joe             CS         100000           2018
         1           Blow          JoAnn        Physics         200000           2016
         2        Johnson           Jack             HR         150000           2014
         3        Johnson          Jimmy      Chemistry         140000           2018
------------------------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
basic_test: records selected: 0 1 2 3

>select last, first, dep from employee
SQL::command() fired!

[13] select last, first, dep from employee
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: last: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: first: 11Next pointer is nullptr
Insert Function Fired! Inserting: dep: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select_all fired!-------
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Jimmy: [3]Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: [3]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_4, records: 0 1 2 3
------------------------------------------------------------
   Record#           last          first            dep
------------------------------------------------------------
         0           Blow            Joe             CS
         1           Blow          JoAnn        Physics
         2        Johnson           Jack             HR
         3        Johnson          Jimmy      Chemistry
------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
basic_test: records selected: 0 1 2 3

>select last from employee
SQL::command() fired!

[14] select last from employee
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: last: 11Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select_all fired!-------
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr

Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!

Duplicate record found, skipping insertion.

Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Johnson: [1]Next pointer is nullptr

Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!

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
SQL::command() fired!

[15] select * from employee where last = Johnson
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: last: 11Next pointer is nullptr
Insert Function Fired! Inserting: =: 12BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: last]-> [RelationalOperator: =]-> [ALFA: Johnson]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> last
is string or number
Pushing token: last to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> Johnson
is string or number
Pushing token: Johnson to output queue.
Postfix Expression: last Johnson = 
BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Johnson]-> [RelationalOperator: =]-> |||

Iterator Constructor Fired!

Field index for last: 0
Processing '=': field_value = Johnson

Iterator Constructor Fired!

2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: salary: 0BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: year: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Johnson: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Jack: [0]Next pointer is nullptr
Insert Function Fired! Inserting: HR: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 150000: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 2014: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Jimmy: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 140000: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 2018: [1]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: _selected_table_6, records: 2 3
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         2                                                                           
         3                                                                           
------------------------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
basic_test: records selected: 2 3

>select * from employee where last=Blow and first="JoAnn"
SQL::command() fired!

[16] select * from employee where last=Blow and first="JoAnn"
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: last: 11Next pointer is nullptr
Insert Function Fired! Inserting: =: 12BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Blow: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: and: 13BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: first: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: JoAnn: 11Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: last]-> [RelationalOperator: =]-> [ALFA: Blow]-> [LogicalOperator: and]-> [ALFA: first]-> [RelationalOperator: =]-> [ALFA: JoAnn]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> last
is string or number
Pushing token: last to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> Blow
is string or number
Pushing token: Blow to output queue.
Current Token:--------------> and
is operator
Popping operator: = from stack.
Pushing operator: and to stack.
Current Token:--------------> first
is string or number
Pushing token: first to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> JoAnn
is string or number
Pushing token: JoAnn to output queue.
Postfix Expression: last Blow = first JoAnn = and 
BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Blow]-> [RelationalOperator: =]-> [ALFA: first]-> [ALFA: JoAnn]-> [RelationalOperator: =]-> [LogicalOperator: and]-> |||

Iterator Constructor Fired!

Field index for last: 0
Processing '=': field_value = Blow

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

Field index for first: 1
Processing '=': field_value = JoAnn

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::and_with fired!-------
_recnos:1 
1 
-------Table::cond done!-------
Matching record numbers:
  1 
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: salary: 0BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: year: 0BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Insert Function Fired! Inserting: JoAnn: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Physics: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 200000: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 2016: [0]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
Table name: _selected_table_7, records: 1
------------------------------------------------------------------------------------------
   Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
         1                                                                           
------------------------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
basic_test: records selected: 1

>select * from student
SQL::command() fired!

[17] select * from student
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!

BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select_all fired!-------
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Sammuel L.: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 40: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Billy: [3]Next pointer is nullptr
Insert Function Fired! Inserting: Math: [3]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 27: [3]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Mary Ann: [4]BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Davis: [4]Next pointer is nullptr
Insert Function Fired! Inserting: 30: [4]BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
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

BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
SQL::command() fired!

[18] select * from student where (major=CS or major=Art)
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: (: 15Next pointer is nullptr
Insert Function Fired! Inserting: major: 11Next pointer is nullptr
Insert Function Fired! Inserting: =: 12BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: or: 13BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Art: 11BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ): 16Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

Converting Infix to Postfix...
Infix Queue  Queue: head->[LeftParen: (]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: CS]-> [LogicalOperator: or]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: Art]-> [RightParen: )]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> (
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> CS
is string or number
Pushing token: CS to output queue.
Current Token:--------------> or
is operator
Popping operator: = from stack.
Pushing operator: or to stack.
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> Art
is string or number
Pushing token: Art to output queue.
Current Token:--------------> )
Popped left paren from stack.
Postfix Expression: major CS = major Art = or 
BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> |||

Iterator Constructor Fired!

Field index for major: 2
Processing '=': field_value = CS

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

Field index for major: 2
Processing '=': field_value = Art

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Sammuel L.: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 40: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_9, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
basic_test: records selected: 0 1 2

>select * from student where lname>J
SQL::command() fired!

[19] select * from student where lname>J
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: lname: 11Next pointer is nullptr
Insert Function Fired! Inserting: >: 12Next pointer is nullptr
Insert Function Fired! Inserting: J: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: lname]-> [RelationalOperator: >]-> [ALFA: J]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> lname
is string or number
Pushing token: lname to output queue.
Current Token:--------------> >
is operator
Pushing operator: > to stack.
Current Token:--------------> J
is string or number
Pushing token: J to output queue.
Postfix Expression: lname J > 
BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> |||

Iterator Constructor Fired!

Field index for lname: 1
Processing '>': field_value = J

Iterator Constructor Fired!

Matching record: Key = Jackson, Record = 2 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0
2 3 1 0 
-------Table::cond done!-------
Matching record numbers:
  2   3   1   0 
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Sammuel L.: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: [0]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 40: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Billy: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Math: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 27: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Bo: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Yang: [2]Next pointer is nullptr
Insert Function Fired! Inserting: 28: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Flo: [3]BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Yao: [3]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Art: [3]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 20: [3]Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_10, records: 2 3 1 0
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         2             Bo           Yang             CS             28
         3            Flo            Yao            Art             20
         1          Billy        Jackson           Math             27
         0     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
basic_test: records selected: 2 3 1 0

>select * from student where lname>J and (major=CS or major=Art)
SQL::command() fired!

[20] select * from student where lname>J and (major=CS or major=Art)
BPlusTree default constructor called!
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: lname: 11Next pointer is nullptr
Insert Function Fired! Inserting: >: 12Next pointer is nullptr
Insert Function Fired! Inserting: J: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: and: 13BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: (: 15Next pointer is nullptr
Insert Function Fired! Inserting: major: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: =: 12BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: or: 13BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Art: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: ): 16Next pointer is nullptr
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!

Iterator Constructor Fired!


Iterator Constructor Fired!

Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: lname]-> [RelationalOperator: >]-> [ALFA: J]-> [LogicalOperator: and]-> [LeftParen: (]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: CS]-> [LogicalOperator: or]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: Art]-> [RightParen: )]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> lname
is string or number
Pushing token: lname to output queue.
Current Token:--------------> >
is operator
Pushing operator: > to stack.
Current Token:--------------> J
is string or number
Pushing token: J to output queue.
Current Token:--------------> and
is operator
Popping operator: > from stack.
Pushing operator: and to stack.
Current Token:--------------> (
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> CS
is string or number
Pushing token: CS to output queue.
Current Token:--------------> or
is operator
Popping operator: = from stack.
Pushing operator: or to stack.
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> Art
is string or number
Pushing token: Art to output queue.
Current Token:--------------> )
Popped left paren from stack.
Postfix Expression: lname J > major CS = major Art = or and 
BPlusTree default constructor called!
BPlusTree default constructor called!
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> [ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> [LogicalOperator: and]-> |||

Iterator Constructor Fired!

Field index for lname: 1
Processing '>': field_value = J

Iterator Constructor Fired!

Matching record: Key = Jackson, Record = 2 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0

Iterator Constructor Fired!

Field index for major: 2
Processing '=': field_value = CS

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

Field index for major: 2
Processing '=': field_value = Art

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 -------ResultSet::and_with fired!-------
_recnos:0 1 2 
0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
BPlusTree default constructor called!
BPlusTree default constructor called!
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
BPlusTree default constructor called!
-----------------------------------------------

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
FileRecord::FileRecord fired!
FileRecord::write fired!
Insert Function Fired! Inserting: Sammuel L.: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 40: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_11, records: 0 1 2
---------------------------------------------------------------------------
   Record#          fname          lname          major            age
---------------------------------------------------------------------------
         0            Flo            Yao            Art             20
         1             Bo           Yang             CS             28
         2     Sammuel L.        Jackson             CS             40
---------------------------------------------------------------------------

BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
basic_test: records selected: 0 1 2
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (42 ms)
[----------] 1 test from SQL_BASIC (42 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (42 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % 