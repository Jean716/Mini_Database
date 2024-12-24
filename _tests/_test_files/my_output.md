jwcomputer@Mac Final_Dec_20 % build/bin/testB
BPlusTree default constructor called!


----------running testB.cpp---------


[==========] Running 3 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from BasicTest
[ RUN      ] BasicTest.CreateAndInsert
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
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.
-[22]-creat table

=====Command Function Fired!=====
 make table employee fields last, first, dep
set_string Function Fired!
set string : Input string: make table employee fields last, first, dep
Tokenize Function Fired!
Input string: make table employee fields last, first, dep
STokenizer::set_string called with input: make table employee fields last, first, dep
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: employee]->[ALFA: fields]->[ALFA: last]->[Comma: ,]->[ALFA: first]->[Comma: ,]->[ALFA: dep]->
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
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
get_column: table is a keyword.
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: fields is a keyword.
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
Insert Function Fired! Inserting: command: []Next pointer is nullptr
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
Insert Function Fired! Inserting: col: []BPlusTree default constructor called!
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
    col : [last, first, dep]
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
    col : [last, first, dep]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
Initializing index for field: last
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: first -> 1
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
Initializing index for field: first
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: dep -> 2
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: dep
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 3
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------
Record#        last           first          dep            
------------------------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Next pointer is nullptr
>>> Table created successfully: employee
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

=====Command Function Fired!=====
 make table student fields fname, lname, major, age
set_string Function Fired!
set string : Input string: make table student fields fname, lname, major, age
Tokenize Function Fired!
Input string: make table student fields fname, lname, major, age
STokenizer::set_string called with input: make table student fields fname, lname, major, age
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: student]->[ALFA: fields]->[ALFA: fname]->[Comma: ,]->[ALFA: lname]->[Comma: ,]->[ALFA: major]->[Comma: ,]->[ALFA: age]->
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
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
get_column: table is a keyword.
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: fields is a keyword.
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
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
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
Next pointer is nullptr
>>> Table created successfully: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
-[22]-insert into employee 

> 00 insert into <employee> values Blow, Joe, CS

=====Command Function Fired!=====
 insert into employee values Blow, Joe, CS
set_string Function Fired!
set string : Input string: insert into employee values Blow, Joe, CS
Tokenize Function Fired!
Input string: insert into employee values Blow, Joe, CS
STokenizer::set_string called with input: insert into employee values Blow, Joe, CS
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Blow]->[Comma: ,]->[ALFA: Joe]->[Comma: ,]->[ALFA: CS]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
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
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Blow, Joe, CS]
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
    values: [Blow, Joe, CS]
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
>>> Inserting into table: employee values: Blow Joe CS 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS
_field_names last first dep
_field_names size: 3
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1MMap::insert called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)>>> Insert completed for table: employee
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> 01 nsert into <employee> values Johnson, "Jimmy", Chemistry

=====Command Function Fired!=====
 insert into employee values Johnson, "Jimmy", Chemistry
set_string Function Fired!
set string : Input string: insert into employee values Johnson, "Jimmy", Chemistry
Tokenize Function Fired!
Input string: insert into employee values Johnson, "Jimmy", Chemistry
STokenizer::set_string called with input: insert into employee values Johnson, "Jimmy", Chemistry
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Johnson]->[Comma: ,]->[ALFA: Jimmy]->[Comma: ,]->[ALFA: Chemistry]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
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
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Johnson, Jimmy, Chemistry]
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
    values: [Johnson, Jimmy, Chemistry]
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
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry
_field_names last first dep
_field_names size: 3
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [1]Next pointer is nullptr
Inserted into _indices[0]: (Johnson, 1)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1MMap::insert called with key: Jimmy, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jimmy: [1]Next pointer is nullptr
Inserted into _indices[1]: (Jimmy, 1)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2MMap::insert called with key: Chemistry, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Chemistry: [1]Next pointer is nullptr
Inserted into _indices[2]: (Chemistry, 1)>>> Insert completed for table: employee
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> 02 insert into <employee> values Yang, Bo, CS

=====Command Function Fired!=====
 insert into employee values Yang, Bo, CS
set_string Function Fired!
set string : Input string: insert into employee values Yang, Bo, CS
Tokenize Function Fired!
Input string: insert into employee values Yang, Bo, CS
STokenizer::set_string called with input: insert into employee values Yang, Bo, CS
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: employee]->[ALFA: values]->[ALFA: Yang]->[Comma: ,]->[ALFA: Bo]->[Comma: ,]->[ALFA: CS]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Yang: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Bo: 11Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Yang, Bo, CS]
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
    values: [Yang, Bo, CS]
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
>>> Inserting into table: employee values: Yang Bo CS 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Yang Bo CS
_field_names last first dep
_field_names size: 3
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Yang for field: last at index: 0MMap::insert called with key: Yang, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Inserted into _indices[0]: (Yang, 2)Field name: first
Field index for first: 1
Inserting field value: Bo for field: first at index: 1MMap::insert called with key: Bo, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Inserted into _indices[1]: (Bo, 2)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 2
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 2)>>> Insert completed for table: employee
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
-[22]-insert into student 

> 00 nsert into <student> values Flo, Yao, CS, 20

=====Command Function Fired!=====
 insert into student values Flo, Yao, CS, 20
set_string Function Fired!
set string : Input string: insert into student values Flo, Yao, CS, 20
Tokenize Function Fired!
Input string: insert into student values Flo, Yao, CS, 20
STokenizer::set_string called with input: insert into student values Flo, Yao, CS, 20
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Yao]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 20]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
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
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Yao, CS, 20]
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
    values: [Flo, Yao, CS, 20]
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
>>> Inserting into table: student values: Flo Yao CS 20 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Yao CS 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr
Inserted into _indices[3]: (20, 0)>>> Insert completed for table: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> 01 insert into <student> values "Flo", "Jackson", Math, 21

=====Command Function Fired!=====
 insert into student values "Flo", "Jackson", Math, 21
set_string Function Fired!
set string : Input string: insert into student values "Flo", "Jackson", Math, 21
Tokenize Function Fired!
Input string: insert into student values "Flo", "Jackson", Math, 21
STokenizer::set_string called with input: insert into student values "Flo", "Jackson", Math, 21
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Jackson]->[Comma: ,]->[ALFA: Math]->[Comma: ,]->[ALFA: 21]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
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
Insert Function Fired! Inserting: Jackson: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Math: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 21: 11Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Jackson, Math, 21]
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
    values: [Flo, Jackson, Math, 21]
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
>>> Inserting into table: student values: Flo Jackson Math 21 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Jackson Math 21
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 1
Key already exists, appending value to key: Flo
Inserted into _indices[0]: (Flo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1MMap::insert called with key: Jackson, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jackson: [1]Next pointer is nullptr
Inserted into _indices[1]: (Jackson, 1)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2MMap::insert called with key: Math, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Math: [1]Next pointer is nullptr
Inserted into _indices[2]: (Math, 1)Field name: age
Field index for age: 3
Inserting field value: 21 for field: age at index: 3MMap::insert called with key: 21, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 21: [1]Next pointer is nullptr
Inserted into _indices[3]: (21, 1)>>> Insert completed for table: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
-[22]-select  

> select * from employee

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
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: employee: 11Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
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


Iterator Constructor Fired!

Found Pair: employee -> Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------
Record#        last           first          dep            
------------------------------------------------------------
0              Blow           Joe            CS             
1              Blow           JoAnn          Physics        
2              Johnson        Jack           HR             

>>> No WHERE condition found. Selecting all records.
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_2 and fields: last first dep 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: last -> 0
Insert Function Fired! Inserting: last: 0Next pointer is nullptr
Initializing index for field: last
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: first -> 1
Insert Function Fired! Inserting: first: 0Next pointer is nullptr
Initializing index for field: first
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: dep -> 2
Insert Function Fired! Inserting: dep: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: dep
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 3
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_2.tbl
Opening file for writing (overwrite mode): _selected_table_2.tbl
File opened for writing: _selected_table_2.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: last

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: first

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: dep

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS
_field_names last first dep
_field_names size: 3
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0MMap::insert called with key: Blow, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Blow: [0]Next pointer is nullptr
Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1MMap::insert called with key: Joe, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Joe: [0]Next pointer is nullptr
Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: last

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: first

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: dep

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics
_field_names last first dep
_field_names size: 3
_field_map.size() 4

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
Key already exists, appending value to key: Blow
Inserted into _indices[0]: (Blow, 1)Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1MMap::insert called with key: JoAnn, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: JoAnn: [1]Next pointer is nullptr
Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2MMap::insert called with key: Physics, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Physics: [1]Next pointer is nullptr
Inserted into _indices[2]: (Physics, 1)-------Table::field_col_no fired!-------
Field name: last
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: last

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: last -> 0
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: first

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: first -> 1
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size: 4
    ⎴
    last: 0
    first: 1
    ⎵
^
⎴
first: 1
⎵
    ^
    ⎴
    dep : 2
    ⎵


Finding key: dep

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: dep -> 2
Field found: dep at index 2
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR
_field_names last first dep
_field_names size: 3
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0MMap::insert called with key: Johnson, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Johnson: [2]Next pointer is nullptr
Inserted into _indices[0]: (Johnson, 2)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1MMap::insert called with key: Jack, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Jack: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2MMap::insert called with key: HR, value: 2
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: HR: [2]BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Inserted into _indices[2]: (HR, 2)Vector_to_table :: record numbers: 0 1 2 
Vector_to_table :: table name: _selected_table_2
-------------------Table::vector_to_table done!----------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_2, records: 3
_last_record: 2
------------------------------------------------------------
Record#        last           first          dep            
------------------------------------------------------------
0              Blow           Joe            CS             
1              Blow           JoAnn          Physics        
2              Johnson        Jack           HR             

> select * from student

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
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
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


Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             

>>> No WHERE condition found. Selecting all records.
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_3 and fields: fname lname major age 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_3.tbl
Opening file for writing (overwrite mode): _selected_table_3.tbl
File opened for writing: _selected_table_3.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2MMap::insert called with key: Art, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Inserted into _indices[2]: (Art, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr
Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5

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
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr
Inserted into _indices[3]: (28, 1)Vector_to_table :: record numbers: 0 1 
Vector_to_table :: table name: _selected_table_3
-------------------Table::vector_to_table done!----------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_3, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
[       OK ] BasicTest.CreateAndInsert (42 ms)
[ RUN      ] BasicTest.ConditionalSelect
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
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.

> make table student fields fname, lname, major, age

=====Command Function Fired!=====
 make table student fields fname, lname, major, age
set_string Function Fired!
set string : Input string: make table student fields fname, lname, major, age
Tokenize Function Fired!
Input string: make table student fields fname, lname, major, age
STokenizer::set_string called with input: make table student fields fname, lname, major, age
Tokens: 
[ALFA: make]->[ALFA: table]->[ALFA: student]->[ALFA: fields]->[ALFA: fname]->[Comma: ,]->[ALFA: lname]->[Comma: ,]->[ALFA: major]->[Comma: ,]->[ALFA: age]->
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
Insert Function Fired! Inserting: make: 1Next pointer is nullptr
get_column: table is a keyword.
Insert Function Fired! Inserting: table: 2Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: fields is a keyword.
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
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
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
Next pointer is nullptr
>>> Table created successfully: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> insert into student values Flo, Yao, CS, 20

=====Command Function Fired!=====
 insert into student values Flo, Yao, CS, 20
set_string Function Fired!
set string : Input string: insert into student values Flo, Yao, CS, 20
Tokenize Function Fired!
Input string: insert into student values Flo, Yao, CS, 20
STokenizer::set_string called with input: insert into student values Flo, Yao, CS, 20
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Flo]->[Comma: ,]->[ALFA: Yao]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 20]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
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
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Flo, Yao, CS, 20]
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
    values: [Flo, Yao, CS, 20]
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
>>> Inserting into table: student values: Flo Yao CS 20 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Flo Yao CS 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr
Inserted into _indices[3]: (20, 0)>>> Insert completed for table: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> insert into student values "Anna Grace", "Del Rio", CS, 22

=====Command Function Fired!=====
 insert into student values "Anna Grace", "Del Rio", CS, 22
set_string Function Fired!
set string : Input string: insert into student values "Anna Grace", "Del Rio", CS, 22
Tokenize Function Fired!
Input string: insert into student values "Anna Grace", "Del Rio", CS, 22
STokenizer::set_string called with input: insert into student values "Anna Grace", "Del Rio", CS, 22
Tokens: 
[ALFA: insert]->[ALFA: into]->[ALFA: student]->[ALFA: values]->[ALFA: Anna Grace]->[Comma: ,]->[ALFA: Del Rio]->[Comma: ,]->[ALFA: CS]->[Comma: ,]->[ALFA: 22]->
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
Insert Function Fired! Inserting: insert: 4Next pointer is nullptr
get_column: into is a keyword.
Insert Function Fired! Inserting: into: 5Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
get_column: values is a keyword.
Insert Function Fired! Inserting: values: 6BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Anna Grace: 11Next pointer is nullptr
Insert Function Fired! Inserting: ,: 17BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: Del Rio: 11BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11Next pointer is nullptr
Insert Function Fired! Inserting: 22: 11Next pointer is nullptr
command is insert!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: table_name: []Next pointer is nullptr
command is insert!
command is insert!
Insert Function Fired! Inserting: values: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is insert!
command is insert!
command is insert!
Parse Tree Function Fired!
command: insert
    ⎴
    values: [Anna Grace, Del Rio, CS, 22]
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
    values: [Anna Grace, Del Rio, CS, 22]
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
>>> Inserting into table: student values: Anna Grace Del Rio CS 22 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl

-------Table::insert_into fired!-------
Fields to insert : Anna Grace Del Rio CS 22
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Anna Grace for field: fname at index: 0MMap::insert called with key: Anna Grace, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Anna Grace: [1]Next pointer is nullptr
Inserted into _indices[0]: (Anna Grace, 1)Field name: lname
Field index for lname: 1
Inserting field value: Del Rio for field: lname at index: 1MMap::insert called with key: Del Rio, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Del Rio: [1]Next pointer is nullptr
Inserted into _indices[1]: (Del Rio, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key already exists, appending value to key: CS
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 22 for field: age at index: 3MMap::insert called with key: 22, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 22: [1]Next pointer is nullptr
Inserted into _indices[3]: (22, 1)>>> Insert completed for table: student
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr

> select * from student where lname = "Del Rio"

=====Command Function Fired!=====
 select * from student where lname = "Del Rio"
set_string Function Fired!
set string : Input string: select * from student where lname = "Del Rio"
Tokenize Function Fired!
Input string: select * from student where lname = "Del Rio"
STokenizer::set_string called with input: select * from student where lname = "Del Rio"
Combining tokens after RELATIONAL_OPERATOR at index 6
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[ALFA: lname]->[RelationalOperator: =]->[String: Del Rio]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
BPlusTree default constructor called!
get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
get_column: where is a keyword.
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
Insert Function Fired! Inserting: =: 12Next pointer is nullptr
Insert Function Fired! Inserting: Del Rio: 11BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
command is select!
command is select!
Parse Tree Function Fired!
command: select
    ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [lname, =, Del Rio]
    command: [select]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
SQL::command()| Parse tree contents:     ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [lname, =, Del Rio]
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


Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             


Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: lname = Del Rio
Tokenize Function Fired!
Input string: lname = Del Rio 
STokenizer::set_string called with input: lname = Del Rio 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Del to combined string.
Adding token: Rio to combined string.
Pushing combined token: Del Rio
Tokens: 
[ALFA: lname]->[RelationalOperator: =]->[ALFA: Del Rio]->
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: lname]-> [RelationalOperator: =]-> [ALFA: Del Rio]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> lname
is string or number
Pushing token: lname to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> Del Rio
is string or number
Pushing token: Del Rio to output queue.
Postfix Expression: lname Del Rio = 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: Del Rio]-> [RelationalOperator: =]-> |||
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
Field index for lname: 1
Debug cond(): printing _indices: Del Rio -> 1
Yao -> 0
Processing '=': field_value = Del Rio

Iterator Constructor Fired!


Iterator Constructor Fired!

Final record numbers after cond evaluation:1 
-------Table::cond done!-------
Matching record numbers:
  1 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 1 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_5 and fields: fname lname major age 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_5.tbl
Opening file for writing (overwrite mode): _selected_table_5.tbl
File opened for writing: _selected_table_5.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Bo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yang, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [0]Next pointer is nullptr
Inserted into _indices[3]: (28, 0)Vector_to_table :: record numbers: 0 
Vector_to_table :: table name: _selected_table_5
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_5
Table name: _selected_table_5, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Bo             Yang           CS             28             
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_5, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
1                                                                          
expected: 1

> select * from student where age > 20

=====Command Function Fired!=====
 select * from student where age > 20
set_string Function Fired!
set string : Input string: select * from student where age > 20
Tokenize Function Fired!
Input string: select * from student where age > 20
STokenizer::set_string called with input: select * from student where age > 20
Combining tokens after RELATIONAL_OPERATOR at index 6
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[ALFA: age]->[RelationalOperator: >]->[Number: 20]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
BPlusTree default constructor called!
get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
get_column: where is a keyword.
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: age: 11Next pointer is nullptr
Insert Function Fired! Inserting: >: 12BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 20: 11Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
command is select!
command is select!
Parse Tree Function Fired!
command: select
    ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [age, >, 20]
    command: [select]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
SQL::command()| Parse tree contents:     ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [age, >, 20]
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


Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
1              Bo             Yang           CS             28             


Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: age > 20
Tokenize Function Fired!
Input string: age > 20 
STokenizer::set_string called with input: age > 20 
Combining tokens after RELATIONAL_OPERATOR at index 1
Tokens: 
[ALFA: age]->[RelationalOperator: >]->[Number: 20]->
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: age]-> [RelationalOperator: >]-> [Number: 20]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> age
is string or number
Pushing token: age to output queue.
Current Token:--------------> >
is operator
Pushing operator: > to stack.
Current Token:--------------> 20
is string or number
Pushing token: 20 to output queue.
Postfix Expression: age 20 > 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: age]-> [Number: 20]-> [RelationalOperator: >]-> |||
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
Field index for age: 3
Debug cond(): printing _indices: 20 -> 0
22 -> 1
Processing '>': field_value = 20

Iterator Constructor Fired!

Matching record: Key = 22, Record = 1
Final record numbers after cond evaluation:1 
-------Table::cond done!-------
Matching record numbers:
  1 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 1 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_6 and fields: fname lname major age 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_6.tbl
Opening file for writing (overwrite mode): _selected_table_6.tbl
File opened for writing: _selected_table_6.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0MMap::insert called with key: Bo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Bo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Bo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yang, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [0]Next pointer is nullptr
Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [0]Next pointer is nullptr
Inserted into _indices[3]: (28, 0)Vector_to_table :: record numbers: 0 
Vector_to_table :: table name: _selected_table_6
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_6
Table name: _selected_table_6, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Bo             Yang           CS             28             
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_6, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
1                                                                          
expected: 1

> select * from student where age < 30 and major = CS

=====Command Function Fired!=====
 select * from student where age < 30 and major = CS
set_string Function Fired!
set string : Input string: select * from student where age < 30 and major = CS
Tokenize Function Fired!
Input string: select * from student where age < 30 and major = CS
STokenizer::set_string called with input: select * from student where age < 30 and major = CS
Combining tokens after RELATIONAL_OPERATOR at index 6
Combining tokens after RELATIONAL_OPERATOR at index 10
Adding token: CS to combined string.
Pushing combined token: CS
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[ALFA: age]->[RelationalOperator: <]->[Number: 30]->[LogicalOperator: and]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
BPlusTree default constructor called!
get_column: select is a keyword.
Insert Function Fired! Inserting: select: 7Next pointer is nullptr
Insert Function Fired! Inserting: *: 8Next pointer is nullptr
get_column: from is a keyword.
Insert Function Fired! Inserting: from: 9BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: student: 11BPlusTree default constructor called!
Next pointer is nullptr
get_column: where is a keyword.
Insert Function Fired! Inserting: where: 10BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: age: 11Next pointer is nullptr
Insert Function Fired! Inserting: <: 12BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: 30: 11Next pointer is nullptr
Insert Function Fired! Inserting: and: 13BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Insert Function Fired! Inserting: major: 11Next pointer is nullptr
Insert Function Fired! Inserting: =: 12Next pointer is nullptr
Insert Function Fired! Inserting: CS: 11BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: command: []Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: fields: []Next pointer is nullptr
command is select!
command is select!
Insert Function Fired! Inserting: table_name: []BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: where: []BPlusTree default constructor called!
Next pointer is nullptr
command is select!
Insert Function Fired! Inserting: condition: []Next pointer is nullptr
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Parse Tree Function Fired!
command: select
    ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [age, <, 30, and, major, =, CS]
    command: [select]
    ⎵


Parse Tree Function Done!
BPlusTree default constructor called!
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
SQL::command()| Parse tree contents:     ⎴
    where: [yes]
    table_name: [student]
    ⎵
^
⎴
table_name: [student]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [age, <, 30, and, major, =, CS]
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


Iterator Constructor Fired!

Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
1              Bo             Yang           CS             28             


Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: age < 30 and major = CS
Tokenize Function Fired!
Input string: age < 30 and major = CS 
STokenizer::set_string called with input: age < 30 and major = CS 
Combining tokens after RELATIONAL_OPERATOR at index 1
Combining tokens after RELATIONAL_OPERATOR at index 5
Adding token: CS to combined string.
Pushing combined token: CS
Tokens: 
[ALFA: age]->[RelationalOperator: <]->[Number: 30]->[LogicalOperator: and]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: age]-> [RelationalOperator: <]-> [Number: 30]-> [LogicalOperator: and]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: CS]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token:--------------> age
is string or number
Pushing token: age to output queue.
Current Token:--------------> <
is operator
Pushing operator: < to stack.
Current Token:--------------> 30
is string or number
Pushing token: 30 to output queue.
Current Token:--------------> and
is operator
Popping operator: < from stack.
Pushing operator: and to stack.
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> CS
is string or number
Pushing token: CS to output queue.
Postfix Expression: age 30 < major CS = and 
BPlusTree default constructor called!
BPlusTree default constructor called!
Default table file created: default_table.tbl
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: age]-> [Number: 30]-> [RelationalOperator: <]-> [ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [LogicalOperator: and]-> |||
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
Field index for age: 3
Debug cond(): printing _indices: 20 -> 0
22 -> 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
Field index for major: 2
Debug cond(): printing _indices: CS -> 0 1
Processing '=': field_value = CS

Iterator Constructor Fired!

-------ResultSet::and_with fired!-------
_recnos:0 1 
Final record numbers after cond evaluation:0 1 
-------Table::cond done!-------
Matching record numbers:
  0   1 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 '*' detected. Expanding to all fields.
Creating new table with name: _selected_table_7 and fields: fname lname major age 
BPlusTree default constructor called!
BPlusTree default constructor called!

-------Table ctor 3 fired!-------

 Adding to _field_map: fname -> 0
Insert Function Fired! Inserting: fname: 0Next pointer is nullptr
Initializing index for field: fname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: lname -> 1
Insert Function Fired! Inserting: lname: 0Next pointer is nullptr
Initializing index for field: lname
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: major -> 2
Insert Function Fired! Inserting: major: 0BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Initializing index for field: major
BPlusTree default constructor called!
MMap constructor called!
 Adding to _field_map: age -> 3
Insert Function Fired! Inserting: age: 0Next pointer is nullptr
Initializing index for field: age
BPlusTree default constructor called!
MMap constructor called!
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_7.tbl
Opening file for writing (overwrite mode): _selected_table_7.tbl
File opened for writing: _selected_table_7.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0MMap::insert called with key: Flo, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Flo: [0]Next pointer is nullptr
Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1MMap::insert called with key: Yao, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yao: [0]Next pointer is nullptr
Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2MMap::insert called with key: Art, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Art: [0]Next pointer is nullptr
Inserted into _indices[2]: (Art, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3MMap::insert called with key: 20, value: 0
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 20: [0]Next pointer is nullptr
Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 5
    ⎴
    major: 2
    lname: 1
    ⎵
^
⎴
lname: 1
⎵
    ^
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age

Iterator Constructor Fired!


Iterator Constructor Fired!

Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 5

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
Insert Function Fired! Inserting: Bo: [1]Next pointer is nullptr
Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1MMap::insert called with key: Yang, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: Yang: [1]Next pointer is nullptr
Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2MMap::insert called with key: CS, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: CS: [1]Next pointer is nullptr
Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3MMap::insert called with key: 28, value: 1
Key does not exist, inserting new MPair.
Insert Function Fired! Inserting: 28: [1]Next pointer is nullptr
Inserted into _indices[3]: (28, 1)Vector_to_table :: record numbers: 0 1 
Vector_to_table :: table name: _selected_table_7
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_7
Table name: _selected_table_7, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
BPlusTree default constructor called!
BPlusTree default constructor called!
Next pointer is nullptr
Table name: _selected_table_7, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
expected: 0,1
[       OK ] BasicTest.ConditionalSelect (25 ms)
[----------] 2 tests from BasicTest (67 ms total)

[----------] 1 test from TEST_STUB
[ RUN      ] TEST_STUB.TestStub
[       OK ] TEST_STUB.TestStub (0 ms)
[----------] 1 test from TEST_STUB (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 2 test suites ran. (67 ms total)
[  PASSED  ] 3 tests.
jwcomputer@Mac Final_Dec_20 % 