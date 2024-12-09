jwcomputer@JWs-MacBook-Pro 99_99_final % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
Parser Default Constructor Fired!
Token list is empty.
Build Keyword List Function Fired!
Keyword list built successfully!
set_string Function Fired!
set string : Input string: 
Tokenize Function Fired!
Input string: 
STokenizer::set_string called with input: 



















Tokens in vector: 
Tokens: 
Tokenization done!
Token list is empty.
Get Parse Tree Function Fired!
Error: Token list is empty.
Failed to parse the input string.
-------------Table ctor 1 Done!-----
-------------Table ctor 1 Done!-----
>make table employee fields  last,       first,         dep,      salary, year
Command Function Fired! make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year



















Tokens in vector: 
Processing token: make [Type: 16]
Processing token: table [Type: 16]
Processing token: employee [Type: 16]
Processing token: fields [Type: 16]
Processing token: last [Type: 16]
Processing token: , [Type: 5]
Processing token: first [Type: 16]
Processing token: , [Type: 5]
Processing token: dep [Type: 16]
Processing token: , [Type: 5]
Processing token: salary [Type: 16]
Processing token: , [Type: 5]
Processing token: year [Type: 16]
Tokens: 
[ALFA: make]
[ALFA: table]
[ALFA: employee]
[ALFA: fields]
[ALFA: last]
[Comma: ,]
[ALFA: first]
[Comma: ,]
[ALFA: dep]
[Comma: ,]
[ALFA: salary]
[Comma: ,]
[ALFA: year]
Tokenization done!








Get Parse Tree Function Fired!








Get Column Function Fired!
This token is: make
State = 0
last_state = :0
This token is: table
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: fields
State = 3
last_state = :3
This token is: last
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: first
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: dep
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: salary
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: year
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
make
Error: child_count exceeds MAX_CHILDREN.
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
-------------Table ctor 1 Done!-----
-------------Table ctor 1 Done!-----
basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
Command Function Fired! make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year



















Tokens in vector: 
Processing token: make [Type: 16]
Processing token: table [Type: 16]
Processing token: employee [Type: 16]
Processing token: fields [Type: 16]
Processing token: last [Type: 16]
Processing token: , [Type: 5]
Processing token: first [Type: 16]
Processing token: , [Type: 5]
Processing token: dep [Type: 16]
Processing token: , [Type: 5]
Processing token: salary [Type: 16]
Processing token: , [Type: 5]
Processing token: year [Type: 16]
Tokens: 
[ALFA: make]
[ALFA: table]
[ALFA: employee]
[ALFA: fields]
[ALFA: last]
[Comma: ,]
[ALFA: first]
[Comma: ,]
[ALFA: dep]
[Comma: ,]
[ALFA: salary]
[Comma: ,]
[ALFA: year]
Tokenization done!








Get Parse Tree Function Fired!








Get Column Function Fired!
This token is: make
State = 0
last_state = :0
This token is: table
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: fields
State = 3
last_state = :3
This token is: last
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: first
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: dep
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: salary
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: year
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
make
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: employee with fields: last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       Joe,           CS,       100000, 2018
Command Function Fired! insert into employee values Blow,       Joe,           CS,       100000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
STokenizer::set_string called with input: insert into employee values Blow,       Joe,           CS,       100000, 2018



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: employee [Type: 16]
Processing token: values [Type: 16]
Processing token: Blow [Type: 16]
Processing token: , [Type: 5]
Processing token: Joe [Type: 16]
Processing token: , [Type: 5]
Processing token: CS [Type: 16]
Processing token: , [Type: 5]
Processing token: 100000 [Type: 1]
Processing token: , [Type: 5]
Processing token: 2018 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Blow]
[Comma: ,]
[ALFA: Joe]
[Comma: ,]
[ALFA: CS]
[Comma: ,]
[ALFA: 100000]
[Comma: ,]
[ALFA: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Blow
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Joe
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 100000
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 2018
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1Inserted into _indices[1]: (Joe, 0)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2Inserted into _indices[2]: (CS, 0)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3Inserted into _indices[3]: (100000, 0)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 0)-------------Table ctor 1 Done!-----
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Command Function Fired! insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
set_string Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
STokenizer::set_string called with input: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: employee [Type: 16]
Processing token: values [Type: 16]
Processing token: Blow [Type: 16]
Processing token: , [Type: 5]
Processing token: JoAnn [Type: 16]
Processing token: , [Type: 5]
Processing token: Physics [Type: 16]
Processing token: , [Type: 5]
Processing token: 200000 [Type: 1]
Processing token: , [Type: 5]
Processing token: 2016 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Blow]
[Comma: ,]
[ALFA: JoAnn]
[Comma: ,]
[ALFA: Physics]
[Comma: ,]
[ALFA: 200000]
[Comma: ,]
[ALFA: 2016]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Blow
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: JoAnn
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: Physics
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 200000
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 2016
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 1)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 1)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3Inserted into _indices[3]: (200000, 1)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 1)-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    Jack,          HR,       150000, 2014
Command Function Fired! insert into employee values Johnson,    Jack,          HR,       150000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson,    Jack,          HR,       150000, 2014



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: employee [Type: 16]
Processing token: values [Type: 16]
Processing token: Johnson [Type: 16]
Processing token: , [Type: 5]
Processing token: Jack [Type: 16]
Processing token: , [Type: 5]
Processing token: HR [Type: 16]
Processing token: , [Type: 5]
Processing token: 150000 [Type: 1]
Processing token: , [Type: 5]
Processing token: 2014 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Johnson]
[Comma: ,]
[ALFA: Jack]
[Comma: ,]
[ALFA: HR]
[Comma: ,]
[ALFA: 150000]
[Comma: ,]
[ALFA: 2014]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Johnson
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Jack
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: HR
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 150000
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 2014
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 2)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 2)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 2)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 2)-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Command Function Fired! insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: employee [Type: 16]
Processing token: values [Type: 16]
Processing token: Johnson [Type: 16]
Processing token: , [Type: 5]
Processing token: Jimmy [Type: 2]
Processing token: , [Type: 5]
Processing token: Chemistry [Type: 16]
Processing token: , [Type: 5]
Processing token: 140000 [Type: 1]
Processing token: , [Type: 5]
Processing token: 2018 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Johnson]
[Comma: ,]
[ALFA: Jimmy]
[Comma: ,]
[ALFA: Chemistry]
[Comma: ,]
[ALFA: 140000]
[Comma: ,]
[ALFA: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: employee
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Johnson
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Jimmy
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: Chemistry
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 140000
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 2018
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 3)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 3)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 3)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 3)-------------Table ctor 1 Done!-----
>make table student fields  fname,          lname,    major,    age
Command Function Fired! make table student fields  fname,          lname,    major,    age
set_string Function Fired!
set string : Input string: make table student fields  fname,          lname,    major,    age
Tokenize Function Fired!
Input string: make table student fields  fname,          lname,    major,    age
STokenizer::set_string called with input: make table student fields  fname,          lname,    major,    age



















Tokens in vector: 
Processing token: make [Type: 16]
Processing token: table [Type: 16]
Processing token: student [Type: 16]
Processing token: fields [Type: 16]
Processing token: fname [Type: 16]
Processing token: , [Type: 5]
Processing token: lname [Type: 16]
Processing token: , [Type: 5]
Processing token: major [Type: 16]
Processing token: , [Type: 5]
Processing token: age [Type: 16]
Tokens: 
[ALFA: make]
[ALFA: table]
[ALFA: student]
[ALFA: fields]
[ALFA: fname]
[Comma: ,]
[ALFA: lname]
[Comma: ,]
[ALFA: major]
[Comma: ,]
[ALFA: age]
Tokenization done!








Get Parse Tree Function Fired!








Get Column Function Fired!
This token is: make
State = 0
last_state = :0
This token is: table
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: fields
State = 3
last_state = :3
This token is: fname
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: lname
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: major
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: age
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
make
>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
>>> Creating table: student with fields: fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
-------------Table ctor 1 Done!-----
-------------Table ctor 1 Done!-----
>insert into student values Flo,            Yao,        Art,    20
Command Function Fired! insert into student values Flo,            Yao,         Art,    20
set_string Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
STokenizer::set_string called with input: insert into student values Flo,            Yao,       Art,    20



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: student [Type: 16]
Processing token: values [Type: 16]
Processing token: Flo [Type: 16]
Processing token: , [Type: 5]
Processing token: Yao [Type: 16]
Processing token: , [Type: 5]
Processing token: Art [Type: 16]
Processing token: , [Type: 5]
Processing token: 20 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[ALFA: Flo]
[Comma: ,]
[ALFA: Yao]
[Comma: ,]
[ALFA: Art]
[Comma: ,]
[ALFA: 20]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Flo
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Yao
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: Art
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 20
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Flo Yao Art 20 

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 0)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 0)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 0)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------------Table ctor 1 Done!-----
>insert into student values Bo,                      Yang,      CS,             28
Command Function Fired! insert into student values Bo,               Yang,      CS,             28
set_string Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
STokenizer::set_string called with input: insert into student values Bo,                     Yang,      CS,             28



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: student [Type: 16]
Processing token: values [Type: 16]
Processing token: Bo [Type: 16]
Processing token: , [Type: 5]
Processing token: Yang [Type: 16]
Processing token: , [Type: 5]
Processing token: CS [Type: 16]
Processing token: , [Type: 5]
Processing token: 28 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[ALFA: Bo]
[Comma: ,]
[ALFA: Yang]
[Comma: ,]
[ALFA: CS]
[Comma: ,]
[ALFA: 28]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Bo
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Yang
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 28
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Bo Yang CS 28 

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 1)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 1)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 1)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------------Table ctor 1 Done!-----
>insert into student values "Sammuel L.", Jackson,      CS,             40
Command Function Fired! insert into student values "Sammuel L.", Jackson,       CS,             40
set_string Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,    CS,             40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: student [Type: 16]
Processing token: values [Type: 16]
Processing token: Sammuel L. [Type: 2]
Processing token: , [Type: 5]
Processing token: Jackson [Type: 16]
Processing token: , [Type: 5]
Processing token: CS [Type: 16]
Processing token: , [Type: 5]
Processing token: 40 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[ALFA: Sammuel L.]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: CS]
[Comma: ,]
[ALFA: 40]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Sammuel L.
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Jackson
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 40
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 2)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 2)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)-------------Table ctor 1 Done!-----
>insert into student values "Billy",         Jackson,   Math,   27
Command Function Fired! insert into student values "Billy",          Jackson,   Math,   27
set_string Function Fired!
set string : Input string: insert into student values "Billy",       Jackson,   Math,   27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: student [Type: 16]
Processing token: values [Type: 16]
Processing token: Billy [Type: 2]
Processing token: , [Type: 5]
Processing token: Jackson [Type: 16]
Processing token: , [Type: 5]
Processing token: Math [Type: 16]
Processing token: , [Type: 5]
Processing token: 27 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[ALFA: Billy]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[ALFA: 27]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Billy
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Jackson
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: Math
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 27
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Billy Jackson Math 27 

-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Billy for field: fname at index: 0Inserted into _indices[0]: (Billy, 3)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 3)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 3)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 3)-------------Table ctor 1 Done!-----
>insert into student values "Mary Ann",   Davis,        Math,   30
Command Function Fired! insert into student values "Mary Ann",   Davis, Math,   30
set_string Function Fired!
set string : Input string: insert into student values "Mary Ann",   Davis,      Math,   30
Tokenize Function Fired!
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30



















Tokens in vector: 
Processing token: insert [Type: 16]
Processing token: into [Type: 16]
Processing token: student [Type: 16]
Processing token: values [Type: 16]
Processing token: Mary Ann [Type: 2]
Processing token: , [Type: 5]
Processing token: Davis [Type: 16]
Processing token: , [Type: 5]
Processing token: Math [Type: 16]
Processing token: , [Type: 5]
Processing token: 30 [Type: 1]
Tokens: 
[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[ALFA: Mary Ann]
[Comma: ,]
[ALFA: Davis]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[ALFA: 30]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
This token is: insert
State = 0
last_state = :0
This token is: into
State = 1
last_state = :1
This token is: student
State = 2
last_state = :2
This token is: values
State = 3
last_state = :3
This token is: Mary Ann
State = 4
last_state = :4
This token is: ,
State = 5
last_state = :5
This token is: Davis
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: Math
State = 5
last_state = :5
This token is: ,
State = 5
last_state = :5
This token is: 30
State = 5
last_state = :5
Parse Tree Function Fired!
stuck here! _ptree size: 4
insert
>>> Parsed command: insert
>>> ------>> cmd[0] = insert----------------
>>> Inserting into table: student values: Mary Ann Davis Math 30 

-------Table::insert_into fired!-------
Fields to insert : Mary Ann Davis Math 30
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Mary Ann for field: fname at index: 0Inserted into _indices[0]: (Mary Ann, 4)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Davis for field: lname at index: 1Inserted into _indices[1]: (Davis, 4)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 4)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 30 for field: age at index: 3Inserted into _indices[3]: (30, 4)-------------Table ctor 1 Done!-----



>select * from employee
Command Function Fired! select * from employee
set_string Function Fired!
set string : Input string: select * from employee
Tokenize Function Fired!
Input string: select * from employee
STokenizer::set_string called with input: select * from employee



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: employee [Type: 16]
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: employee
State = 3
last_state = :3
Parse Tree Function Fired!
stuck here! _ptree size: 4
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_18.tbl
Checking file: _select_table_18.tbl
File successfully opened: _select_table_18.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1Inserted into _indices[1]: (Joe, 0)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2Inserted into _indices[2]: (CS, 0)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3Inserted into _indices[3]: (100000, 0)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_18.tbl
Checking file: _select_table_18.tbl
File successfully opened: _select_table_18.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 1)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 1)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3Inserted into _indices[3]: (200000, 1)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 1)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_18.tbl
Checking file: _select_table_18.tbl
File successfully opened: _select_table_18.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 2)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 2)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 2)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 2)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_18.tbl
Checking file: _select_table_18.tbl
File successfully opened: _select_table_18.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 3)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 3)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 3)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 3)Selected table record numbers: 0 1 2 3 
Table name: _select_table_18, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

-------------------Table::vector_to_table done!----------------------------
basic_test: records selected: 0 1 2 3

>select last, first, age from employee
Command Function Fired! select last, first, age from employee
set_string Function Fired!
set string : Input string: select last, first, age from employee
Tokenize Function Fired!
Input string: select last, first, age from employee
STokenizer::set_string called with input: select last, first, age from employee



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: last [Type: 16]
Processing token: , [Type: 5]
Processing token: first [Type: 16]
Processing token: , [Type: 5]
Processing token: age [Type: 16]
Processing token: from [Type: 16]
Processing token: employee [Type: 16]
Tokens: 
[ALFA: select]
[ALFA: last]
[Comma: ,]
[ALFA: first]
[Comma: ,]
[ALFA: age]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: last
State = 1
last_state = :1
This token is: ,
State = 2
last_state = :2
This token is: first
State = 2
last_state = :2
This token is: ,
State = 2
last_state = :2
This token is: age
State = 2
last_state = :2
This token is: from
State = 2
last_state = :2
This token is: employee
State = 3
last_state = :3
Parse Tree Function Fired!
stuck here! _ptree size: 4
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_20.tbl
Checking file: _select_table_20.tbl
File successfully opened: _select_table_20.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1Inserted into _indices[1]: (Joe, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_20.tbl
Checking file: _select_table_20.tbl
File successfully opened: _select_table_20.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 1)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_20.tbl
Checking file: _select_table_20.tbl
File successfully opened: _select_table_20.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 2)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: age
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field not found: age. Returning -3.
Field not found: age
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy
_field_names last first age
_field_names size: 3
_field_map.size() 3
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_20.tbl
Checking file: _select_table_20.tbl
File successfully opened: _select_table_20.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 3)Selected table record numbers: 0 1 2 3 
Table name: _select_table_20, records: 4
_last_record: 3
------------------------------------------------------------
        Record#           last          first            age
------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0           Blow            Joe               
              1           Blow          JoAnn               
              2        Johnson           Jack               
              3        Johnson          Jimmy               

-------------------Table::vector_to_table done!----------------------------
basic_test: records selected: 0 1 2 3

>select last from employee
Command Function Fired! select last from employee
set_string Function Fired!
set string : Input string: select last from employee
Tokenize Function Fired!
Input string: select last from employee
STokenizer::set_string called with input: select last from employee



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: last [Type: 16]
Processing token: from [Type: 16]
Processing token: employee [Type: 16]
Tokens: 
[ALFA: select]
[ALFA: last]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: last
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: employee
State = 3
last_state = :3
Parse Tree Function Fired!
stuck here! _ptree size: 4
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_22.tbl
Checking file: _select_table_22.tbl
File successfully opened: _select_table_22.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_22.tbl
Checking file: _select_table_22.tbl
File successfully opened: _select_table_22.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_22.tbl
Checking file: _select_table_22.tbl
File successfully opened: _select_table_22.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_22.tbl
Checking file: _select_table_22.tbl
File successfully opened: _select_table_22.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)Selected table record numbers: 0 1 2 3 
Table name: _select_table_22, records: 4
_last_record: 3
------------------------------
        Record#           last
------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0           Blow
              1           Blow
              2        Johnson
              3        Johnson

-------------------Table::vector_to_table done!----------------------------
basic_test: records selected: 0 1 2 3

>select * from employee where last = Johnson
Command Function Fired! select * from employee where last = Johnson
set_string Function Fired!
set string : Input string: select * from employee where last = Johnson
Tokenize Function Fired!
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: employee [Type: 16]
Processing token: where [Type: 16]
Processing token: last [Type: 16]
Processing token: = [Type: 13]
Processing token: Johnson [Type: 16]
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Johnson to combined string.
Pushing combined token: Johnson
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
[ALFA: where]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: employee
State = 3
last_state = :3
This token is: where
State = 4
last_state = :4
This token is: last
State = 5
last_state = :5
This token is: =
State = 8
last_state = :8
This token is: Johnson
State = 10
last_state = :10
Parse Tree Function Fired!
stuck here! _ptree size: 7
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Johnson
Tokenize Function Fired!
Input string: last = Johnson 
STokenizer::set_string called with input: last = Johnson 



















Tokens in vector: 
Processing token: last [Type: 16]
Processing token: = [Type: 13]
Processing token: Johnson [Type: 16]
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Johnson to combined string.
Pushing combined token: Johnson
Tokens: 
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
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
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_24.tbl
Checking file: _select_table_24.tbl
File successfully opened: _select_table_24.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 0)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 0)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 0)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 0)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 0)-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: first
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: first at index 1
-------Table::field_col_no fired!-------
Field name: dep
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: dep at index 2
-------Table::field_col_no fired!-------
Field name: salary
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: salary at index 3
-------Table::field_col_no fired!-------
Field name: year
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: year at index 4
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_24.tbl
Checking file: _select_table_24.tbl
File successfully opened: _select_table_24.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 1)--------------------------------------Debug here !!!
Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 1)--------------------------------------Debug here !!!
Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 1)--------------------------------------Debug here !!!
Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 1)--------------------------------------Debug here !!!
Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 1)Selected table record numbers: 0 1 
Table name: _select_table_24, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018

-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_24, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
basic_test: records selected: 2 3

>select * from employee where last=Blow and major="JoAnn"
Command Function Fired! select * from employee where last=Blow and major="JoAnn"
set_string Function Fired!
set string : Input string: select * from employee where last=Blow and major="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and major="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and major="JoAnn"



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: employee [Type: 16]
Processing token: where [Type: 16]
Processing token: last [Type: 16]
Processing token: = [Type: 13]
Processing token: Blow [Type: 16]
Processing token: and [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: JoAnn [Type: 2]
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 10
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
[ALFA: where]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Blow]
[LogicalOperator: and]
[ALFA: major]
[RelationalOperator: =]
[String: JoAnn]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: employee
State = 3
last_state = :3
This token is: where
State = 4
last_state = :4
This token is: last
State = 5
last_state = :5
This token is: =
State = 8
last_state = :8
This token is: Blow
State = 10
last_state = :10
This token is: and
State = 8
last_state = :8
This token is: major
State = 9
last_state = :9
This token is: =
State = 8
last_state = :8
This token is: JoAnn
State = 10
last_state = :10
Parse Tree Function Fired!
stuck here! _ptree size: 7
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Blow and major = JoAnn
Tokenize Function Fired!
Input string: last = Blow and major = JoAnn 
STokenizer::set_string called with input: last = Blow and major = JoAnn 



















Tokens in vector: 
Processing token: last [Type: 16]
Processing token: = [Type: 13]
Processing token: Blow [Type: 16]
Processing token: and [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: JoAnn [Type: 16]
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 5
Adding token: JoAnn to combined string.
Pushing combined token: JoAnn
Tokens: 
[ALFA: last]
[RelationalOperator: =]
[ALFA: Blow]
[LogicalOperator: and]
[ALFA: major]
[RelationalOperator: =]
[ALFA: JoAnn]
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
-------Table::field_col_no fired!-------
Field name: last
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field found: last at index 0
-------Table::field_col_no fired!-------
Field name: major
Field map size:5

Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field not found: major. Returning -3.
Field not found: major. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
Selected table record numbers: 
Table name: _select_table_26, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl

-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_26, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
basic_test: records selected: 

>select * from student
Command Function Fired! select * from student
set_string Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: student [Type: 16]
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: student
State = 3
last_state = :3
Parse Tree Function Fired!
stuck here! _ptree size: 4
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> No WHERE condition found. Selecting all records.
-------Table::select_all fired!-------
recnos: 0 1 2 3 4 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_28.tbl
Checking file: _select_table_28.tbl
File successfully opened: _select_table_28.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 0)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 0)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 0)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_28.tbl
Checking file: _select_table_28.tbl
File successfully opened: _select_table_28.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 1)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 1)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 1)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_28.tbl
Checking file: _select_table_28.tbl
File successfully opened: _select_table_28.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 2)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 2)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_28.tbl
Checking file: _select_table_28.tbl
File successfully opened: _select_table_28.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Billy for field: fname at index: 0Inserted into _indices[0]: (Billy, 3)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 3)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 3)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 3)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Mary Ann Davis Math 30
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_28.tbl
Checking file: _select_table_28.tbl
File successfully opened: _select_table_28.tbl
FileRecord::write fired!
Record written successfully with record number: 4

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Mary Ann for field: fname at index: 0Inserted into _indices[0]: (Mary Ann, 4)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Davis for field: lname at index: 1Inserted into _indices[1]: (Davis, 4)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 4)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 30 for field: age at index: 3Inserted into _indices[3]: (30, 4)Selected table record numbers: 0 1 2 3 4 
Table name: _select_table_28, records: 5
_last_record: 4
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
              3          Billy        Jackson           Math             27
              4       Mary Ann          Davis           Math             30

-------------------Table::vector_to_table done!----------------------------
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
Command Function Fired! select * from student where (major=CS or major=Art)
set_string Function Fired!
set string : Input string: select * from student where (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where (major=CS or major=Art)



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: student [Type: 16]
Processing token: where [Type: 16]
Processing token: ( [Type: 10]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: CS [Type: 16]
Processing token: or [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: Art [Type: 16]
Processing token: ) [Type: 11]
Combining tokens after RELATIONAL_OPERATOR at index 7
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 11
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
[ALFA: where]
[LeftParen: (]
[ALFA: major]
[RelationalOperator: =]
[ALFA: CS]
[LogicalOperator: or]
[ALFA: major]
[RelationalOperator: =]
[ALFA: Art]
[RightParen: )]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: student
State = 3
last_state = :3
This token is: where
State = 4
last_state = :4
This token is: (
State = 5
last_state = :5
This token is: major
State = 6
last_state = :6
This token is: =
State = 8
last_state = :8
This token is: CS
State = 10
last_state = :10
This token is: or
State = 8
last_state = :8
This token is: major
State = 9
last_state = :9
This token is: =
State = 8
last_state = :8
This token is: Art
State = 10
last_state = :10
This token is: )
State = 8
last_state = :8
Parse Tree Function Fired!
stuck here! _ptree size: 7
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> Applying WHERE condition.
>>> Condition from parse tree: ( major = CS or major = Art )
Tokenize Function Fired!
Input string: ( major = CS or major = Art ) 
STokenizer::set_string called with input: ( major = CS or major = Art ) 



















Tokens in vector: 
Processing token: ( [Type: 10]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: CS [Type: 16]
Processing token: or [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: Art [Type: 16]
Processing token: ) [Type: 11]
Combining tokens after RELATIONAL_OPERATOR at index 2
Adding token: CS to combined string.
Pushing combined token: CS
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Art to combined string.
Pushing combined token: Art
Tokens: 
[LeftParen: (]
[ALFA: major]
[RelationalOperator: =]
[ALFA: CS]
[LogicalOperator: or]
[ALFA: major]
[RelationalOperator: =]
[ALFA: Art]
[RightParen: )]
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
右括号情况
Popped left paren from stack.
Postfix Expression: major CS = major Art = or 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 0)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 0)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 0)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 1)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 1)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 1)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 2)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 2)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)Selected table record numbers: 0 1 2 
Table name: _select_table_30, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40

-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_30, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
basic_test: records selected: 0 1 2

>select * from student where lname>J
Command Function Fired! select * from student where lname>J
set_string Function Fired!
set string : Input string: select * from student where lname>J
Tokenize Function Fired!
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: student [Type: 16]
Processing token: where [Type: 16]
Processing token: lname [Type: 16]
Processing token: > [Type: 13]
Processing token: J [Type: 16]
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: J to combined string.
Pushing combined token: J
Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
[ALFA: where]
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: student
State = 3
last_state = :3
This token is: where
State = 4
last_state = :4
This token is: lname
State = 5
last_state = :5
This token is: >
State = 8
last_state = :8
This token is: J
State = 10
last_state = :10
Parse Tree Function Fired!
stuck here! _ptree size: 7
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J
Tokenize Function Fired!
Input string: lname > J 
STokenizer::set_string called with input: lname > J 



















Tokens in vector: 
Processing token: lname [Type: 16]
Processing token: > [Type: 13]
Processing token: J [Type: 16]
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: J to combined string.
Pushing combined token: J
Tokens: 
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
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
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
Processing '>': field_value = J
Matching record: Key = Jackson, Record = 2
Matching record: Key = Jackson, Record = 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0
Final record numbers after cond evaluation:2 3 1 0 
-------Table::cond done!-------
Matching record numbers:
  2   3   1   0 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 0)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 0)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 0)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Billy for field: fname at index: 0Inserted into _indices[0]: (Billy, 1)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 1)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 1)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 2)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 2)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 3

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 3)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 3)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 3)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 3)Selected table record numbers: 0 1 2 3 
Table name: _select_table_32, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0     Sammuel L.        Jackson             CS             40
              1          Billy        Jackson           Math             27
              2             Bo           Yang             CS             28
              3            Flo            Yao            Art             20

-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_32, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0     Sammuel L.        Jackson             CS             40
              1          Billy        Jackson           Math             27
              2             Bo           Yang             CS             28
              3            Flo            Yao            Art             20
basic_test: records selected: 2 3 1 0

>select * from student where lname>J and (major=CS or major=Art)
Command Function Fired! select * from student where lname>J and (major=CS or major=Art)
set_string Function Fired!
set string : Input string: select * from student where lname>J and (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where lname>J and (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where lname>J and (major=CS or major=Art)



















Tokens in vector: 
Processing token: select [Type: 16]
Processing token: * [Type: 6]
Processing token: from [Type: 16]
Processing token: student [Type: 16]
Processing token: where [Type: 16]
Processing token: lname [Type: 16]
Processing token: > [Type: 13]
Processing token: J [Type: 16]
Processing token: and [Type: 14]
Processing token: ( [Type: 10]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: CS [Type: 16]
Processing token: or [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: Art [Type: 16]
Processing token: ) [Type: 11]
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
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
[ALFA: where]
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: major]
[RelationalOperator: =]
[ALFA: CS]
[LogicalOperator: or]
[ALFA: major]
[RelationalOperator: =]
[ALFA: Art]
[RightParen: )]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
This token is: select
State = 0
last_state = :0
This token is: *
State = 1
last_state = :1
This token is: from
State = 2
last_state = :2
This token is: student
State = 3
last_state = :3
This token is: where
State = 4
last_state = :4
This token is: lname
State = 5
last_state = :5
This token is: >
State = 8
last_state = :8
This token is: J
State = 10
last_state = :10
This token is: and
State = 8
last_state = :8
This token is: (
State = 9
last_state = :9
This token is: major
State = 6
last_state = :6
This token is: =
State = 8
last_state = :8
This token is: CS
State = 10
last_state = :10
This token is: or
State = 8
last_state = :8
This token is: major
State = 9
last_state = :9
This token is: =
State = 8
last_state = :8
This token is: Art
State = 10
last_state = :10
This token is: )
State = 8
last_state = :8
Parse Tree Function Fired!
stuck here! _ptree size: 7
select
>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
-------------Table ctor 1 Done!-----
>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J and ( major = CS or major = Art )
Tokenize Function Fired!
Input string: lname > J and ( major = CS or major = Art ) 
STokenizer::set_string called with input: lname > J and ( major = CS or major = Art ) 



















Tokens in vector: 
Processing token: lname [Type: 16]
Processing token: > [Type: 13]
Processing token: J [Type: 16]
Processing token: and [Type: 14]
Processing token: ( [Type: 10]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: CS [Type: 16]
Processing token: or [Type: 14]
Processing token: major [Type: 16]
Processing token: = [Type: 13]
Processing token: Art [Type: 16]
Processing token: ) [Type: 11]
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
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: major]
[RelationalOperator: =]
[ALFA: CS]
[LogicalOperator: or]
[ALFA: major]
[RelationalOperator: =]
[ALFA: Art]
[RightParen: )]
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
右括号情况
Popped left paren from stack.
Postfix Expression: lname J > major CS = major Art = or and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
Processing '>': field_value = J
Matching record: Key = Jackson, Record = 2
Matching record: Key = Jackson, Record = 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 -------ResultSet::and_with fired!-------
_recnos:0 1 2 
Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----:
 student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 0)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 0)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 0)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 1)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 1)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 1)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size:4

Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
-----Open_fileRW Fired!-----:
 _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
--------------------------------------Debug here !!!
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 2)--------------------------------------Debug here !!!
Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 2)--------------------------------------Debug here !!!
Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)--------------------------------------Debug here !!!
Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)Selected table record numbers: 0 1 2 
Table name: _select_table_34, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40

-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_34, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----:
 student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
basic_test: records selected: 0 1 2
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (34 ms)
[----------] 1 test from SQL_BASIC (34 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (34 ms total)
[  PASSED  ] 1 test.
jwcomputer@JWs-MacBook-Pro 99_99_final % 