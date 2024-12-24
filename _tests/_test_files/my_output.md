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
[  5%] Building CXX object CMakeFiles/main.dir/includes/binary_files/utilities.cpp.o
[  7%] Building CXX object CMakeFiles/main.dir/includes/parser/parser.cpp.o
[  9%] Building CXX object CMakeFiles/main.dir/includes/parser/sql_parser_functions.cpp.o
[ 11%] Building CXX object CMakeFiles/main.dir/includes/rpn/resultset.cpp.o
[ 13%] Building CXX object CMakeFiles/main.dir/includes/rpn/rpn.cpp.o
[ 15%] Building CXX object CMakeFiles/main.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 16%] Building CXX object CMakeFiles/main.dir/includes/sql/sql.cpp.o
[ 18%] Building CXX object CMakeFiles/main.dir/includes/stub/stub.cpp.o
[ 20%] Building CXX object CMakeFiles/main.dir/includes/table/table.cpp.o
[ 22%] Building CXX object CMakeFiles/main.dir/includes/tokenizer/ftokenize.cpp.o
[ 24%] Building CXX object CMakeFiles/main.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 26%] Building CXX object CMakeFiles/main.dir/includes/tokenizer/stokenize.cpp.o
[ 28%] Linking CXX executable bin/main
[ 28%] Built target main
[ 30%] Building CXX object _deps/googletest-build/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 32%] Linking CXX static library ../../../lib/libgtestd.a
[ 32%] Built target gtest
[ 33%] Building CXX object CMakeFiles/basic_test.dir/_tests/_test_files/basic_test.cpp.o
[ 35%] Building CXX object CMakeFiles/basic_test.dir/includes/binary_files/file_record.cpp.o
[ 37%] Building CXX object CMakeFiles/basic_test.dir/includes/binary_files/utilities.cpp.o
[ 39%] Building CXX object CMakeFiles/basic_test.dir/includes/parser/parser.cpp.o
[ 41%] Building CXX object CMakeFiles/basic_test.dir/includes/parser/sql_parser_functions.cpp.o
[ 43%] Building CXX object CMakeFiles/basic_test.dir/includes/rpn/resultset.cpp.o
[ 45%] Building CXX object CMakeFiles/basic_test.dir/includes/rpn/rpn.cpp.o
[ 47%] Building CXX object CMakeFiles/basic_test.dir/includes/shunting_yard/shunting_yard.cpp.o
[ 49%] Building CXX object CMakeFiles/basic_test.dir/includes/sql/sql.cpp.o
[ 50%] Building CXX object CMakeFiles/basic_test.dir/includes/stub/stub.cpp.o
[ 52%] Building CXX object CMakeFiles/basic_test.dir/includes/table/table.cpp.o
[ 54%] Building CXX object CMakeFiles/basic_test.dir/includes/tokenizer/ftokenize.cpp.o
[ 56%] Building CXX object CMakeFiles/basic_test.dir/includes/tokenizer/state_machine_functions.cpp.o
[ 58%] Building CXX object CMakeFiles/basic_test.dir/includes/tokenizer/stokenize.cpp.o
[ 60%] Linking CXX executable bin/basic_test
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
jwcomputer@Mac Final_Dec_20 % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
Table default constructor called at address: 0x16b59d7d8
Default table file created: default_table.tbl
Table default constructor called at address: 0x16b59d7d8
Default table file created: default_table.tbl
Table default constructor called at address: 0x16b59d7d8
Default table file created: default_table.tbl
BPlusTree default constructor called!
MMap constructor called!
Build Keyword List Function Fired!
Keyword list built successfully!
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.
Table default constructor called at address: 0x16b59e2c8
Default table file created: default_table.tbl
>make table employee fields  last,       first,         dep,      salary, year

=====Command Function Fired!=====
 make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: employee]->[ALFA: fields]->[ALFA: last]->[Comma: ,]->[ALFA: first]->[Comma: ,]->[ALFA: dep]->[Comma: ,]->[ALFA: salary]->[Comma: ,]->[ALFA: year]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Column Function Fired!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [make] table_name: [] 
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [] command: [make] table_name: [employee] 
Parse Tree Function Fired!
command: make
    ⎴
    table_name: [employee]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [last, first, dep, salary, year] command: [make] table_name: [employee] 
SQL::command()| Parse tree contents:     ⎴
    table_name: [employee]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Initializing index for field: last

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 1
 Adding to _field_map: first -> 1
Initializing index for field: first

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 2
 Adding to _field_map: dep -> 2
Initializing index for field: dep

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 3
 Adding to _field_map: salary -> 3
Initializing index for field: salary

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 4
 Adding to _field_map: year -> 4
Initializing index for field: year

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 5
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
>>> Table created successfully: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year

=====Command Function Fired!=====
 make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: employee]->[ALFA: fields]->[ALFA: last]->[Comma: ,]->[ALFA: first]->[Comma: ,]->[ALFA: dep]->[Comma: ,]->[ALFA: salary]->[Comma: ,]->[ALFA: year]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Column Function Fired!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [make] table_name: [] 
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [] command: [make] table_name: [employee] 
Parse Tree Function Fired!
command: make
    ⎴
    table_name: [employee]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [last, first, dep, salary, year] command: [make] table_name: [employee] 
SQL::command()| Parse tree contents:     ⎴
    table_name: [employee]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Initializing index for field: last

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 1
 Adding to _field_map: first -> 1
Initializing index for field: first

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 2
 Adding to _field_map: dep -> 2
Initializing index for field: dep

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 3
 Adding to _field_map: salary -> 3
Initializing index for field: salary

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 4
 Adding to _field_map: year -> 4
Initializing index for field: year

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 5
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
>>> Table created successfully: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into employee values Blow,       Joe,           CS,       100000, 2018

=====Command Function Fired!=====
 insert into employee values Blow,       Joe,           CS,       100000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
STokenizer::set_string called with input: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Blow]->[Comma: ,]->[ALFA: Joe]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 100000]->[Comma: ,]->[ALFA: 2018]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [] 
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Blow, Joe, CS, 100000, 2018]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [Blow, Joe, CS, 100000, 2018] 
SQL::command()| Parse tree contents:     ⎴
    values: [Blow, Joe, CS, 100000, 2018]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 0
MPair(key, value) constructor called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr

All leaf data in sequence: Blow: [0] 
Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1MMap::insert called with key: Joe, value: 0
MPair(key, value) constructor called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr

All leaf data in sequence: Joe: [0] 
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
MPair(key, value) constructor called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr

All leaf data in sequence: CS: [0] 
Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3MMap::insert called with key: 100000, value: 0
MPair(key, value) constructor called with key: 100000, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 100000: [0]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 
Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 0
MPair(key, value) constructor called with key: 2018, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2018: [0]Next pointer is nullptr

All leaf data in sequence: 2018: [0] 
Inserted into _indices[4]: (2018, 0)>>> Insert completed for table: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016

=====Command Function Fired!=====
 insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
set_string Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
STokenizer::set_string called with input: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Blow]->[Comma: ,]->[ALFA: JoAnn]->[Comma: ,]->[ALFA: Physics]->[Comma: ,]->[ALFA: 200000]->[Comma: ,]->[ALFA: 2016]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [] 
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Blow, JoAnn, Physics, 200000, 2016]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [Blow, JoAnn, Physics, 200000, 2016] 
SQL::command()| Parse tree contents:     ⎴
    values: [Blow, JoAnn, Physics, 200000, 2016]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 1
MPair(key, value) constructor called with key: Blow, value: 1
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1MMap::insert called with key: JoAnn, value: 1
MPair(key, value) constructor called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr

All leaf data in sequence: JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
MPair(key, value) constructor called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr

All leaf data in sequence: CS: [0] Physics: [1] 
Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3MMap::insert called with key: 200000, value: 1
MPair(key, value) constructor called with key: 200000, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 200000: [1]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 200000: [1] 
Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4MMap::insert called with key: 2016, value: 1
MPair(key, value) constructor called with key: 2016, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2016: [1]Next pointer is nullptr

All leaf data in sequence: 2016: [1] 2018: [0] 
Inserted into _indices[4]: (2016, 1)>>> Insert completed for table: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into employee values Johnson,    Jack,          HR,       150000, 2014

=====Command Function Fired!=====
 insert into employee values Johnson,    Jack,          HR,       150000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Jack]->[Comma: ,]->[ALFA: HR]->[Comma: ,]->[ALFA: 150000]->[Comma: ,]->[ALFA: 2014]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [] 
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Jack, HR, 150000, 2014]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [Johnson, Jack, HR, 150000, 2014] 
SQL::command()| Parse tree contents:     ⎴
    values: [Johnson, Jack, HR, 150000, 2014]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 2
MPair(key, value) constructor called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr

All leaf data in sequence: Blow: [0, 1] Johnson: [2] 
Inserted into _indices[0]: (Johnson, 2)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1MMap::insert called with key: Jack, value: 2
MPair(key, value) constructor called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jack: [2] JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
MPair(key, value) constructor called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: CS: [0] HR: [2] Physics: [1] 
Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3MMap::insert called with key: 150000, value: 2
MPair(key, value) constructor called with key: 150000, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 150000: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 100000: [0] 150000: [2] 200000: [1] 
Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 2
MPair(key, value) constructor called with key: 2014, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2014: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 2014: [2] 2016: [1] 2018: [0] 
Inserted into _indices[4]: (2014, 2)>>> Insert completed for table: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jack: [2] JoAnn: [1] Joe: [0] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: CS: [0] HR: [2] Physics: [1] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 100000: [0] 150000: [2] 200000: [1] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 2014: [2] 2016: [1] 2018: [0] 
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018

=====Command Function Fired!=====
 insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Jimmy]->[Comma: ,]->[ALFA: Chemistry]->[Comma: ,]->[ALFA: 140000]->[Comma: ,]->[ALFA: 2018]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [] 
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Jimmy, Chemistry, 140000, 2018]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [employee] values: [Johnson, Jimmy, Chemistry, 140000, 2018] 
SQL::command()| Parse tree contents:     ⎴
    values: [Johnson, Jimmy, Chemistry, 140000, 2018]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 3
MPair(key, value) constructor called with key: Johnson, value: 3
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 3)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1MMap::insert called with key: Jimmy, value: 3
MPair(key, value) constructor called with key: Jimmy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [3]Next pointer is nullptr

All leaf data in sequence: Jack: [2] Jimmy: [3] JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 3
MPair(key, value) constructor called with key: Chemistry, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [3]Next pointer is nullptr

All leaf data in sequence: CS: [0] Chemistry: [3] HR: [2] Physics: [1] 
Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3MMap::insert called with key: 140000, value: 3
MPair(key, value) constructor called with key: 140000, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 140000: [3]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 140000: [3] 150000: [2] 200000: [1] 
Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 3
MPair(key, value) constructor called with key: 2018, value: 3
Key already exists, appending value to key: 2018
Inserted into _indices[4]: (2018, 3)>>> Insert completed for table: employee
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jack: [2] Jimmy: [3] JoAnn: [1] Joe: [0] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: CS: [0] Chemistry: [3] HR: [2] Physics: [1] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 100000: [0] 140000: [3] 150000: [2] 200000: [1] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 2014: [2] 2016: [1] 2018: [0, 3] 
>make table student fields  fname,          lname,    major,    age

=====Command Function Fired!=====
 make table student fields  fname,          lname,    major,    age
set_string Function Fired!
set string : Input string: make table student fields  fname,          lname,    major,    age
Tokenize Function Fired!
Input string: make table student fields  fname,          lname,    major,    age
STokenizer::set_string called with input: make table student fields  fname,          lname,    major,    age
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: student]->[ALFA: fields]->[ALFA: fname]->[Comma: ,]->[ALFA: lname]->[Comma: ,]->[ALFA: major]->[Comma: ,]->[ALFA: age]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
state = 0: 1
Get Column Function Fired!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [make] table_name: [] 
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [] command: [make] table_name: [student] 
Parse Tree Function Fired!
command: make
    ⎴
    table_name: [student]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [fname, lname, major, age]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: col: [fname, lname, major, age] command: [make] table_name: [student] 
SQL::command()| Parse tree contents:     ⎴
    table_name: [student]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: student with fields: fname lname major age 

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Initializing index for field: fname

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 1
 Adding to _field_map: lname -> 1
Initializing index for field: lname

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 2
 Adding to _field_map: major -> 2
Initializing index for field: major

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 3
 Adding to _field_map: age -> 3
Initializing index for field: age

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 4
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
>>> Table created successfully: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into student values Flo,            Yao,        Art,    20

=====Command Function Fired!=====
 insert into student values Flo,            Yao,        Art,    20
set_string Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
STokenizer::set_string called with input: insert into student values Flo,            Yao,       Art,    20
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Yao]->[Comma: ,]->[ALFA: Art]->[Comma: ,]->[ALFA: 20]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [] 
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Yao, Art, 20]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [Flo, Yao, Art, 20] 
SQL::command()| Parse tree contents:     ⎴
    values: [Flo, Yao, Art, 20]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Flo Yao Art 20 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
MPair(key, value) constructor called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr

All leaf data in sequence: Flo: [0] 
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
MPair(key, value) constructor called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr

All leaf data in sequence: Yao: [0] 
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2MMap::insert called with key: Art, value: 0
MPair(key, value) constructor called with key: Art, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr

All leaf data in sequence: Art: [0] 
Inserted into _indices[2]: (Art, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
MPair(key, value) constructor called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr

All leaf data in sequence: 20: [0] 
Inserted into _indices[3]: (20, 0)>>> Insert completed for table: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into student values Bo,                      Yang,      CS,             28

=====Command Function Fired!=====
 insert into student values Bo,                      Yang,      CS,             28
set_string Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
STokenizer::set_string called with input: insert into student values Bo,                     Yang,      CS,             28
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Bo]->[Comma: ,]->[ALFA: Yang]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 28]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [] 
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Bo, Yang, CS, 28]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [Bo, Yang, CS, 28] 
SQL::command()| Parse tree contents:     ⎴
    values: [Bo, Yang, CS, 28]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Bo Yang CS 28 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 1
MPair(key, value) constructor called with key: Bo, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr

All leaf data in sequence: Bo: [1] Flo: [0] 
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
MPair(key, value) constructor called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr

All leaf data in sequence: Yang: [1] Yao: [0] 
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
MPair(key, value) constructor called with key: CS, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr

All leaf data in sequence: Art: [0] CS: [1] 
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
MPair(key, value) constructor called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr

All leaf data in sequence: 20: [0] 28: [1] 
Inserted into _indices[3]: (28, 1)>>> Insert completed for table: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
>insert into student values "Sammuel L.", Jackson,      CS,             40

=====Command Function Fired!=====
 insert into student values "Sammuel L.", Jackson,      CS,             40
set_string Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,    CS,             40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Sammuel L.]->[Comma: ,]->[ALFA: Jackson]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 40]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [] 
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Sammuel L., Jackson, CS, 40]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [Sammuel L., Jackson, CS, 40] 
SQL::command()| Parse tree contents:     ⎴
    values: [Sammuel L., Jackson, CS, 40]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0MMap::insert called with key: Sammuel L., value: 2
MPair(key, value) constructor called with key: Sammuel L., value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Sammuel L.: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Bo: [1] Flo: [0] Sammuel L.: [2] 
Inserted into _indices[0]: (Sammuel L., 2)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 2
MPair(key, value) constructor called with key: Jackson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jackson: [2] Yang: [1] Yao: [0] 
Inserted into _indices[1]: (Jackson, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 2
MPair(key, value) constructor called with key: CS, value: 2
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3MMap::insert called with key: 40, value: 2
MPair(key, value) constructor called with key: 40, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 40: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 20: [0] 28: [1] 40: [2] 
Inserted into _indices[3]: (40, 2)>>> Insert completed for table: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Bo: [1] Flo: [0] Sammuel L.: [2] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jackson: [2] Yang: [1] Yao: [0] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 20: [0] 28: [1] 40: [2] 
>insert into student values "Billy",         Jackson,   Math,   27

=====Command Function Fired!=====
 insert into student values "Billy",         Jackson,   Math,   27
set_string Function Fired!
set string : Input string: insert into student values "Billy",       Jackson,   Math,   27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Billy]->[Comma: ,]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 27]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [] 
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Billy, Jackson, Math, 27]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [Billy, Jackson, Math, 27] 
SQL::command()| Parse tree contents:     ⎴
    values: [Billy, Jackson, Math, 27]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Billy Jackson Math 27 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Billy for field: fname at index: 0MMap::insert called with key: Billy, value: 3
MPair(key, value) constructor called with key: Billy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy: [3]Next pointer is nullptr

All leaf data in sequence: Billy: [3] Bo: [1] Flo: [0] Sammuel L.: [2] 
Inserted into _indices[0]: (Billy, 3)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 3
MPair(key, value) constructor called with key: Jackson, value: 3
Key already exists, appending value to key: Jackson
Inserted into _indices[1]: (Jackson, 3)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 3
MPair(key, value) constructor called with key: Math, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [3]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Art: [0] CS: [1, 2] Math: [3] 
Inserted into _indices[2]: (Math, 3)Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3MMap::insert called with key: 27, value: 3
MPair(key, value) constructor called with key: 27, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 27: [3]Next pointer is nullptr

All leaf data in sequence: 20: [0] 27: [3] 28: [1] 40: [2] 
Inserted into _indices[3]: (27, 3)>>> Insert completed for table: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Billy: [3] Bo: [1] Flo: [0] Sammuel L.: [2] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jackson: [2, 3] Yang: [1] Yao: [0] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Art: [0] CS: [1, 2] Math: [3] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 20: [0] 27: [3] 28: [1] 40: [2] 
>insert into student values "Mary Ann",   Davis,        Math,   30

=====Command Function Fired!=====
 insert into student values "Mary Ann",   Davis,        Math,   30
set_string Function Fired!
set string : Input string: insert into student values "Mary Ann",   Davis,      Math,   30
Tokenize Function Fired!
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Mary Ann]->[Comma: ,]->[ALFA: Davis]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 30]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [] 
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [] 
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Mary Ann, Davis, Math, 30]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [insert] table_name: [student] values: [Mary Ann, Davis, Math, 30] 
SQL::command()| Parse tree contents:     ⎴
    values: [Mary Ann, Davis, Math, 30]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
⎵
    ^
    ⎴
    command: [insert]
    ⎵


>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Mary Ann Davis Math 30 
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Mary Ann Davis Math 30
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Mary Ann for field: fname at index: 0MMap::insert called with key: Mary Ann, value: 4
MPair(key, value) constructor called with key: Mary Ann, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Mary Ann: [4]BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Billy: [3] Bo: [1] Flo: [0] Mary Ann: [4] Sammuel L.: [2] 
Inserted into _indices[0]: (Mary Ann, 4)Field name: lname
Field index for lname: 1
Inserting field value: Davis for field: lname at index: 1MMap::insert called with key: Davis, value: 4
MPair(key, value) constructor called with key: Davis, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Davis: [4]Next pointer is nullptr

All leaf data in sequence: Davis: [4] Jackson: [2, 3] Yang: [1] Yao: [0] 
Inserted into _indices[1]: (Davis, 4)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 4
MPair(key, value) constructor called with key: Math, value: 4
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 4)Field name: age
Field index for age: 3
Inserting field value: 30 for field: age at index: 3MMap::insert called with key: 30, value: 4
MPair(key, value) constructor called with key: 30, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 30: [4]BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 20: [0] 27: [3] 28: [1] 30: [4] 40: [2] 
Inserted into _indices[3]: (30, 4)>>> Insert completed for table: student
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Billy: [3] Bo: [1] Flo: [0] Mary Ann: [4] Sammuel L.: [2] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Davis: [4] Jackson: [2, 3] Yang: [1] Yao: [0] 
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Art: [0] CS: [1, 2] Math: [3, 4] 
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 20: [0] 27: [3] 28: [1] 30: [4] 40: [2] 



>select * from employee

=====Command Function Fired!=====
 select * from employee
set_string Function Fired!
set string : Input string: select * from employee
Tokenize Function Fired!
Input string: select * from employee
STokenizer::set_string called with input: select * from employee
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: employee]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [] 
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [*] table_name: [] 
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [employee]
    fields: [*]
    ⎵
^
⎴
fields: [*]
⎵
    ^
    ⎴
    command: [select]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [*] table_name: [employee] 
SQL::command()| Parse tree contents:     ⎴
    table_name: [employee]
    fields: [*]
    ⎵
^
⎴
fields: [*]
⎵
    ^
    ⎴
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor called at address: 0x16b59db88
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16b59cc28
Default table file created: default_table.tbl
Found Pair: employee -> Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           

>>> No WHERE condition found. Selecting all records.
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_3 and fields: last first dep salary year 

-[01]----------------------------------------DEBUG HERE!

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Initializing index for field: last

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 1
 Adding to _field_map: first -> 1
Initializing index for field: first

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 2
 Adding to _field_map: dep -> 2
Initializing index for field: dep

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 3
 Adding to _field_map: salary -> 3
Initializing index for field: salary

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 4
 Adding to _field_map: year -> 4
Initializing index for field: year

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 5
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: employee.tbl
Opening file for writing: _selected_table_3.tbl
Opening file for writing (overwrite mode): _selected_table_3.tbl
File opened for writing: _selected_table_3.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: last
Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: first
Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: dep
Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: salary
Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: year
Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 0
MPair(key, value) constructor called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr

All leaf data in sequence: Blow: [0] 
Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1MMap::insert called with key: Joe, value: 0
MPair(key, value) constructor called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr

All leaf data in sequence: Joe: [0] 
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
MPair(key, value) constructor called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr

All leaf data in sequence: CS: [0] 
Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3MMap::insert called with key: 100000, value: 0
MPair(key, value) constructor called with key: 100000, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 100000: [0]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 
Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 0
MPair(key, value) constructor called with key: 2018, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2018: [0]Next pointer is nullptr

All leaf data in sequence: 2018: [0] 
Inserted into _indices[4]: (2018, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: last
Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: first
Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: dep
Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: salary
Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: year
Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 1
MPair(key, value) constructor called with key: Blow, value: 1
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1MMap::insert called with key: JoAnn, value: 1
MPair(key, value) constructor called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr

All leaf data in sequence: JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
MPair(key, value) constructor called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr

All leaf data in sequence: CS: [0] Physics: [1] 
Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3MMap::insert called with key: 200000, value: 1
MPair(key, value) constructor called with key: 200000, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 200000: [1]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 200000: [1] 
Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4MMap::insert called with key: 2016, value: 1
MPair(key, value) constructor called with key: 2016, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2016: [1]Next pointer is nullptr

All leaf data in sequence: 2016: [1] 2018: [0] 
Inserted into _indices[4]: (2016, 1)-------Table::field_col_no fired!-------
Field name: last
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: last
Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: first
Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: dep
Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: salary
Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: year
Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 2
MPair(key, value) constructor called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr

All leaf data in sequence: Blow: [0, 1] Johnson: [2] 
Inserted into _indices[0]: (Johnson, 2)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1MMap::insert called with key: Jack, value: 2
MPair(key, value) constructor called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: Jack: [2] JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
MPair(key, value) constructor called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: CS: [0] HR: [2] Physics: [1] 
Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3MMap::insert called with key: 150000, value: 2
MPair(key, value) constructor called with key: 150000, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 150000: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 100000: [0] 150000: [2] 200000: [1] 
Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 2
MPair(key, value) constructor called with key: 2014, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2014: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: 2014: [2] 2016: [1] 2018: [0] 
Inserted into _indices[4]: (2014, 2)-------Table::field_col_no fired!-------
Field name: last
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: last
Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: first
Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: dep
Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: salary
Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: year
Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 3
MPair(key, value) constructor called with key: Johnson, value: 3
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 3)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1MMap::insert called with key: Jimmy, value: 3
MPair(key, value) constructor called with key: Jimmy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [3]Next pointer is nullptr

All leaf data in sequence: Jack: [2] Jimmy: [3] JoAnn: [1] Joe: [0] 
Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 3
MPair(key, value) constructor called with key: Chemistry, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [3]Next pointer is nullptr

All leaf data in sequence: CS: [0] Chemistry: [3] HR: [2] Physics: [1] 
Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3MMap::insert called with key: 140000, value: 3
MPair(key, value) constructor called with key: 140000, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 140000: [3]Next pointer is nullptr

All leaf data in sequence: 100000: [0] 140000: [3] 150000: [2] 200000: [1] 
Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 3
MPair(key, value) constructor called with key: 2018, value: 3
Key already exists, appending value to key: 2018
Inserted into _indices[4]: (2018, 3)Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_3
-------------------Table::vector_to_table done!----------------------------
basic_test: records selected: 0 1 2 3

>select last, first, age from employee

=====Command Function Fired!=====
 select last, first, age from employee
set_string Function Fired!
set string : Input string: select last, first, age from employee
Tokenize Function Fired!
Input string: select last, first, age from employee
STokenizer::set_string called with input: select last, first, age from employee
Tokens: 
[ALFA: select]->[ALFA: last]->[Comma: ,]->[ALFA: first]->[Comma: ,]->[ALFA: age]->[ALFA: from]->[ALFA: employee]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr

All leaf data in sequence: command: [] 
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [] 
command is select!
command is select!
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [last, first, age] table_name: [] 
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [employee]
    fields: [last, first, age]
    ⎵
^
⎴
fields: [last, first, age]
⎵
    ^
    ⎴
    command: [select]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

All leaf data in sequence: command: [select] fields: [last, first, age] table_name: [employee] 
SQL::command()| Parse tree contents:     ⎴
    table_name: [employee]
    fields: [last, first, age]
    ⎵
^
⎴
fields: [last, first, age]
⎵
    ^
    ⎴
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor called at address: 0x16b59db88
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16b59cc28
Default table file created: default_table.tbl
Found Pair: employee -> Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           

>>> No WHERE condition found. Selecting all records.
Table default constructor called at address: 0x16b59cc38
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 Creating new table with name: _selected_table_4 and fields: last first age 

-[01]----------------------------------------DEBUG HERE!

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Initializing index for field: last

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 1
 Adding to _field_map: first -> 1
Initializing index for field: first

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 2
 Adding to _field_map: age -> 2
Initializing index for field: age

 ---[0]---[DEBUG] Preparing to push_back MMap<string, long> to _indices.---

BPlusTree default constructor called!
MMap constructor called!

 ---[1]---[DEBUG] Successfully pushed_back. _indices size: 3
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 3
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: age
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: employee.tbl
Opening file for writing: _selected_table_4.tbl
Opening file for writing (overwrite mode): _selected_table_4.tbl
File opened for writing: _selected_table_4.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: last
Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: first
Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    year: 4
    ⎵
⎴
salary: 3
    ⎴
    last: 0
    ⎵
first: 1
⎵
    ⎴
    dep : 2
    ⎵


Finding key: age
Key not found in Map.
zsh: segmentation fault  build/bin/basic_test
jwcomputer@Mac Final_Dec_20 % 