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


-- Configuring done (0.4s)
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
jwcomputer@Mac Final_Dec_20 % build/bin/testB

BPlusTree default constructor called!



----------running testB.cpp---------


[==========] Running 2 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 1 test from SQLTest
[ RUN      ] SQLTest.BatchInsertAndSelect

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!

MMap constructor called!
Build Keyword List Function Fired!
Insert Function Fired! Inserting: create: 0 Next pointer is nullptr
Insert Function Fired! Inserting: make: 0 Next pointer is nullptr
Insert Function Fired! Inserting: table: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: command: 0 Next pointer is nullptr
Insert Function Fired! Inserting: col: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: fields: 0
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: insert: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: into: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: values: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: select: 0 Next pointer is nullptr
Insert Function Fired! Inserting: *: 0 Next pointer is nullptr
Insert Function Fired! Inserting: from: 0 Next pointer is nullptr
Insert Function Fired! Inserting: where: 0
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
Insert Function Fired! Inserting: sym: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: and: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: or: 0 Next pointer is nullptr
Insert Function Fired! Inserting: not: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 0 Next pointer is nullptr
Insert Function Fired! Inserting: =: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: !=: 0 Next pointer is nullptr
Insert Function Fired! Inserting: <: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: >: 0
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: <=: 0 Next pointer is nullptr
Insert Function Fired! Inserting: >=: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Keyword list built successfully!
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.

----------------------------------------

>>> Executing: make table student fields fname, lname, major, age, company

=====Command Function Fired!=====
 make table student fields fname, lname, major, age, company
set_string Function Fired!
set string : Input string: make table student fields fname, lname, major, age, company
Tokenize Function Fired!
Input string: make table student fields fname, lname, major, age, company
STokenizer::set_string called with input: make table student fields fname, lname, major, age, company
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: student]->[ALFA: fields]->[ALFA: fname]->[Comma: ,]->[ALFA: lname]->[Comma: ,]->[ALFA: major]->[Comma: ,]->[ALFA: age]->[Comma: ,]->[ALFA: company]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: make is a keyword.
Insert Function Fired! Inserting: make: 1 Next pointer is nullptr
get_column: table is a keyword.
Insert Function Fired! Inserting: table: 2 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: fields is a keyword.
Insert Function Fired! Inserting: fields: 3 Next pointer is nullptr
Insert Function Fired! Inserting: fname: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17 Next pointer is nullptr
Insert Function Fired! Inserting: lname: 11
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: major: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: age: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: company: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
Insert Function Fired! Inserting: col: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
    col : [fname, lname, major, age, company]
    ⎵


Parse Tree Function Done!

BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
    col : [fname, lname, major, age, company]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Removing existing table file: student.tbl
>>> Creating table: student with fields: fname lname major age company 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: major

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0 Next pointer is nullptr
Initializing index for field: age

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: company -> 4
Insert Function Fired! Inserting: company: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: company

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
Index 4 initialized for field: company
-----------------------------------------------

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: student: Table name: student, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
File does not exist. Attempting to create: student.tbl

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
>>> Table created successfully: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into student values Flo, Yao, CS, 20, Google

=====Command Function Fired!=====
 insert into student values Flo, Yao, CS, 20, Google
set_string Function Fired!
set string : Input string: insert into student values Flo, Yao, CS, 20, Google
Tokenize Function Fired!
Input string: insert into student values Flo, Yao, CS, 20, Google
STokenizer::set_string called with input: insert into student values Flo, Yao, CS, 20, Google
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Yao]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 20]->[Comma: ,]->[ALFA: Google]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Flo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Yao: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Google: 11 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Yao, CS, 20, Google]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Flo, Yao, CS, 20, Google]
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
>>> Inserting into table: student values: Flo Yao CS 20 Google 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Yao CS 20 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Yao] [CS] [20] [Google] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0] Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0] Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0] Next pointer is nullptr
Inserted into _indices[3]: (20, 0)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Google: [0] Next pointer is nullptr
Inserted into _indices[4]: (Google, 0)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into student values Bo, Yang, CS, 28, Microsoft

=====Command Function Fired!=====
 insert into student values Bo, Yang, CS, 28, Microsoft
set_string Function Fired!
set string : Input string: insert into student values Bo, Yang, CS, 28, Microsoft
Tokenize Function Fired!
Input string: insert into student values Bo, Yang, CS, 28, Microsoft
STokenizer::set_string called with input: insert into student values Bo, Yang, CS, 28, Microsoft
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Bo]->[Comma: ,]->[ALFA: Yang]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 28]->[Comma: ,]->[ALFA: Microsoft]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Bo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Yang: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 28: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Microsoft: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Bo, Yang, CS, 28, Microsoft]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Bo, Yang, CS, 28, Microsoft]
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
>>> Inserting into table: student values: Bo Yang CS 28 Microsoft 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28 Microsoft
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Bo] [Yang] [CS] [28] [Microsoft] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [1] Next pointer is nullptr
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1] Next pointer is nullptr
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1] Next pointer is nullptr
Inserted into _indices[3]: (28, 1)Field name: company
Field index for company: 4
Inserting field value: Microsoft for field: company at index: 4MMap::insert called with key: Microsoft, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Microsoft: [1] Next pointer is nullptr
Inserted into _indices[4]: (Microsoft, 1)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into student values Sammuel L., Jackson, CS, 40, Uber

=====Command Function Fired!=====
 insert into student values Sammuel L., Jackson, CS, 40, Uber
set_string Function Fired!
set string : Input string: insert into student values Sammuel L., Jackson, CS, 40, Uber
Tokenize Function Fired!
Input string: insert into student values Sammuel L., Jackson, CS, 40, Uber
STokenizer::set_string called with input: insert into student values Sammuel L., Jackson, CS, 40, Uber
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Sammuel L.]->[Comma: ,]->[ALFA: Jackson]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 40]->[Comma: ,]->[ALFA: Uber]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Sammuel L.: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 40: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Uber: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Sammuel L., Jackson, CS, 40, Uber]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Sammuel L., Jackson, CS, 40, Uber]
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
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 Uber 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Sammuel L.] [Jackson] [CS] [40] [Uber] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0MMap::insert called with key: Sammuel L., value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Sammuel L.: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Sammuel L., 2)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jackson, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 2
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3MMap::insert called with key: 40, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 40: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (40, 2)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Uber: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Uber, 2)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into student values Flo, Jackson, Math, 21, Google

=====Command Function Fired!=====
 insert into student values Flo, Jackson, Math, 21, Google
set_string Function Fired!
set string : Input string: insert into student values Flo, Jackson, Math, 21, Google
Tokenize Function Fired!
Input string: insert into student values Flo, Jackson, Math, 21, Google
STokenizer::set_string called with input: insert into student values Flo, Jackson, Math, 21, Google
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 21]->[Comma: ,]->[ALFA: Google]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Flo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 21: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Google: 11 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Jackson, Math, 21, Google]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Flo, Jackson, Math, 21, Google]
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
>>> Inserting into table: student values: Flo Jackson Math 21 Google 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Jackson Math 21 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Jackson] [Math] [21] [Google] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 3
Key already exists, appending value to key: Flo
Inserted into _indices[0]: (Flo, 3)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 3
Key already exists, appending value to key: Jackson
Inserted into _indices[1]: (Jackson, 3)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [3] Next pointer is nullptr
Inserted into _indices[2]: (Math, 3)Field name: age
Field index for age: 3
Inserting field value: 21 for field: age at index: 3MMap::insert called with key: 21, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 21: [3] Next pointer is nullptr
Inserted into _indices[3]: (21, 3)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 3
Key already exists, appending value to key: Google
Inserted into _indices[4]: (Google, 3)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into student values Greg, Pearson, Physics, 20, Amazon

=====Command Function Fired!=====
 insert into student values Greg, Pearson, Physics, 20, Amazon
set_string Function Fired!
set string : Input string: insert into student values Greg, Pearson, Physics, 20, Amazon
Tokenize Function Fired!
Input string: insert into student values Greg, Pearson, Physics, 20, Amazon
STokenizer::set_string called with input: insert into student values Greg, Pearson, Physics, 20, Amazon
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Greg]->[Comma: ,]->[ALFA: Pearson]->[Comma: ,]->[ALFA: Physics]->[Comma: ,]->[ALFA: 20]->[Comma: ,]->[ALFA: Amazon]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Greg: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Pearson: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Physics: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Amazon: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Greg, Pearson, Physics, 20, Amazon]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Greg, Pearson, Physics, 20, Amazon]
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
>>> Inserting into table: student values: Greg Pearson Physics 20 Amazon 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Greg Pearson Physics 20 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Greg] [Pearson] [Physics] [20] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Greg for field: fname at index: 0MMap::insert called with key: Greg, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Greg: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Greg, 4)Field name: lname
Field index for lname: 1
Inserting field value: Pearson for field: lname at index: 1MMap::insert called with key: Pearson, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Pearson: [4] Next pointer is nullptr
Inserted into _indices[1]: (Pearson, 4)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Physics, 4)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 4
Key already exists, appending value to key: 20
Inserted into _indices[3]: (20, 4)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Amazon: [4] Next pointer is nullptr
Inserted into _indices[4]: (Amazon, 4)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into student values Jim Bob, Smith, Math, 23, Verizon

=====Command Function Fired!=====
 insert into student values Jim Bob, Smith, Math, 23, Verizon
set_string Function Fired!
set string : Input string: insert into student values Jim Bob, Smith, Math, 23, Verizon
Tokenize Function Fired!
Input string: insert into student values Jim Bob, Smith, Math, 23, Verizon
STokenizer::set_string called with input: insert into student values Jim Bob, Smith, Math, 23, Verizon
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Jim Bob]->[Comma: ,]->[ALFA: Smith]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 23]->[Comma: ,]->[ALFA: Verizon]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jim Bob: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Smith: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 23: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Verizon: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Jim Bob, Smith, Math, 23, Verizon]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Jim Bob, Smith, Math, 23, Verizon]
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
>>> Inserting into table: student values: Jim Bob Smith Math 23 Verizon 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 5
_last_record: 4
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Jim Bob Smith Math 23 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jim Bob] [Smith] [Math] [23] [Verizon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Jim Bob for field: fname at index: 0MMap::insert called with key: Jim Bob, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Jim Bob, 5)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Smith: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Smith, 5)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 5
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 5)Field name: age
Field index for age: 3
Inserting field value: 23 for field: age at index: 3MMap::insert called with key: 23, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 23: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (23, 5)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Verizon: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Verizon, 5)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into student values Calvin, Woo, Physics, 22, Uber

=====Command Function Fired!=====
 insert into student values Calvin, Woo, Physics, 22, Uber
set_string Function Fired!
set string : Input string: insert into student values Calvin, Woo, Physics, 22, Uber
Tokenize Function Fired!
Input string: insert into student values Calvin, Woo, Physics, 22, Uber
STokenizer::set_string called with input: insert into student values Calvin, Woo, Physics, 22, Uber
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Calvin]->[Comma: ,]->[ALFA: Woo]->[Comma: ,]->[ALFA: Physics]->[Comma: ,]->[ALFA: 22]->[Comma: ,]->[ALFA: Uber]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Calvin: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Woo: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Physics: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 22: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Uber: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Calvin, Woo, Physics, 22, Uber]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Calvin, Woo, Physics, 22, Uber]
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
>>> Inserting into table: student values: Calvin Woo Physics 22 Uber 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 6
_last_record: 5
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Calvin Woo Physics 22 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Calvin] [Woo] [Physics] [22] [Uber] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Calvin for field: fname at index: 0MMap::insert called with key: Calvin, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Calvin: [6] Next pointer is nullptr
Inserted into _indices[0]: (Calvin, 6)Field name: lname
Field index for lname: 1
Inserting field value: Woo for field: lname at index: 1MMap::insert called with key: Woo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Woo: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Woo, 6)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 6
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 6)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 22: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (22, 6)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 6
Key already exists, appending value to key: Uber
Inserted into _indices[4]: (Uber, 6)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into student values Anna Grace, Del Rio, CS, 22, USAF

=====Command Function Fired!=====
 insert into student values Anna Grace, Del Rio, CS, 22, USAF
set_string Function Fired!
set string : Input string: insert into student values Anna Grace, Del Rio, CS, 22, USAF
Tokenize Function Fired!
Input string: insert into student values Anna Grace, Del Rio, CS, 22, USAF
STokenizer::set_string called with input: insert into student values Anna Grace, Del Rio, CS, 22, USAF
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Anna Grace]->[Comma: ,]->[ALFA: Del Rio]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 22]->[Comma: ,]->[ALFA: USAF]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Anna Grace: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Del Rio: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 22: 11 Next pointer is nullptr
Insert Function Fired! Inserting: USAF: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Anna Grace, Del Rio, CS, 22, USAF]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Anna Grace, Del Rio, CS, 22, USAF]
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
>>> Inserting into table: student values: Anna Grace Del Rio CS 22 USAF 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 7
_last_record: 6
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        
6              Calvin         Woo            Physics        22             Uber           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Anna Grace Del Rio CS 22 USAF
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Anna Grace] [Del Rio] [CS] [22] [USAF] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Anna Grace for field: fname at index: 0MMap::insert called with key: Anna Grace, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Anna Grace: [7]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Anna Grace, 7)Field name: lname
Field index for lname: 1
Inserting field value: Del Rio for field: lname at index: 1MMap::insert called with key: Del Rio, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Del Rio: [7] Next pointer is nullptr
Inserted into _indices[1]: (Del Rio, 7)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 7
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 7)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 7
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 7)Field name: company
Field index for company: 4
Inserting field value: USAF for field: company at index: 4MMap::insert called with key: USAF, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: USAF: [7] Next pointer is nullptr
Inserted into _indices[4]: (USAF, 7)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon

=====Command Function Fired!=====
 insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon
set_string Function Fired!
set string : Input string: insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon
Tokenize Function Fired!
Input string: insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon
STokenizer::set_string called with input: insert into student values Teresa Mae, Gowers, Chemistry, 22, Verizon
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Teresa Mae]->[Comma: ,]->[ALFA: Gowers]->[Comma: ,]->[ALFA: Chemistry]->[Comma: ,]->[ALFA: 22]->[Comma: ,]->[ALFA: Verizon]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Teresa Mae: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Gowers: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 22: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Verizon: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Teresa Mae, Gowers, Chemistry, 22, Verizon]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Teresa Mae, Gowers, Chemistry, 22, Verizon]
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
>>> Inserting into table: student values: Teresa Mae Gowers Chemistry 22 Verizon 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 8
_last_record: 7
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        
6              Calvin         Woo            Physics        22             Uber           
7              Anna Grace     Del Rio        CS             22             USAF           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Teresa Mae Gowers Chemistry 22 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Teresa Mae] [Gowers] [Chemistry] [22] [Verizon] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Teresa Mae for field: fname at index: 0MMap::insert called with key: Teresa Mae, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Teresa Mae: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Teresa Mae, 8)Field name: lname
Field index for lname: 1
Inserting field value: Gowers for field: lname at index: 1MMap::insert called with key: Gowers, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gowers: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Gowers, 8)Field name: major
Field index for major: 2
Inserting field value: Chemistry for field: major at index: 2MMap::insert called with key: Chemistry, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [8] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 8)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 8
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 8)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 8
Key already exists, appending value to key: Verizon
Inserted into _indices[4]: (Verizon, 8)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

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


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into student values Alex, Smith, Gender Studies, 53, Amazon

=====Command Function Fired!=====
 insert into student values Alex, Smith, Gender Studies, 53, Amazon
set_string Function Fired!
set string : Input string: insert into student values Alex, Smith, Gender Studies, 53, Amazon
Tokenize Function Fired!
Input string: insert into student values Alex, Smith, Gender Studies, 53, Amazon
STokenizer::set_string called with input: insert into student values Alex, Smith, Gender Studies, 53, Amazon
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Alex]->[Comma: ,]->[ALFA: Smith]->[Comma: ,]->[ALFA: Gender Studies]->[Comma: ,]->[ALFA: 53]->[Comma: ,]->[ALFA: Amazon]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Alex: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Smith: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Gender Studies: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 53: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Amazon: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Alex, Smith, Gender Studies, 53, Amazon]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Alex, Smith, Gender Studies, 53, Amazon]
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
>>> Inserting into table: student values: Alex Smith Gender Studies 53 Amazon 
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 9
_last_record: 8
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        
6              Calvin         Woo            Physics        22             Uber           
7              Anna Grace     Del Rio        CS             22             USAF           
8              Teresa Mae     Gowers         Chemistry      22             Verizon        


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Alex Smith Gender Studies 53 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Alex] [Smith] [Gender Studies] [53] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Alex for field: fname at index: 0MMap::insert called with key: Alex, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Alex: [9] Next pointer is nullptr
Inserted into _indices[0]: (Alex, 9)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 9
Key already exists, appending value to key: Smith
Inserted into _indices[1]: (Smith, 9)Field name: major
Field index for major: 2
Inserting field value: Gender Studies for field: major at index: 2MMap::insert called with key: Gender Studies, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gender Studies: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Gender Studies, 9)Field name: age
Field index for age: 3
Inserting field value: 53 for field: age at index: 3MMap::insert called with key: 53, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 53: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (53, 9)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 9
Key already exists, appending value to key: Amazon
Inserted into _indices[4]: (Amazon, 9)>>> Insert completed for table: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

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

----------------------------------------

>>> Executing: make table employee fields lname, fname, dep, salary, year

=====Command Function Fired!=====
 make table employee fields lname, fname, dep, salary, year
set_string Function Fired!
set string : Input string: make table employee fields lname, fname, dep, salary, year
Tokenize Function Fired!
Input string: make table employee fields lname, fname, dep, salary, year
STokenizer::set_string called with input: make table employee fields lname, fname, dep, salary, year
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: employee]->[ALFA: fields]->[ALFA: lname]->[Comma: ,]->[ALFA: fname]->[Comma: ,]->[ALFA: dep]->[Comma: ,]->[ALFA: salary]->[Comma: ,]->[ALFA: year]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: make
This is make table!
Make table state machine Fired!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: make is a keyword.
Insert Function Fired! Inserting: make: 1 Next pointer is nullptr
get_column: table is a keyword.
Insert Function Fired! Inserting: table: 2 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: fields is a keyword.
Insert Function Fired! Inserting: fields: 3 Next pointer is nullptr
Insert Function Fired! Inserting: lname: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17 Next pointer is nullptr
Insert Function Fired! Inserting: fname: 11
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: dep: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: salary: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: year: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
Insert Function Fired! Inserting: col: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
    col : [lname, fname, dep, salary, year]
    ⎵


Parse Tree Function Done!

BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
    col : [lname, fname, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Removing existing table file: employee.tbl
>>> Creating table: employee with fields: lname fname dep salary year 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: lname -> 0
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: fname -> 1
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: dep -> 2
Insert Function Fired! Inserting: dep: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: dep

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: salary -> 3
Insert Function Fired! Inserting: salary: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: salary

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: year -> 4
Insert Function Fired! Inserting: year: 0
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: year

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: lname
Index 1 initialized for field: fname
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
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
Insert Function Fired! Inserting: employee: Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
File does not exist. Attempting to create: employee.tbl

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

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

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


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

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
>>> Table created successfully: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Blow, Joe, CS, 100000, 2018

=====Command Function Fired!=====
 insert into employee values Blow, Joe, CS, 100000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Blow, Joe, CS, 100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow, Joe, CS, 100000, 2018
STokenizer::set_string called with input: insert into employee values Blow, Joe, CS, 100000, 2018
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

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Blow: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Joe: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 100000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2018: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [Joe] [CS] [100000] [2018] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0] Next pointer is nullptr
Inserted into _indices[0]: (Blow, 0)Field name: fname
Field index for fname: 1
Inserting field value: Joe for field: fname at index: 1MMap::insert called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0] Next pointer is nullptr
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3MMap::insert called with key: 100000, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 100000: [0] Next pointer is nullptr
Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2018: [0] Next pointer is nullptr
Inserted into _indices[4]: (2018, 0)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Blow, JoAnn, Physics, 200000, 2016

=====Command Function Fired!=====
 insert into employee values Blow, JoAnn, Physics, 200000, 2016
set_string Function Fired!
set string : Input string: insert into employee values Blow, JoAnn, Physics, 200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow, JoAnn, Physics, 200000, 2016
STokenizer::set_string called with input: insert into employee values Blow, JoAnn, Physics, 200000, 2016
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

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Blow: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: JoAnn: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Physics: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 200000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2016: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [JoAnn] [Physics] [200000] [2016] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 1
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: fname
Field index for fname: 1
Inserting field value: JoAnn for field: fname at index: 1MMap::insert called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1] Next pointer is nullptr
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1] Next pointer is nullptr
Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3MMap::insert called with key: 200000, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 200000: [1] Next pointer is nullptr
Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4MMap::insert called with key: 2016, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2016: [1] Next pointer is nullptr
Inserted into _indices[4]: (2016, 1)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Johnson, Jack, HR, 150000, 2014

=====Command Function Fired!=====
 insert into employee values Johnson, Jack, HR, 150000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson, Jack, HR, 150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson, Jack, HR, 150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson, Jack, HR, 150000, 2014
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

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jack: 11 Next pointer is nullptr
Insert Function Fired! Inserting: HR: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 150000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jack] [HR] [150000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2] Next pointer is nullptr
Inserted into _indices[0]: (Johnson, 2)Field name: fname
Field index for fname: 1
Inserting field value: Jack for field: fname at index: 1MMap::insert called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3MMap::insert called with key: 150000, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 150000: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2014: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2014, 2)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018

=====Command Function Fired!=====
 insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson, Jimmy, Chemistry, 140000, 2018
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

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jimmy: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 140000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2018: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jimmy] [Chemistry] [140000] [2018] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 3
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 3)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [3] Next pointer is nullptr
Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [3] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3MMap::insert called with key: 140000, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 140000: [3] Next pointer is nullptr
Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 3
Key already exists, appending value to key: 2018
Inserted into _indices[4]: (2018, 3)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Yao, Jimmy, Math, 145000, 2014

=====Command Function Fired!=====
 insert into employee values Yao, Jimmy, Math, 145000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Yao, Jimmy, Math, 145000, 2014
Tokenize Function Fired!
Input string: insert into employee values Yao, Jimmy, Math, 145000, 2014
STokenizer::set_string called with input: insert into employee values Yao, Jimmy, Math, 145000, 2014
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Yao]->[Comma: ,]->[ALFA: Jimmy]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 145000]->[Comma: ,]->[ALFA: 2014]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Yao: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jimmy: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 145000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Yao, Jimmy, Math, 145000, 2014]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Yao, Jimmy, Math, 145000, 2014]
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
>>> Inserting into table: employee values: Yao Jimmy Math 145000 2014 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Yao Jimmy Math 145000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Jimmy] [Math] [145000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yao, 4)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 4
Key already exists, appending value to key: Jimmy
Inserted into _indices[1]: (Jimmy, 4)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Math, 4)Field name: salary
Field index for salary: 3
Inserting field value: 145000 for field: salary at index: 3MMap::insert called with key: 145000, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 145000: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (145000, 4)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 4
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 4)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Yao, Flo, CS, 147000, 2012

=====Command Function Fired!=====
 insert into employee values Yao, Flo, CS, 147000, 2012
set_string Function Fired!
set string : Input string: insert into employee values Yao, Flo, CS, 147000, 2012
Tokenize Function Fired!
Input string: insert into employee values Yao, Flo, CS, 147000, 2012
STokenizer::set_string called with input: insert into employee values Yao, Flo, CS, 147000, 2012
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Yao]->[Comma: ,]->[ALFA: Flo]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 147000]->[Comma: ,]->[ALFA: 2012]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Yao: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Flo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 147000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2012: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Yao, Flo, CS, 147000, 2012]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Yao, Flo, CS, 147000, 2012]
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
>>> Inserting into table: employee values: Yao Flo CS 147000 2012 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 5
_last_record: 4
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Yao Flo CS 147000 2012
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Flo] [CS] [147000] [2012] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 5
Key already exists, appending value to key: Yao
Inserted into _indices[0]: (Yao, 5)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Flo, 5)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 5
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 5)Field name: salary
Field index for salary: 3
Inserting field value: 147000 for field: salary at index: 3MMap::insert called with key: 147000, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 147000: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (147000, 5)Field name: year
Field index for year: 4
Inserting field value: 2012 for field: year at index: 4MMap::insert called with key: 2012, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2012: [5] Next pointer is nullptr
Inserted into _indices[4]: (2012, 5)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Yang, Bo, CS, 160000, 2013

=====Command Function Fired!=====
 insert into employee values Yang, Bo, CS, 160000, 2013
set_string Function Fired!
set string : Input string: insert into employee values Yang, Bo, CS, 160000, 2013
Tokenize Function Fired!
Input string: insert into employee values Yang, Bo, CS, 160000, 2013
STokenizer::set_string called with input: insert into employee values Yang, Bo, CS, 160000, 2013
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Yang]->[Comma: ,]->[ALFA: Bo]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 160000]->[Comma: ,]->[ALFA: 2013]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Yang: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Bo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 160000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2013: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Yang, Bo, CS, 160000, 2013]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Yang, Bo, CS, 160000, 2013]
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
>>> Inserting into table: employee values: Yang Bo CS 160000 2013 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 6
_last_record: 5
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Yang Bo CS 160000 2013
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yang] [Bo] [CS] [160000] [2013] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yang for field: lname at index: 0MMap::insert called with key: Yang, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yang, 6)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [6] Next pointer is nullptr
Inserted into _indices[1]: (Bo, 6)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 6
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 6)Field name: salary
Field index for salary: 3
Inserting field value: 160000 for field: salary at index: 3MMap::insert called with key: 160000, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 160000: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (160000, 6)Field name: year
Field index for year: 4
Inserting field value: 2013 for field: year at index: 4MMap::insert called with key: 2013, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2013: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2013, 6)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Jackson, Flo, Math, 165000, 2017

=====Command Function Fired!=====
 insert into employee values Jackson, Flo, Math, 165000, 2017
set_string Function Fired!
set string : Input string: insert into employee values Jackson, Flo, Math, 165000, 2017
Tokenize Function Fired!
Input string: insert into employee values Jackson, Flo, Math, 165000, 2017
STokenizer::set_string called with input: insert into employee values Jackson, Flo, Math, 165000, 2017
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Flo]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 165000]->[Comma: ,]->[ALFA: 2017]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Flo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 165000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2017: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Jackson, Flo, Math, 165000, 2017]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Jackson, Flo, Math, 165000, 2017]
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
>>> Inserting into table: employee values: Jackson Flo Math 165000 2017 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 7
_last_record: 6
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Jackson Flo Math 165000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Flo] [Math] [165000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [7] Next pointer is nullptr
Inserted into _indices[0]: (Jackson, 7)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 7
Key already exists, appending value to key: Flo
Inserted into _indices[1]: (Flo, 7)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 7
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 7)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 165000: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (165000, 7)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2017: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2017, 7)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Jackson, Bo, Chemistry, 130000, 2011

=====Command Function Fired!=====
 insert into employee values Jackson, Bo, Chemistry, 130000, 2011
set_string Function Fired!
set string : Input string: insert into employee values Jackson, Bo, Chemistry, 130000, 2011
Tokenize Function Fired!
Input string: insert into employee values Jackson, Bo, Chemistry, 130000, 2011
STokenizer::set_string called with input: insert into employee values Jackson, Bo, Chemistry, 130000, 2011
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Bo]->[Comma: ,]->[ALFA: Chemistry]->[Comma: ,]->[ALFA: 130000]->[Comma: ,]->[ALFA: 2011]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Bo: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Chemistry: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 130000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2011: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Jackson, Bo, Chemistry, 130000, 2011]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Jackson, Bo, Chemistry, 130000, 2011]
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
>>> Inserting into table: employee values: Jackson Bo Chemistry 130000 2011 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 8
_last_record: 7
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Jackson Bo Chemistry 130000 2011
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Bo] [Chemistry] [130000] [2011] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 8
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 8)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 8
Key already exists, appending value to key: Bo
Inserted into _indices[1]: (Bo, 8)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 8
Key already exists, appending value to key: Chemistry
Inserted into _indices[2]: (Chemistry, 8)Field name: salary
Field index for salary: 3
Inserting field value: 130000 for field: salary at index: 3MMap::insert called with key: 130000, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 130000: [8] Next pointer is nullptr
Inserted into _indices[3]: (130000, 8)Field name: year
Field index for year: 4
Inserting field value: 2011 for field: year at index: 4MMap::insert called with key: 2011, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2011: [8] Next pointer is nullptr
Inserted into _indices[4]: (2011, 8)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Jackson, Billy, Math, 170000, 2017

=====Command Function Fired!=====
 insert into employee values Jackson, Billy, Math, 170000, 2017
set_string Function Fired!
set string : Input string: insert into employee values Jackson, Billy, Math, 170000, 2017
Tokenize Function Fired!
Input string: insert into employee values Jackson, Billy, Math, 170000, 2017
STokenizer::set_string called with input: insert into employee values Jackson, Billy, Math, 170000, 2017
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Billy]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 170000]->[Comma: ,]->[ALFA: 2017]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jackson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Billy: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 170000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2017: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Jackson, Billy, Math, 170000, 2017]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Jackson, Billy, Math, 170000, 2017]
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
>>> Inserting into table: employee values: Jackson Billy Math 170000 2017 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 9
_last_record: 8
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Jackson Billy Math 170000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Billy] [Math] [170000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 9
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 9)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy: [9]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Billy, 9)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 9
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 9)Field name: salary
Field index for salary: 3
Inserting field value: 170000 for field: salary at index: 3MMap::insert called with key: 170000, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 170000: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (170000, 9)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 9
Key already exists, appending value to key: 2017
Inserted into _indices[4]: (2017, 9)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

----------------------------------------

>>> Executing: insert into employee values Johnson, Mary Ann, Math, 165000, 2014

=====Command Function Fired!=====
 insert into employee values Johnson, Mary Ann, Math, 165000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson, Mary Ann, Math, 165000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson, Mary Ann, Math, 165000, 2014
STokenizer::set_string called with input: insert into employee values Johnson, Mary Ann, Math, 165000, 2014
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Mary Ann]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 165000]->[Comma: ,]->[ALFA: 2014]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Mary Ann: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 165000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Mary Ann, Math, 165000, 2014]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Johnson, Mary Ann, Math, 165000, 2014]
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
>>> Inserting into table: employee values: Johnson Mary Ann Math 165000 2014 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 10
_last_record: 9
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Mary Ann Math 165000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Mary Ann] [Math] [165000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 10

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 10
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 10)Field name: fname
Field index for fname: 1
Inserting field value: Mary Ann for field: fname at index: 1MMap::insert called with key: Mary Ann, value: 10
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Mary Ann: [10]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Mary Ann, 10)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 10
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 10)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 10
Key already exists, appending value to key: 165000
Inserted into _indices[3]: (165000, 10)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 10
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 10)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


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

----------------------------------------

>>> Executing: insert into employee values Johnson, Billy Bob, Physics, 142000, 2014

=====Command Function Fired!=====
 insert into employee values Johnson, Billy Bob, Physics, 142000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson, Billy Bob, Physics, 142000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson, Billy Bob, Physics, 142000, 2014
STokenizer::set_string called with input: insert into employee values Johnson, Billy Bob, Physics, 142000, 2014
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Billy Bob]->[Comma: ,]->[ALFA: Physics]->[Comma: ,]->[ALFA: 142000]->[Comma: ,]->[ALFA: 2014]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Billy Bob: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Physics: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 142000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Billy Bob, Physics, 142000, 2014]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Johnson, Billy Bob, Physics, 142000, 2014]
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
>>> Inserting into table: employee values: Johnson Billy Bob Physics 142000 2014 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 11
_last_record: 10
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Bob Physics 142000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy Bob] [Physics] [142000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 11

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 11
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 11)Field name: fname
Field index for fname: 1
Inserting field value: Billy Bob for field: fname at index: 1MMap::insert called with key: Billy Bob, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy Bob: [11] Next pointer is nullptr
Inserted into _indices[1]: (Billy Bob, 11)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 11
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 11)Field name: salary
Field index for salary: 3
Inserting field value: 142000 for field: salary at index: 3MMap::insert called with key: 142000, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 142000: [11] Next pointer is nullptr
Inserted into _indices[3]: (142000, 11)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 11
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 11)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


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

----------------------------------------

>>> Executing: insert into employee values Johnson, Billy, Phys Ed, 102000, 2014

=====Command Function Fired!=====
 insert into employee values Johnson, Billy, Phys Ed, 102000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson, Billy, Phys Ed, 102000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson, Billy, Phys Ed, 102000, 2014
STokenizer::set_string called with input: insert into employee values Johnson, Billy, Phys Ed, 102000, 2014
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Billy]->[Comma: ,]->[ALFA: Phys Ed]->[Comma: ,]->[ALFA: 102000]->[Comma: ,]->[ALFA: 2014]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Johnson: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Billy: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Phys Ed: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 102000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2014: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Billy, Phys Ed, 102000, 2014]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Johnson, Billy, Phys Ed, 102000, 2014]
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
>>> Inserting into table: employee values: Johnson Billy Phys Ed 102000 2014 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 12
_last_record: 11
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Phys Ed 102000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy] [Phys Ed] [102000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 12

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 12
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 12)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 12
Key already exists, appending value to key: Billy
Inserted into _indices[1]: (Billy, 12)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Phys Ed: [12]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Phys Ed, 12)Field name: salary
Field index for salary: 3
Inserting field value: 102000 for field: salary at index: 3MMap::insert called with key: 102000, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 102000: [12]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (102000, 12)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 12
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 12)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


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

----------------------------------------

>>> Executing: insert into employee values Van Gogh, Vincent, Art, 240000, 2015

=====Command Function Fired!=====
 insert into employee values Van Gogh, Vincent, Art, 240000, 2015
set_string Function Fired!
set string : Input string: insert into employee values Van Gogh, Vincent, Art, 240000, 2015
Tokenize Function Fired!
Input string: insert into employee values Van Gogh, Vincent, Art, 240000, 2015
STokenizer::set_string called with input: insert into employee values Van Gogh, Vincent, Art, 240000, 2015
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Van Gogh]->[Comma: ,]->[ALFA: Vincent]->[Comma: ,]->[ALFA: Art]->[Comma: ,]->[ALFA: 240000]->[Comma: ,]->[ALFA: 2015]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Van Gogh: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Vincent: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Art: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 240000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2015: 11 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Van Gogh, Vincent, Art, 240000, 2015]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Van Gogh, Vincent, Art, 240000, 2015]
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
>>> Inserting into table: employee values: Van Gogh Vincent Art 240000 2015 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 13
_last_record: 12
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           
12             Johnson        Billy          Phys Ed        102000         2014           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent Art 240000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [Art] [240000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 13

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Van Gogh: [13] Next pointer is nullptr
Inserted into _indices[0]: (Van Gogh, 13)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Vincent: [13]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Vincent, 13)Field name: dep
Field index for dep: 2
Inserting field value: Art for field: dep at index: 2MMap::insert called with key: Art, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Art, 13)Field name: salary
Field index for salary: 3
Inserting field value: 240000 for field: salary at index: 3MMap::insert called with key: 240000, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 240000: [13]
BPlusTree default constructor called!


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
Inserted into _indices[3]: (240000, 13)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2015: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2015, 13)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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
 Next pointer is nullptr

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

----------------------------------------

>>> Executing: insert into employee values Van Gogh, Vincent, CS, 245000, 2015

=====Command Function Fired!=====
 insert into employee values Van Gogh, Vincent, CS, 245000, 2015
set_string Function Fired!
set string : Input string: insert into employee values Van Gogh, Vincent, CS, 245000, 2015
Tokenize Function Fired!
Input string: insert into employee values Van Gogh, Vincent, CS, 245000, 2015
STokenizer::set_string called with input: insert into employee values Van Gogh, Vincent, CS, 245000, 2015
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Van Gogh]->[Comma: ,]->[ALFA: Vincent]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 245000]->[Comma: ,]->[ALFA: 2015]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Van Gogh: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Vincent: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 245000: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 2015: 11 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Van Gogh, Vincent, CS, 245000, 2015]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Van Gogh, Vincent, CS, 245000, 2015]
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
>>> Inserting into table: employee values: Van Gogh Vincent CS 245000 2015 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 14
_last_record: 13
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           
12             Johnson        Billy          Phys Ed        102000         2014           
13             Van Gogh       Vincent        Art            240000         2015           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent CS 245000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [CS] [245000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 14

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 14
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 14)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 14
Key already exists, appending value to key: Vincent
Inserted into _indices[1]: (Vincent, 14)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 14
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 14)Field name: salary
Field index for salary: 3
Inserting field value: 245000 for field: salary at index: 3MMap::insert called with key: 245000, value: 14
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 245000: [14]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (245000, 14)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 14
Key already exists, appending value to key: 2015
Inserted into _indices[4]: (2015, 14)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


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

----------------------------------------

>>> Executing: insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010

=====Command Function Fired!=====
 insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010
set_string Function Fired!
set string : Input string: insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010
Tokenize Function Fired!
Input string: insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010
STokenizer::set_string called with input: insert into employee values Van Gogh, Jim Bob, Phys Ed, 230000, 2010
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Van Gogh]->[Comma: ,]->[ALFA: Jim Bob]->[Comma: ,]->[ALFA: Phys Ed]->[Comma: ,]->[ALFA: 230000]->[Comma: ,]->[ALFA: 2010]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: insert
This is insert table!
Get Column Function Fired!

BPlusTree default constructor called!

get_column: insert is a keyword.
Insert Function Fired! Inserting: insert: 4 Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Van Gogh: 11 Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: Jim Bob: 11 Next pointer is nullptr
Insert Function Fired! Inserting: Phys Ed: 11
BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: 230000: 11 Next pointer is nullptr
Insert Function Fired! Inserting: 2010: 11
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: [] Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
command is insert!
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Van Gogh, Jim Bob, Phys Ed, 230000, 2010]
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
SQL::command()| Parse tree contents:     ⎴
    values: [Van Gogh, Jim Bob, Phys Ed, 230000, 2010]
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
>>> Inserting into table: employee values: Van Gogh Jim Bob Phys Ed 230000 2010 
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 15
_last_record: 14
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           
12             Johnson        Billy          Phys Ed        102000         2014           
13             Van Gogh       Vincent        Art            240000         2015           
14             Van Gogh       Vincent        CS             245000         2015           


BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Jim Bob Phys Ed 230000 2010
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Jim Bob] [Phys Ed] [230000] [2010] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 15

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 15
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 15)Field name: fname
Field index for fname: 1
Inserting field value: Jim Bob for field: fname at index: 1MMap::insert called with key: Jim Bob, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [15]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jim Bob, 15)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 15
Key already exists, appending value to key: Phys Ed
Inserted into _indices[2]: (Phys Ed, 15)Field name: salary
Field index for salary: 3
Inserting field value: 230000 for field: salary at index: 3MMap::insert called with key: 230000, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 230000: [15] Next pointer is nullptr
Inserted into _indices[3]: (230000, 15)Field name: year
Field index for year: 4
Inserting field value: 2010 for field: year at index: 4MMap::insert called with key: 2010, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2010: [15]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2010, 15)>>> Insert completed for table: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

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

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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

----------------------------------------

>>> Executing: select * from student

=====Command Function Fired!=====
 select * from student
set_string Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!

BPlusTree default constructor called!

get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7 Next pointer is nullptr
Insert Function Fired! Inserting: *: 8 Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: [] Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [student]
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
SQL::command()| Parse tree contents:     ⎴
    table_name: [student]
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

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 10
_last_record: 9
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        
6              Calvin         Woo            Physics        22             Uber           
7              Anna Grace     Del Rio        CS             22             USAF           
8              Teresa Mae     Gowers         Chemistry      22             Verizon        
9              Alex           Smith          Gender Studies 53             Amazon         

>>> No WHERE condition found. Selecting all records.

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 5 6 7 8 9 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 5 6 7 8 9 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_2 and fields: fname lname major age company 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: major

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0 Next pointer is nullptr
Initializing index for field: age

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: company -> 4
Insert Function Fired! Inserting: company: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: company

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
Index 4 initialized for field: company
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_2.tbl
Opening file for writing (overwrite mode): _selected_table_2.tbl
File opened for writing: _selected_table_2.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao CS 20 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Yao] [CS] [20] [Google] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0] Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0] Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0] Next pointer is nullptr
Inserted into _indices[3]: (20, 0)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Google: [0] Next pointer is nullptr
Inserted into _indices[4]: (Google, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28 Microsoft
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Bo] [Yang] [CS] [28] [Microsoft] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [1] Next pointer is nullptr
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1] Next pointer is nullptr
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1] Next pointer is nullptr
Inserted into _indices[3]: (28, 1)Field name: company
Field index for company: 4
Inserting field value: Microsoft for field: company at index: 4MMap::insert called with key: Microsoft, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Microsoft: [1] Next pointer is nullptr
Inserted into _indices[4]: (Microsoft, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Sammuel L.] [Jackson] [CS] [40] [Uber] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0MMap::insert called with key: Sammuel L., value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Sammuel L.: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Sammuel L., 2)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jackson, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 2
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3MMap::insert called with key: 40, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 40: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (40, 2)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Uber: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Uber, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Jackson Math 21 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Jackson] [Math] [21] [Google] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 3
Key already exists, appending value to key: Flo
Inserted into _indices[0]: (Flo, 3)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 3
Key already exists, appending value to key: Jackson
Inserted into _indices[1]: (Jackson, 3)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [3] Next pointer is nullptr
Inserted into _indices[2]: (Math, 3)Field name: age
Field index for age: 3
Inserting field value: 21 for field: age at index: 3MMap::insert called with key: 21, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 21: [3] Next pointer is nullptr
Inserted into _indices[3]: (21, 3)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 3
Key already exists, appending value to key: Google
Inserted into _indices[4]: (Google, 3)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Greg Pearson Physics 20 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Greg] [Pearson] [Physics] [20] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Greg for field: fname at index: 0MMap::insert called with key: Greg, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Greg: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Greg, 4)Field name: lname
Field index for lname: 1
Inserting field value: Pearson for field: lname at index: 1MMap::insert called with key: Pearson, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Pearson: [4] Next pointer is nullptr
Inserted into _indices[1]: (Pearson, 4)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Physics, 4)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 4
Key already exists, appending value to key: 20
Inserted into _indices[3]: (20, 4)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Amazon: [4] Next pointer is nullptr
Inserted into _indices[4]: (Amazon, 4)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jim Bob Smith Math 23 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jim Bob] [Smith] [Math] [23] [Verizon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Jim Bob for field: fname at index: 0MMap::insert called with key: Jim Bob, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Jim Bob, 5)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Smith: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Smith, 5)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 5
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 5)Field name: age
Field index for age: 3
Inserting field value: 23 for field: age at index: 3MMap::insert called with key: 23, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 23: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (23, 5)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Verizon: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Verizon, 5)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Calvin Woo Physics 22 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Calvin] [Woo] [Physics] [22] [Uber] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Calvin for field: fname at index: 0MMap::insert called with key: Calvin, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Calvin: [6] Next pointer is nullptr
Inserted into _indices[0]: (Calvin, 6)Field name: lname
Field index for lname: 1
Inserting field value: Woo for field: lname at index: 1MMap::insert called with key: Woo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Woo: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Woo, 6)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 6
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 6)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 22: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (22, 6)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 6
Key already exists, appending value to key: Uber
Inserted into _indices[4]: (Uber, 6)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Anna Grace Del Rio CS 22 USAF
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Anna Grace] [Del Rio] [CS] [22] [USAF] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Anna Grace for field: fname at index: 0MMap::insert called with key: Anna Grace, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Anna Grace: [7]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Anna Grace, 7)Field name: lname
Field index for lname: 1
Inserting field value: Del Rio for field: lname at index: 1MMap::insert called with key: Del Rio, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Del Rio: [7] Next pointer is nullptr
Inserted into _indices[1]: (Del Rio, 7)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 7
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 7)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 7
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 7)Field name: company
Field index for company: 4
Inserting field value: USAF for field: company at index: 4MMap::insert called with key: USAF, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: USAF: [7] Next pointer is nullptr
Inserted into _indices[4]: (USAF, 7)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Teresa Mae Gowers Chemistry 22 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Teresa Mae] [Gowers] [Chemistry] [22] [Verizon] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Teresa Mae for field: fname at index: 0MMap::insert called with key: Teresa Mae, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Teresa Mae: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Teresa Mae, 8)Field name: lname
Field index for lname: 1
Inserting field value: Gowers for field: lname at index: 1MMap::insert called with key: Gowers, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gowers: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Gowers, 8)Field name: major
Field index for major: 2
Inserting field value: Chemistry for field: major at index: 2MMap::insert called with key: Chemistry, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [8] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 8)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 8
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 8)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 8
Key already exists, appending value to key: Verizon
Inserted into _indices[4]: (Verizon, 8)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Alex Smith Gender Studies 53 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Alex] [Smith] [Gender Studies] [53] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Alex for field: fname at index: 0MMap::insert called with key: Alex, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Alex: [9] Next pointer is nullptr
Inserted into _indices[0]: (Alex, 9)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 9
Key already exists, appending value to key: Smith
Inserted into _indices[1]: (Smith, 9)Field name: major
Field index for major: 2
Inserting field value: Gender Studies for field: major at index: 2MMap::insert called with key: Gender Studies, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gender Studies: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Gender Studies, 9)Field name: age
Field index for age: 3
Inserting field value: 53 for field: age at index: 3MMap::insert called with key: 53, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 53: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (53, 9)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 9
Key already exists, appending value to key: Amazon
Inserted into _indices[4]: (Amazon, 9)Vector_to_table :: record numbers: 0 1 2 3 4 5 6 7 8 9 
Vector_to_table :: table name: _selected_table_2
-------------------Table::vector_to_table done!----------------------------

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

----------------------------------------

>>> Executing: select * from employee

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

BPlusTree default constructor called!

get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7 Next pointer is nullptr
Insert Function Fired! Inserting: *: 8 Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11 Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: [] Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 16
_last_record: 15
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           
12             Johnson        Billy          Phys Ed        102000         2014           
13             Van Gogh       Vincent        Art            240000         2015           
14             Van Gogh       Vincent        CS             245000         2015           
15             Van Gogh       Jim Bob        Phys Ed        230000         2010           

>>> No WHERE condition found. Selecting all records.

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_3 and fields: lname fname dep salary year 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: lname -> 0
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: fname -> 1
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: dep -> 2
Insert Function Fired! Inserting: dep: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: dep

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: salary -> 3
Insert Function Fired! Inserting: salary: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: salary

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: year -> 4
Insert Function Fired! Inserting: year: 0
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: year

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: lname
Index 1 initialized for field: fname
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_3.tbl
Opening file for writing (overwrite mode): _selected_table_3.tbl
File opened for writing: _selected_table_3.tbl
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [Joe] [CS] [100000] [2018] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0] Next pointer is nullptr
Inserted into _indices[0]: (Blow, 0)Field name: fname
Field index for fname: 1
Inserting field value: Joe for field: fname at index: 1MMap::insert called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0] Next pointer is nullptr
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3MMap::insert called with key: 100000, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 100000: [0] Next pointer is nullptr
Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2018: [0] Next pointer is nullptr
Inserted into _indices[4]: (2018, 0)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [JoAnn] [Physics] [200000] [2016] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 1
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: fname
Field index for fname: 1
Inserting field value: JoAnn for field: fname at index: 1MMap::insert called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1] Next pointer is nullptr
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1] Next pointer is nullptr
Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3MMap::insert called with key: 200000, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 200000: [1] Next pointer is nullptr
Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4MMap::insert called with key: 2016, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2016: [1] Next pointer is nullptr
Inserted into _indices[4]: (2016, 1)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jack] [HR] [150000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2] Next pointer is nullptr
Inserted into _indices[0]: (Johnson, 2)Field name: fname
Field index for fname: 1
Inserting field value: Jack for field: fname at index: 1MMap::insert called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3MMap::insert called with key: 150000, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 150000: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2014: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2014, 2)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jimmy] [Chemistry] [140000] [2018] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 3
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 3)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [3] Next pointer is nullptr
Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [3] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3MMap::insert called with key: 140000, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 140000: [3] Next pointer is nullptr
Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 3
Key already exists, appending value to key: 2018
Inserted into _indices[4]: (2018, 3)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yao Jimmy Math 145000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Jimmy] [Math] [145000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yao, 4)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 4
Key already exists, appending value to key: Jimmy
Inserted into _indices[1]: (Jimmy, 4)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Math, 4)Field name: salary
Field index for salary: 3
Inserting field value: 145000 for field: salary at index: 3MMap::insert called with key: 145000, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 145000: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (145000, 4)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 4
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 4)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yao Flo CS 147000 2012
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Flo] [CS] [147000] [2012] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 5
Key already exists, appending value to key: Yao
Inserted into _indices[0]: (Yao, 5)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Flo, 5)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 5
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 5)Field name: salary
Field index for salary: 3
Inserting field value: 147000 for field: salary at index: 3MMap::insert called with key: 147000, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 147000: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (147000, 5)Field name: year
Field index for year: 4
Inserting field value: 2012 for field: year at index: 4MMap::insert called with key: 2012, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2012: [5] Next pointer is nullptr
Inserted into _indices[4]: (2012, 5)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yang Bo CS 160000 2013
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yang] [Bo] [CS] [160000] [2013] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yang for field: lname at index: 0MMap::insert called with key: Yang, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yang, 6)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [6] Next pointer is nullptr
Inserted into _indices[1]: (Bo, 6)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 6
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 6)Field name: salary
Field index for salary: 3
Inserting field value: 160000 for field: salary at index: 3MMap::insert called with key: 160000, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 160000: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (160000, 6)Field name: year
Field index for year: 4
Inserting field value: 2013 for field: year at index: 4MMap::insert called with key: 2013, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2013: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2013, 6)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Flo Math 165000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Flo] [Math] [165000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [7] Next pointer is nullptr
Inserted into _indices[0]: (Jackson, 7)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 7
Key already exists, appending value to key: Flo
Inserted into _indices[1]: (Flo, 7)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 7
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 7)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 165000: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (165000, 7)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2017: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2017, 7)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Bo Chemistry 130000 2011
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Bo] [Chemistry] [130000] [2011] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 8
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 8)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 8
Key already exists, appending value to key: Bo
Inserted into _indices[1]: (Bo, 8)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 8
Key already exists, appending value to key: Chemistry
Inserted into _indices[2]: (Chemistry, 8)Field name: salary
Field index for salary: 3
Inserting field value: 130000 for field: salary at index: 3MMap::insert called with key: 130000, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 130000: [8] Next pointer is nullptr
Inserted into _indices[3]: (130000, 8)Field name: year
Field index for year: 4
Inserting field value: 2011 for field: year at index: 4MMap::insert called with key: 2011, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2011: [8] Next pointer is nullptr
Inserted into _indices[4]: (2011, 8)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Billy Math 170000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Billy] [Math] [170000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 9
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 9)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy: [9]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Billy, 9)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 9
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 9)Field name: salary
Field index for salary: 3
Inserting field value: 170000 for field: salary at index: 3MMap::insert called with key: 170000, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 170000: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (170000, 9)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 9
Key already exists, appending value to key: 2017
Inserted into _indices[4]: (2017, 9)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Mary Ann Math 165000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Mary Ann] [Math] [165000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 10

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 10
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 10)Field name: fname
Field index for fname: 1
Inserting field value: Mary Ann for field: fname at index: 1MMap::insert called with key: Mary Ann, value: 10
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Mary Ann: [10]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Mary Ann, 10)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 10
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 10)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 10
Key already exists, appending value to key: 165000
Inserted into _indices[3]: (165000, 10)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 10
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 10)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Bob Physics 142000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy Bob] [Physics] [142000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 11

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 11
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 11)Field name: fname
Field index for fname: 1
Inserting field value: Billy Bob for field: fname at index: 1MMap::insert called with key: Billy Bob, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy Bob: [11] Next pointer is nullptr
Inserted into _indices[1]: (Billy Bob, 11)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 11
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 11)Field name: salary
Field index for salary: 3
Inserting field value: 142000 for field: salary at index: 3MMap::insert called with key: 142000, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 142000: [11] Next pointer is nullptr
Inserted into _indices[3]: (142000, 11)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 11
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 11)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Phys Ed 102000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy] [Phys Ed] [102000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 12

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 12
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 12)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 12
Key already exists, appending value to key: Billy
Inserted into _indices[1]: (Billy, 12)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Phys Ed: [12]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Phys Ed, 12)Field name: salary
Field index for salary: 3
Inserting field value: 102000 for field: salary at index: 3MMap::insert called with key: 102000, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 102000: [12]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (102000, 12)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 12
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 12)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent Art 240000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [Art] [240000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 13

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Van Gogh: [13] Next pointer is nullptr
Inserted into _indices[0]: (Van Gogh, 13)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Vincent: [13]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Vincent, 13)Field name: dep
Field index for dep: 2
Inserting field value: Art for field: dep at index: 2MMap::insert called with key: Art, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Art, 13)Field name: salary
Field index for salary: 3
Inserting field value: 240000 for field: salary at index: 3MMap::insert called with key: 240000, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 240000: [13]
BPlusTree default constructor called!


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
Inserted into _indices[3]: (240000, 13)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2015: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2015, 13)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent CS 245000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [CS] [245000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 14

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 14
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 14)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 14
Key already exists, appending value to key: Vincent
Inserted into _indices[1]: (Vincent, 14)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 14
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 14)Field name: salary
Field index for salary: 3
Inserting field value: 245000 for field: salary at index: 3MMap::insert called with key: 245000, value: 14
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 245000: [14]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (245000, 14)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 14
Key already exists, appending value to key: 2015
Inserted into _indices[4]: (2015, 14)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Jim Bob Phys Ed 230000 2010
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Jim Bob] [Phys Ed] [230000] [2010] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 15

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 15
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 15)Field name: fname
Field index for fname: 1
Inserting field value: Jim Bob for field: fname at index: 1MMap::insert called with key: Jim Bob, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [15]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jim Bob, 15)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 15
Key already exists, appending value to key: Phys Ed
Inserted into _indices[2]: (Phys Ed, 15)Field name: salary
Field index for salary: 3
Inserting field value: 230000 for field: salary at index: 3MMap::insert called with key: 230000, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 230000: [15] Next pointer is nullptr
Inserted into _indices[3]: (230000, 15)Field name: year
Field index for year: 4
Inserting field value: 2010 for field: year at index: 4MMap::insert called with key: 2010, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2010: [15]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2010, 15)Vector_to_table :: record numbers: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
Vector_to_table :: table name: _selected_table_3
-------------------Table::vector_to_table done!----------------------------

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr

=====Command Function Fired!=====
 select * from student
set_string Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!

BPlusTree default constructor called!

get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7 Next pointer is nullptr
Insert Function Fired! Inserting: *: 8 Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: student: 11
BPlusTree default constructor called!

 Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: [] Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [student]
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
SQL::command()| Parse tree contents:     ⎴
    table_name: [student]
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

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
Finding key: student

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 10
_last_record: 9
------------------------------------------------------------------------------------------
Record#        fname          lname          major          age            company        
------------------------------------------------------------------------------------------
0              Flo            Yao            CS             20             Google         
1              Bo             Yang           CS             28             Microsoft      
2              Sammuel L.     Jackson        CS             40             Uber           
3              Flo            Jackson        Math           21             Google         
4              Greg           Pearson        Physics        20             Amazon         
5              Jim Bob        Smith          Math           23             Verizon        
6              Calvin         Woo            Physics        22             Uber           
7              Anna Grace     Del Rio        CS             22             USAF           
8              Teresa Mae     Gowers         Chemistry      22             Verizon        
9              Alex           Smith          Gender Studies 53             Amazon         

>>> No WHERE condition found. Selecting all records.

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 5 6 7 8 9 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 5 6 7 8 9 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_4 and fields: fname lname major age company 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: major

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0 Next pointer is nullptr
Initializing index for field: age

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: company -> 4
Insert Function Fired! Inserting: company: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: company

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
Index 4 initialized for field: company
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_4.tbl
Opening file for writing (overwrite mode): _selected_table_4.tbl
File opened for writing: _selected_table_4.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao CS 20 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Yao] [CS] [20] [Google] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0] Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0] Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0] Next pointer is nullptr
Inserted into _indices[3]: (20, 0)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Google: [0] Next pointer is nullptr
Inserted into _indices[4]: (Google, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28 Microsoft
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Bo] [Yang] [CS] [28] [Microsoft] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [1] Next pointer is nullptr
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1] Next pointer is nullptr
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1] Next pointer is nullptr
Inserted into _indices[3]: (28, 1)Field name: company
Field index for company: 4
Inserting field value: Microsoft for field: company at index: 4MMap::insert called with key: Microsoft, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Microsoft: [1] Next pointer is nullptr
Inserted into _indices[4]: (Microsoft, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Sammuel L.] [Jackson] [CS] [40] [Uber] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0MMap::insert called with key: Sammuel L., value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Sammuel L.: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Sammuel L., 2)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jackson, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 2
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3MMap::insert called with key: 40, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 40: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (40, 2)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Uber: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Uber, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Jackson Math 21 Google
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Flo] [Jackson] [Math] [21] [Google] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 3
Key already exists, appending value to key: Flo
Inserted into _indices[0]: (Flo, 3)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 3
Key already exists, appending value to key: Jackson
Inserted into _indices[1]: (Jackson, 3)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [3] Next pointer is nullptr
Inserted into _indices[2]: (Math, 3)Field name: age
Field index for age: 3
Inserting field value: 21 for field: age at index: 3MMap::insert called with key: 21, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 21: [3] Next pointer is nullptr
Inserted into _indices[3]: (21, 3)Field name: company
Field index for company: 4
Inserting field value: Google for field: company at index: 4MMap::insert called with key: Google, value: 3
Key already exists, appending value to key: Google
Inserted into _indices[4]: (Google, 3)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Greg Pearson Physics 20 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Greg] [Pearson] [Physics] [20] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Greg for field: fname at index: 0MMap::insert called with key: Greg, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Greg: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Greg, 4)Field name: lname
Field index for lname: 1
Inserting field value: Pearson for field: lname at index: 1MMap::insert called with key: Pearson, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Pearson: [4] Next pointer is nullptr
Inserted into _indices[1]: (Pearson, 4)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Physics, 4)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 4
Key already exists, appending value to key: 20
Inserted into _indices[3]: (20, 4)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Amazon: [4] Next pointer is nullptr
Inserted into _indices[4]: (Amazon, 4)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jim Bob Smith Math 23 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jim Bob] [Smith] [Math] [23] [Verizon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Jim Bob for field: fname at index: 0MMap::insert called with key: Jim Bob, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Jim Bob, 5)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Smith: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Smith, 5)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 5
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 5)Field name: age
Field index for age: 3
Inserting field value: 23 for field: age at index: 3MMap::insert called with key: 23, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 23: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (23, 5)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Verizon: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (Verizon, 5)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Calvin Woo Physics 22 Uber
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Calvin] [Woo] [Physics] [22] [Uber] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Calvin for field: fname at index: 0MMap::insert called with key: Calvin, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Calvin: [6] Next pointer is nullptr
Inserted into _indices[0]: (Calvin, 6)Field name: lname
Field index for lname: 1
Inserting field value: Woo for field: lname at index: 1MMap::insert called with key: Woo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Woo: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Woo, 6)Field name: major
Field index for major: 2
Inserting field value: Physics for field: major at index: 2MMap::insert called with key: Physics, value: 6
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 6)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 22: [6]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (22, 6)Field name: company
Field index for company: 4
Inserting field value: Uber for field: company at index: 4MMap::insert called with key: Uber, value: 6
Key already exists, appending value to key: Uber
Inserted into _indices[4]: (Uber, 6)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Anna Grace Del Rio CS 22 USAF
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Anna Grace] [Del Rio] [CS] [22] [USAF] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Anna Grace for field: fname at index: 0MMap::insert called with key: Anna Grace, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Anna Grace: [7]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Anna Grace, 7)Field name: lname
Field index for lname: 1
Inserting field value: Del Rio for field: lname at index: 1MMap::insert called with key: Del Rio, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Del Rio: [7] Next pointer is nullptr
Inserted into _indices[1]: (Del Rio, 7)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 7
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 7)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 7
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 7)Field name: company
Field index for company: 4
Inserting field value: USAF for field: company at index: 4MMap::insert called with key: USAF, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: USAF: [7] Next pointer is nullptr
Inserted into _indices[4]: (USAF, 7)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Teresa Mae Gowers Chemistry 22 Verizon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Teresa Mae] [Gowers] [Chemistry] [22] [Verizon] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Teresa Mae for field: fname at index: 0MMap::insert called with key: Teresa Mae, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Teresa Mae: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Teresa Mae, 8)Field name: lname
Field index for lname: 1
Inserting field value: Gowers for field: lname at index: 1MMap::insert called with key: Gowers, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gowers: [8]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Gowers, 8)Field name: major
Field index for major: 2
Inserting field value: Chemistry for field: major at index: 2MMap::insert called with key: Chemistry, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [8] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 8)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 8
Key already exists, appending value to key: 22
Inserted into _indices[3]: (22, 8)Field name: company
Field index for company: 4
Inserting field value: Verizon for field: company at index: 4MMap::insert called with key: Verizon, value: 8
Key already exists, appending value to key: Verizon
Inserted into _indices[4]: (Verizon, 8)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
-------Table::field_col_no fired!-------
Field name: company
Field map size: 7
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
    ^
    ⎴
    fname: 0
    company: 4
    ⎵
company: 0
⎵
    ^
    ⎴
    age : 3
    ⎵


Finding key: company

Iterator Constructor Fired!

Found Pair: company -> 4
Field found: company at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Alex Smith Gender Studies 53 Amazon
_field_names fname lname major age company
_field_names size: 5
_field_map.size() 5
Fields to insert: [Alex] [Smith] [Gender Studies] [53] [Amazon] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Alex for field: fname at index: 0MMap::insert called with key: Alex, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Alex: [9] Next pointer is nullptr
Inserted into _indices[0]: (Alex, 9)Field name: lname
Field index for lname: 1
Inserting field value: Smith for field: lname at index: 1MMap::insert called with key: Smith, value: 9
Key already exists, appending value to key: Smith
Inserted into _indices[1]: (Smith, 9)Field name: major
Field index for major: 2
Inserting field value: Gender Studies for field: major at index: 2MMap::insert called with key: Gender Studies, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Gender Studies: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Gender Studies, 9)Field name: age
Field index for age: 3
Inserting field value: 53 for field: age at index: 3MMap::insert called with key: 53, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 53: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (53, 9)Field name: company
Field index for company: 4
Inserting field value: Amazon for field: company at index: 4MMap::insert called with key: Amazon, value: 9
Key already exists, appending value to key: Amazon
Inserted into _indices[4]: (Amazon, 9)Vector_to_table :: record numbers: 0 1 2 3 4 5 6 7 8 9 
Vector_to_table :: table name: _selected_table_4
-------------------Table::vector_to_table done!----------------------------

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

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

BPlusTree default constructor called!

get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7 Next pointer is nullptr
Insert Function Fired! Inserting: *: 8 Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11 Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: [] Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: [] Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
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

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
Finding key: employee

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl

Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 16
_last_record: 15
------------------------------------------------------------------------------------------
Record#        lname          fname          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           
4              Yao            Jimmy          Math           145000         2014           
5              Yao            Flo            CS             147000         2012           
6              Yang           Bo             CS             160000         2013           
7              Jackson        Flo            Math           165000         2017           
8              Jackson        Bo             Chemistry      130000         2011           
9              Jackson        Billy          Math           170000         2017           
10             Johnson        Mary Ann       Math           165000         2014           
11             Johnson        Billy Bob      Physics        142000         2014           
12             Johnson        Billy          Phys Ed        102000         2014           
13             Van Gogh       Vincent        Art            240000         2015           
14             Van Gogh       Vincent        CS             245000         2015           
15             Van Gogh       Jim Bob        Phys Ed        230000         2010           

>>> No WHERE condition found. Selecting all records.

BPlusTree default constructor called!


BPlusTree default constructor called!

Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_5 and fields: lname fname dep salary year 

BPlusTree default constructor called!


BPlusTree default constructor called!


-------Table ctor 3 fired!-------

 Adding to _field_map: lname -> 0
Insert Function Fired! Inserting: lname: 0 Next pointer is nullptr
Initializing index for field: lname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: fname -> 1
Insert Function Fired! Inserting: fname: 0 Next pointer is nullptr
Initializing index for field: fname

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: dep -> 2
Insert Function Fired! Inserting: dep: 0
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: dep

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: salary -> 3
Insert Function Fired! Inserting: salary: 0
BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: salary

BPlusTree default constructor called!

MMap constructor called!
 Adding to _field_map: year -> 4
Insert Function Fired! Inserting: year: 0
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Initializing index for field: year

BPlusTree default constructor called!

MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: lname
Index 1 initialized for field: fname
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_5.tbl
Opening file for writing (overwrite mode): _selected_table_5.tbl
File opened for writing: _selected_table_5.tbl
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [Joe] [CS] [100000] [2018] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0] Next pointer is nullptr
Inserted into _indices[0]: (Blow, 0)Field name: fname
Field index for fname: 1
Inserting field value: Joe for field: fname at index: 1MMap::insert called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0] Next pointer is nullptr
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0] Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3MMap::insert called with key: 100000, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 100000: [0] Next pointer is nullptr
Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2018: [0] Next pointer is nullptr
Inserted into _indices[4]: (2018, 0)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Blow] [JoAnn] [Physics] [200000] [2016] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Blow for field: lname at index: 0MMap::insert called with key: Blow, value: 1
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: fname
Field index for fname: 1
Inserting field value: JoAnn for field: fname at index: 1MMap::insert called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1] Next pointer is nullptr
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1] Next pointer is nullptr
Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3MMap::insert called with key: 200000, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 200000: [1] Next pointer is nullptr
Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4MMap::insert called with key: 2016, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2016: [1] Next pointer is nullptr
Inserted into _indices[4]: (2016, 1)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jack] [HR] [150000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2] Next pointer is nullptr
Inserted into _indices[0]: (Johnson, 2)Field name: fname
Field index for fname: 1
Inserting field value: Jack for field: fname at index: 1MMap::insert called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3MMap::insert called with key: 150000, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 150000: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2014: [2]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2014, 2)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Jimmy] [Chemistry] [140000] [2018] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 3
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 3)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [3] Next pointer is nullptr
Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [3] Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3MMap::insert called with key: 140000, value: 3
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 140000: [3] Next pointer is nullptr
Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4MMap::insert called with key: 2018, value: 3
Key already exists, appending value to key: 2018
Inserted into _indices[4]: (2018, 3)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yao Jimmy Math 145000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Jimmy] [Math] [145000] [2014] 
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [4]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yao, 4)Field name: fname
Field index for fname: 1
Inserting field value: Jimmy for field: fname at index: 1MMap::insert called with key: Jimmy, value: 4
Key already exists, appending value to key: Jimmy
Inserted into _indices[1]: (Jimmy, 4)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Math, 4)Field name: salary
Field index for salary: 3
Inserting field value: 145000 for field: salary at index: 3MMap::insert called with key: 145000, value: 4
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 145000: [4]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (145000, 4)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 4
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 4)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yao Flo CS 147000 2012
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yao] [Flo] [CS] [147000] [2012] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 5

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yao for field: lname at index: 0MMap::insert called with key: Yao, value: 5
Key already exists, appending value to key: Yao
Inserted into _indices[0]: (Yao, 5)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [5]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Flo, 5)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 5
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 5)Field name: salary
Field index for salary: 3
Inserting field value: 147000 for field: salary at index: 3MMap::insert called with key: 147000, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 147000: [5]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (147000, 5)Field name: year
Field index for year: 4
Inserting field value: 2012 for field: year at index: 4MMap::insert called with key: 2012, value: 5
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2012: [5] Next pointer is nullptr
Inserted into _indices[4]: (2012, 5)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Yang Bo CS 160000 2013
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Yang] [Bo] [CS] [160000] [2013] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 6

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Yang for field: lname at index: 0MMap::insert called with key: Yang, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[0]: (Yang, 6)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [6] Next pointer is nullptr
Inserted into _indices[1]: (Bo, 6)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 6
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 6)Field name: salary
Field index for salary: 3
Inserting field value: 160000 for field: salary at index: 3MMap::insert called with key: 160000, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 160000: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (160000, 6)Field name: year
Field index for year: 4
Inserting field value: 2013 for field: year at index: 4MMap::insert called with key: 2013, value: 6
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2013: [6]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2013, 6)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Flo Math 165000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Flo] [Math] [165000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 7

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [7] Next pointer is nullptr
Inserted into _indices[0]: (Jackson, 7)Field name: fname
Field index for fname: 1
Inserting field value: Flo for field: fname at index: 1MMap::insert called with key: Flo, value: 7
Key already exists, appending value to key: Flo
Inserted into _indices[1]: (Flo, 7)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 7
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 7)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 165000: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (165000, 7)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 7
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2017: [7]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2017, 7)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Bo Chemistry 130000 2011
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Bo] [Chemistry] [130000] [2011] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 8

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 8
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 8)Field name: fname
Field index for fname: 1
Inserting field value: Bo for field: fname at index: 1MMap::insert called with key: Bo, value: 8
Key already exists, appending value to key: Bo
Inserted into _indices[1]: (Bo, 8)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 8
Key already exists, appending value to key: Chemistry
Inserted into _indices[2]: (Chemistry, 8)Field name: salary
Field index for salary: 3
Inserting field value: 130000 for field: salary at index: 3MMap::insert called with key: 130000, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 130000: [8] Next pointer is nullptr
Inserted into _indices[3]: (130000, 8)Field name: year
Field index for year: 4
Inserting field value: 2011 for field: year at index: 4MMap::insert called with key: 2011, value: 8
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2011: [8] Next pointer is nullptr
Inserted into _indices[4]: (2011, 8)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Jackson Billy Math 170000 2017
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Jackson] [Billy] [Math] [170000] [2017] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 9

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Jackson for field: lname at index: 0MMap::insert called with key: Jackson, value: 9
Key already exists, appending value to key: Jackson
Inserted into _indices[0]: (Jackson, 9)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy: [9]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Billy, 9)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 9
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 9)Field name: salary
Field index for salary: 3
Inserting field value: 170000 for field: salary at index: 3MMap::insert called with key: 170000, value: 9
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 170000: [9]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (170000, 9)Field name: year
Field index for year: 4
Inserting field value: 2017 for field: year at index: 4MMap::insert called with key: 2017, value: 9
Key already exists, appending value to key: 2017
Inserted into _indices[4]: (2017, 9)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Mary Ann Math 165000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Mary Ann] [Math] [165000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 10

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 10
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 10)Field name: fname
Field index for fname: 1
Inserting field value: Mary Ann for field: fname at index: 1MMap::insert called with key: Mary Ann, value: 10
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Mary Ann: [10]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Mary Ann, 10)Field name: dep
Field index for dep: 2
Inserting field value: Math for field: dep at index: 2MMap::insert called with key: Math, value: 10
Key already exists, appending value to key: Math
Inserted into _indices[2]: (Math, 10)Field name: salary
Field index for salary: 3
Inserting field value: 165000 for field: salary at index: 3MMap::insert called with key: 165000, value: 10
Key already exists, appending value to key: 165000
Inserted into _indices[3]: (165000, 10)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 10
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 10)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Bob Physics 142000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy Bob] [Physics] [142000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 11

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 11
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 11)Field name: fname
Field index for fname: 1
Inserting field value: Billy Bob for field: fname at index: 1MMap::insert called with key: Billy Bob, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Billy Bob: [11] Next pointer is nullptr
Inserted into _indices[1]: (Billy Bob, 11)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 11
Key already exists, appending value to key: Physics
Inserted into _indices[2]: (Physics, 11)Field name: salary
Field index for salary: 3
Inserting field value: 142000 for field: salary at index: 3MMap::insert called with key: 142000, value: 11
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 142000: [11] Next pointer is nullptr
Inserted into _indices[3]: (142000, 11)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 11
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 11)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Billy Phys Ed 102000 2014
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Johnson] [Billy] [Phys Ed] [102000] [2014] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 12

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Johnson for field: lname at index: 0MMap::insert called with key: Johnson, value: 12
Key already exists, appending value to key: Johnson
Inserted into _indices[0]: (Johnson, 12)Field name: fname
Field index for fname: 1
Inserting field value: Billy for field: fname at index: 1MMap::insert called with key: Billy, value: 12
Key already exists, appending value to key: Billy
Inserted into _indices[1]: (Billy, 12)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Phys Ed: [12]
BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Phys Ed, 12)Field name: salary
Field index for salary: 3
Inserting field value: 102000 for field: salary at index: 3MMap::insert called with key: 102000, value: 12
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 102000: [12]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (102000, 12)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4MMap::insert called with key: 2014, value: 12
Key already exists, appending value to key: 2014
Inserted into _indices[4]: (2014, 12)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent Art 240000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [Art] [240000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 13

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Van Gogh: [13] Next pointer is nullptr
Inserted into _indices[0]: (Van Gogh, 13)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Vincent: [13]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Vincent, 13)Field name: dep
Field index for dep: 2
Inserting field value: Art for field: dep at index: 2MMap::insert called with key: Art, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[2]: (Art, 13)Field name: salary
Field index for salary: 3
Inserting field value: 240000 for field: salary at index: 3MMap::insert called with key: 240000, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 240000: [13]
BPlusTree default constructor called!


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
Inserted into _indices[3]: (240000, 13)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 13
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2015: [13]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2015, 13)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Vincent CS 245000 2015
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Vincent] [CS] [245000] [2015] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 14

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 14
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 14)Field name: fname
Field index for fname: 1
Inserting field value: Vincent for field: fname at index: 1MMap::insert called with key: Vincent, value: 14
Key already exists, appending value to key: Vincent
Inserted into _indices[1]: (Vincent, 14)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 14
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 14)Field name: salary
Field index for salary: 3
Inserting field value: 245000 for field: salary at index: 3MMap::insert called with key: 245000, value: 14
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 245000: [14]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[3]: (245000, 14)Field name: year
Field index for year: 4
Inserting field value: 2015 for field: year at index: 4MMap::insert called with key: 2015, value: 14
Key already exists, appending value to key: 2015
Inserted into _indices[4]: (2015, 14)-------Table::field_col_no fired!-------
Field name: lname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: lname

Iterator Constructor Fired!

Found Pair: lname -> 0
Field found: lname at index 0
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: fname

Iterator Constructor Fired!

Found Pair: fname -> 1
Field found: fname at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: dep

Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: salary

Iterator Constructor Fired!

Found Pair: salary -> 3
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size: 8
        ⎴
        year: 4
        salary: 3
        ⎵
    ⎴
    salary: 3
    ⎵
        ^
        ⎴
        lname: 0
        ⎵
^
⎴
lname: 0
⎵
        ^
        ⎴
        fname: 1
        ⎵
    ⎴
    fname: 1
    ⎵
        ^
        ⎴
        dep : 2
        ⎵


Finding key: year

Iterator Constructor Fired!

Found Pair: year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Van Gogh Jim Bob Phys Ed 230000 2010
_field_names lname fname dep salary year
_field_names size: 5
_field_map.size() 5
Fields to insert: [Van Gogh] [Jim Bob] [Phys Ed] [230000] [2010] 

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 15

Updating _indices with field values:
Field name: lname
Field index for lname: 0
Inserting field value: Van Gogh for field: lname at index: 0MMap::insert called with key: Van Gogh, value: 15
Key already exists, appending value to key: Van Gogh
Inserted into _indices[0]: (Van Gogh, 15)Field name: fname
Field index for fname: 1
Inserting field value: Jim Bob for field: fname at index: 1MMap::insert called with key: Jim Bob, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jim Bob: [15]
BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[1]: (Jim Bob, 15)Field name: dep
Field index for dep: 2
Inserting field value: Phys Ed for field: dep at index: 2MMap::insert called with key: Phys Ed, value: 15
Key already exists, appending value to key: Phys Ed
Inserted into _indices[2]: (Phys Ed, 15)Field name: salary
Field index for salary: 3
Inserting field value: 230000 for field: salary at index: 3MMap::insert called with key: 230000, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 230000: [15] Next pointer is nullptr
Inserted into _indices[3]: (230000, 15)Field name: year
Field index for year: 4
Inserting field value: 2010 for field: year at index: 4MMap::insert called with key: 2010, value: 15
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 2010: [15]
BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
Inserted into _indices[4]: (2010, 15)Vector_to_table :: record numbers: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
Vector_to_table :: table name: _selected_table_5
-------------------Table::vector_to_table done!----------------------------

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr

BPlusTree default constructor called!


BPlusTree default constructor called!


BPlusTree default constructor called!

 Next pointer is nullptr
 Next pointer is nullptr
[       OK ] SQLTest.BatchInsertAndSelect (152 ms)
[----------] 1 test from SQLTest (152 ms total)

[----------] 1 test from TEST_STUB
[ RUN      ] TEST_STUB.TestStub
[       OK ] TEST_STUB.TestStub (0 ms)
[----------] 1 test from TEST_STUB (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 2 test suites ran. (152 ms total)
[  PASSED  ] 2 tests.
jwcomputer@Mac Final_Dec_20 % 