jwcomputer@Mac Final_Dec_20 % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
----- BEGIN TEST --------
Build Keyword List Function Fired!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Keyword list built successfully!
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.

----- SQL object initialized. -----

Table default constructor fired!

----- Table object initialized.-----



------ SQL Tables I Manage: --------
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
current token is make
get_column: make is a keyword.
current token is table
get_column: table is a keyword.
current token is employee
Clearing the tree...
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is salary
current token is ,
current token is year
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep salary year 
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is make
get_column: make is a keyword.
current token is table
get_column: table is a keyword.
current token is employee
Clearing the tree...
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is salary
current token is ,
current token is year
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
>>> Creating table: employee with fields: last first dep salary year 
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is employee
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is Joe
current token is ,
current token is CS
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 100000
current token is ,
current token is 2018
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 

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
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 0)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is employee
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is JoAnn
current token is ,
current token is Physics
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 200000
current token is ,
current token is 2016
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 

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
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 1)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is employee
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jack
current token is ,
current token is HR
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 150000
current token is ,
current token is 2014
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 

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
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 2)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is employee
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jimmy
current token is ,
current token is Chemistry
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 140000
current token is ,
current token is 2018
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 

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
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 3)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is make
get_column: make is a keyword.
current token is table
get_column: table is a keyword.
current token is student
Clearing the tree...
current token is fields
get_column: fields is a keyword.
current token is fname
current token is ,
current token is lname
current token is ,
current token is major
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is age
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
command is make!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: student with fields: fname lname major age 
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is student
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Flo
current token is ,
current token is Yao
current token is ,
current token is Art
current token is ,
current token is 20
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Flo Yao Art 20 

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
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 0)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 0)Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 0)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is student
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Bo
current token is ,
current token is Yang
current token is ,
current token is CS
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 28
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Bo Yang CS 28 

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
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 1)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 1)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 1)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is student
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Sammuel L.
current token is ,
current token is Jackson
current token is ,
current token is CS
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 40
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 

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
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 2)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is student
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Billy
current token is ,
current token is Jackson
current token is ,
current token is Math
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is ,
current token is 27
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Billy Jackson Math 27 

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
Inserting field value: Billy for field: fname at index: 0Inserted into _indices[0]: (Billy, 3)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 3)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 3)Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 3)Table default constructor fired!
Clearing the tree...
Clearing the tree...
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
current token is insert
get_column: insert is a keyword.
current token is into
get_column: into is a keyword.
current token is student
Clearing the tree...
current token is values
get_column: values is a keyword.
current token is Mary Ann
current token is ,
current token is Davis
current token is ,
current token is Math
current token is ,
current token is 30
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Mary Ann Davis Math 30 

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
Inserting field value: Mary Ann for field: fname at index: 0Inserted into _indices[0]: (Mary Ann, 4)Field name: lname
Field index for lname: 1
Inserting field value: Davis for field: lname at index: 1Inserted into _indices[1]: (Davis, 4)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 4)Field name: age
Field index for age: 3
Inserting field value: 30 for field: age at index: 3Inserted into _indices[3]: (30, 4)Table default constructor fired!
Clearing the tree...
Clearing the tree...



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
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is employee
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_3.tbl
Opening file for writing (overwrite mode): _selected_table_3.tbl
File opened for writing: _selected_table_3.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field not found: dep. Returning -3.
Field not found: dep
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field not found: salary. Returning -3.
Field not found: salary
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field not found: year. Returning -3.
Field not found: year
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field not found: dep. Returning -3.
Field not found: dep
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field not found: salary. Returning -3.
Field not found: salary
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field not found: year. Returning -3.
Field not found: year
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field not found: dep. Returning -3.
Field not found: dep
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field not found: salary. Returning -3.
Field not found: salary
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field not found: year. Returning -3.
Field not found: year
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field not found: dep. Returning -3.
Field not found: dep
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field not found: salary. Returning -3.
Field not found: salary
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field not found: year. Returning -3.
Field not found: year
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_3
-------------------Table::vector_to_table done!----------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
current token is select
get_column: select is a keyword.
current token is last
current token is ,
Clearing the tree...
current token is first
current token is ,
current token is age
current token is from
get_column: from is a keyword.
current token is employee
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 3
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: age
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_4.tbl
Opening file for writing (overwrite mode): _selected_table_4.tbl
File opened for writing: _selected_table_4.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field not found: first. Returning -3.
Field not found: first
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_4
-------------------Table::vector_to_table done!----------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 0 1 2 3

>select last from employee

=====Command Function Fired!=====
 select last from employee
set_string Function Fired!
set string : Input string: select last from employee
Tokenize Function Fired!
Input string: select last from employee
STokenizer::set_string called with input: select last from employee
Tokens: 
[ALFA: select]->[ALFA: last]->[ALFA: from]->[ALFA: employee]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is last
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is employee
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [employee]
    fields: [last]
    ⎵
^
⎴
fields: [last]
⎵
    ^
    ⎴
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
----------------------------------------DEBUG HERE!
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 1
Index 0 initialized for field: last
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_5.tbl
Opening file for writing (overwrite mode): _selected_table_5.tbl
File opened for writing: _selected_table_5.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field not found: last
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_5
-------------------Table::vector_to_table done!----------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 0 1 2 3

>select * from employee where last = Johnson

=====Command Function Fired!=====
 select * from employee where last = Johnson
set_string Function Fired!
set string : Input string: select * from employee where last = Johnson
Tokenize Function Fired!
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Johnson to combined string.
Pushing combined token: Johnson
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: employee]->[ALFA: where]->[ALFA: last]->[RelationalOperator: =]->[ALFA: Johnson]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is Johnson
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Parse Tree Function Fired!
command: select
    ⎴
    where: [yes]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [last, =, Johnson]
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!

Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: last = Johnson
Tokenize Function Fired!
Input string: last = Johnson 
STokenizer::set_string called with input: last = Johnson 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Johnson to combined string.
Pushing combined token: Johnson
Tokens: 
[ALFA: last]->[RelationalOperator: =]->[ALFA: Johnson]->
Tokenization done!
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
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Johnson]-> [RelationalOperator: =]-> |||
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field index for last: -3
Field not found: last. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_6.tbl
Opening file for writing (overwrite mode): _selected_table_6.tbl
File opened for writing: _selected_table_6.tbl
Vector_to_table :: record numbers: 
Vector_to_table :: table name: _selected_table_6
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_6
Table name: _selected_table_6, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 

>select * from employee where last=Blow and major="JoAnn"

=====Command Function Fired!=====
 select * from employee where last=Blow and major="JoAnn"
set_string Function Fired!
set string : Input string: select * from employee where last=Blow and major="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and major="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and major="JoAnn"
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 10
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: employee]->[ALFA: where]->[ALFA: last]->[RelationalOperator: =]->[ALFA: Blow]->[LogicalOperator: and]->[ALFA: major]->[RelationalOperator: =]->[String: JoAnn]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is Blow
current token is and
current token is major
current token is =
current token is JoAnn
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Parse Tree Function Fired!
command: select
    ⎴
    where: [yes]
    table_name: [employee]
    ⎵
^
⎴
table_name: [employee]
    ^
    ⎴
    fields: [*]
    ⎵
fields: [*]
⎵
    ^
    ⎴
    condition: [last, =, Blow, and, major, =, JoAnn]
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!

Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: last = Blow and major = JoAnn
Tokenize Function Fired!
Input string: last = Blow and major = JoAnn 
STokenizer::set_string called with input: last = Blow and major = JoAnn 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 5
Adding token: JoAnn to combined string.
Pushing combined token: JoAnn
Tokens: 
[ALFA: last]->[RelationalOperator: =]->[ALFA: Blow]->[LogicalOperator: and]->[ALFA: major]->[RelationalOperator: =]->[ALFA: JoAnn]->
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[ALFA: last]-> [RelationalOperator: =]-> [ALFA: Blow]-> [LogicalOperator: and]-> [ALFA: major]-> [RelationalOperator: =]-> [ALFA: JoAnn]-> |||
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
Current Token:--------------> major
is string or number
Pushing token: major to output queue.
Current Token:--------------> =
is operator
Pushing operator: = to stack.
Current Token:--------------> JoAnn
is string or number
Pushing token: JoAnn to output queue.
Postfix Expression: last Blow = major JoAnn = and 
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Blow]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: JoAnn]-> [RelationalOperator: =]-> [LogicalOperator: and]-> |||
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field not found: last. Returning -3.
Field index for last: -3
Field not found: last. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
File opened for reading: employee.tbl
Opening file for writing: _selected_table_7.tbl
Opening file for writing (overwrite mode): _selected_table_7.tbl
File opened for writing: _selected_table_7.tbl
Vector_to_table :: record numbers: 
Vector_to_table :: table name: _selected_table_7
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_7
Table name: _selected_table_7, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 

>select * from student

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
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is student
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_8.tbl
Opening file for writing (overwrite mode): _selected_table_8.tbl
File opened for writing: _selected_table_8.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field not found: fname. Returning -3.
Field not found: fname
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field not found: lname
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field not found: major
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field not found: fname. Returning -3.
Field not found: fname
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field not found: lname
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field not found: major
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field not found: fname. Returning -3.
Field not found: fname
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field not found: lname
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field not found: major
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field not found: fname. Returning -3.
Field not found: fname
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field not found: lname
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field not found: major
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field not found: fname. Returning -3.
Field not found: fname
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field not found: lname
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field not found: major
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : 
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
Vector_to_table :: record numbers: 0 1 2 3 4 
Vector_to_table :: table name: _selected_table_8
-------------------Table::vector_to_table done!----------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)

=====Command Function Fired!=====
 select * from student where (major=CS or major=Art)
set_string Function Fired!
set string : Input string: select * from student where (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where (major=CS or major=Art)
Combining tokens after RELATIONAL_OPERATOR at index 7
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 11
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[LeftParen: (]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->[LogicalOperator: or]->[ALFA: major]->[RelationalOperator: =]->[ALFA: Art]->[RightParen: )]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is student
current token is where
get_column: where is a keyword.
current token is (
current token is major
current token is =
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is CS
current token is or
current token is major
current token is =
current token is Art
current token is )
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
    condition: [(, major, =, CS, or, major, =, Art, )]
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!

Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: ( major = CS or major = Art )
Tokenize Function Fired!
Input string: ( major = CS or major = Art ) 
STokenizer::set_string called with input: ( major = CS or major = Art ) 
Combining tokens after RELATIONAL_OPERATOR at index 2
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[LeftParen: (]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->[LogicalOperator: or]->[ALFA: major]->[RelationalOperator: =]->[ALFA: Art]->[RightParen: )]->
Tokenization done!
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
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> |||
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field not found: major. Returning -3.
Field index for major: -3
Field not found: major. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_9.tbl
Opening file for writing (overwrite mode): _selected_table_9.tbl
File opened for writing: _selected_table_9.tbl
Vector_to_table :: record numbers: 
Vector_to_table :: table name: _selected_table_9
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_9
Table name: _selected_table_9, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 

>select * from student where lname>J

=====Command Function Fired!=====
 select * from student where lname>J
set_string Function Fired!
set string : Input string: select * from student where lname>J
Tokenize Function Fired!
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: J to combined string.
Pushing combined token: J
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[ALFA: lname]->[RelationalOperator: >]->[ALFA: J]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
    condition: [lname, >, J]
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!

Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J
Tokenize Function Fired!
Input string: lname > J 
STokenizer::set_string called with input: lname > J 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: J to combined string.
Pushing combined token: J
Tokens: 
[ALFA: lname]->[RelationalOperator: >]->[ALFA: J]->
Tokenization done!
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
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> |||
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field index for lname: -3
Field not found: lname. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_10.tbl
Opening file for writing (overwrite mode): _selected_table_10.tbl
File opened for writing: _selected_table_10.tbl
Vector_to_table :: record numbers: 
Vector_to_table :: table name: _selected_table_10
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_10
Table name: _selected_table_10, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 

>select * from student where lname>J and (major=CS or major=Art)

=====Command Function Fired!=====
 select * from student where lname>J and (major=CS or major=Art)
set_string Function Fired!
set string : Input string: select * from student where lname>J and (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where lname>J and (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where lname>J and (major=CS or major=Art)
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: J to combined string.
Pushing combined token: J
Combining tokens after RELATIONAL_OPERATOR at index 11
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 15
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: student]->[ALFA: where]->[ALFA: lname]->[RelationalOperator: >]->[ALFA: J]->[LogicalOperator: and]->[LeftParen: (]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->[LogicalOperator: or]->[ALFA: major]->[RelationalOperator: =]->[ALFA: Art]->[RightParen: )]->
Tokenization done!
Init Adjacency Table Function Fired!
First token: select
Get Parse Tree Function Fired!
Init Adjacency Table Function Fired!
First token: select
Get Column Function Fired!
current token is select
get_column: select is a keyword.
current token is *
current token is from
get_column: from is a keyword.
Clearing the tree...
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
current token is and
current token is (
current token is major
current token is =
current token is CS
current token is or
current token is major
current token is =
current token is Art
current token is )
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
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
    condition: [lname, >, J, and, (, major, =, CS, or, major, =, Art, )]
    command: [select]
    ⎵


Parse Tree Function Done!
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!

Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J and ( major = CS or major = Art )
Tokenize Function Fired!
Input string: lname > J and ( major = CS or major = Art ) 
STokenizer::set_string called with input: lname > J and ( major = CS or major = Art ) 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: J to combined string.
Pushing combined token: J
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 10
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[ALFA: lname]->[RelationalOperator: >]->[ALFA: J]->[LogicalOperator: and]->[LeftParen: (]->[ALFA: major]->[RelationalOperator: =]->[ALFA: CS]->[LogicalOperator: or]->[ALFA: major]->[RelationalOperator: =]->[ALFA: Art]->[RightParen: )]->
Tokenization done!
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
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> [ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> [LogicalOperator: and]-> |||
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field not found: lname. Returning -3.
Field index for lname: -3
Field not found: lname. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: '*' detected. Expanding to all fields.

----------------------------------------DEBUG HERE!
Clearing the tree...
Clearing the tree...
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
File opened for reading: student.tbl
Opening file for writing: _selected_table_11.tbl
Opening file for writing (overwrite mode): _selected_table_11.tbl
File opened for writing: _selected_table_11.tbl
Vector_to_table :: record numbers: 
Vector_to_table :: table name: _selected_table_11
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_11
Table name: _selected_table_11, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
basic_test: records selected: 
----- END TEST --------
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
[       OK ] SQL_BASIC.SQLBasic (34 ms)
[----------] 1 test from SQL_BASIC (34 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (34 ms total)
[  PASSED  ] 1 test.
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
Clearing the tree...
jwcomputer@Mac Final_Dec_20 % 