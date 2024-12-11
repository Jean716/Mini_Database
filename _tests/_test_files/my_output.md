jwcomputer@Mac 99_99_final % cmake --build build 
[ 28%] Built target main
[ 32%] Built target gtest
[ 60%] Built target basic_test
[ 88%] Built target testB
[ 92%] Built target gmock
[ 96%] Built target gmock_main
[100%] Built target gtest_main
jwcomputer@Mac 99_99_final % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
Build Keyword List Function Fired!
Keyword list built successfully!
Parser Default Constructor Fired!
Table default constructor fired!
SQL default constructor fired!
Table default constructor fired!
>make table employee fields  last,       first,         dep,      salary, year
Command Function Fired! make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year



















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
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
current token is ,
current token is salary
current token is ,
current token is year
This token is: make
State = 0
last_state = :0
Column Number: 1
State from table: 1
command is make!
This token is: table
State = 1
last_state = :1
Column Number: 2
State from table: 2
command is make!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is make!
This token is: fields
State = 3
last_state = :3
Column Number: 3
State from table: 4
command is make!
This token is: last
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: first
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: dep
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: salary
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: year
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
Parse Tree Function Fired!
make
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
Table default constructor fired!
Table default constructor fired!
basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
Command Function Fired! make table employee fields  last,       first,         dep,      salary, year
set_string Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year



















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
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
current token is ,
current token is salary
current token is ,
current token is year
This token is: make
State = 0
last_state = :0
Column Number: 1
State from table: 1
command is make!
This token is: table
State = 1
last_state = :1
Column Number: 2
State from table: 2
command is make!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is make!
This token is: fields
State = 3
last_state = :3
Column Number: 3
State from table: 4
command is make!
This token is: last
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: first
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: dep
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: salary
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: year
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
Parse Tree Function Fired!
make
    ⎴
    table_name: [employee, employee]
    command: [make, make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 10
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into employee values Blow,       Joe,           CS,       100000, 2018
Command Function Fired! insert into employee values Blow,       Joe,           CS,       100000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
STokenizer::set_string called with input: insert into employee values Blow,       Joe,           CS,       100000, 2018



















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
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is Joe
current token is ,
current token is CS
current token is ,
current token is 100000
current token is ,
current token is 2018
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Blow
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Joe
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 100000
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 2018
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018]
    table_name: [employee, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 10
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Command Function Fired! insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
set_string Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
STokenizer::set_string called with input: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016



















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
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is JoAnn
current token is ,
current token is Physics
current token is ,
current token is 200000
current token is ,
current token is 2016
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Blow
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: JoAnn
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Physics
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 200000
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 2016
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016]
    table_name: [employee, employee, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 10
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into employee values Johnson,    Jack,          HR,       150000, 2014
Command Function Fired! insert into employee values Johnson,    Jack,          HR,       150000, 2014
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson,    Jack,          HR,       150000, 2014



















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
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jack
current token is ,
current token is HR
current token is ,
current token is 150000
current token is ,
current token is 2014
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Johnson
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Jack
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: HR
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 150000
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 2014
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014]
    table_name: [employee, employee, employee, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 10
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Command Function Fired! insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
set_string Function Fired!
set string : Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018



















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
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jimmy
current token is ,
current token is Chemistry
current token is ,
current token is 140000
current token is ,
current token is 2018
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: employee
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Johnson
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Jimmy
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Chemistry
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 140000
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 2018
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018]
    table_name: [employee, employee, employee, employee, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 10
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>make table student fields  fname,          lname,    major,    age
Command Function Fired! make table student fields  fname,          lname,    major,    age
set_string Function Fired!
set string : Input string: make table student fields  fname,          lname,    major,    age
Tokenize Function Fired!
Input string: make table student fields  fname,          lname,    major,    age
STokenizer::set_string called with input: make table student fields  fname,          lname,    major,    age



















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
current token is fields
get_column: fields is a keyword.
current token is fname
current token is ,
current token is lname
current token is ,
current token is major
current token is ,
current token is age
This token is: make
State = 0
last_state = :0
Column Number: 1
State from table: 1
command is make!
This token is: table
State = 1
last_state = :1
Column Number: 2
State from table: 2
command is make!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is make!
This token is: fields
State = 3
last_state = :3
Column Number: 3
State from table: 4
command is make!
This token is: fname
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: lname
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: major
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: age
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018]
    table_name: [employee, employee, employee, employee, employee, employee, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into student values Flo,            Yao,        Art,    20
Command Function Fired! insert into student values Flo,            Yao,         Art,    20
set_string Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
STokenizer::set_string called with input: insert into student values Flo,            Yao,       Art,    20



















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
current token is values
get_column: values is a keyword.
current token is Flo
current token is ,
current token is Yao
current token is ,
current token is Art
current token is ,
current token is 20
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Flo
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Yao
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Art
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 20
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20]
    table_name: [employee, employee, employee, employee, employee, employee, student, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into student values Bo,                      Yang,      CS,             28
Command Function Fired! insert into student values Bo,               Yang,      CS,             28
set_string Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
STokenizer::set_string called with input: insert into student values Bo,                     Yang,      CS,             28



















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
current token is values
get_column: values is a keyword.
current token is Bo
current token is ,
current token is Yang
current token is ,
current token is CS
current token is ,
current token is 28
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Bo
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Yang
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 28
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into student values "Sammuel L.", Jackson,      CS,             40
Command Function Fired! insert into student values "Sammuel L.", Jackson,       CS,             40
set_string Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,    CS,             40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40



















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
current token is values
get_column: values is a keyword.
current token is Sammuel L.
current token is ,
current token is Jackson
current token is ,
current token is CS
current token is ,
current token is 40
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Sammuel L.
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Jackson
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: CS
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 40
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into student values "Billy",         Jackson,   Math,   27
Command Function Fired! insert into student values "Billy",          Jackson,   Math,   27
set_string Function Fired!
set string : Input string: insert into student values "Billy",       Jackson,   Math,   27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27



















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
current token is values
get_column: values is a keyword.
current token is Billy
current token is ,
current token is Jackson
current token is ,
current token is Math
current token is ,
current token is 27
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Billy
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Jackson
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Math
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 27
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
>insert into student values "Mary Ann",   Davis,        Math,   30
Command Function Fired! insert into student values "Mary Ann",   Davis, Math,   30
set_string Function Fired!
set string : Input string: insert into student values "Mary Ann",   Davis,      Math,   30
Tokenize Function Fired!
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30



















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
current token is values
get_column: values is a keyword.
current token is Mary Ann
current token is ,
current token is Davis
current token is ,
current token is Math
current token is ,
current token is 30
This token is: insert
State = 0
last_state = :0
Column Number: 4
State from table: 1
command is insert!
This token is: into
State = 1
last_state = :1
Column Number: 5
State from table: 2
command is insert!
This token is: student
State = 2
last_state = :2
Column Number: 11
State from table: 3
command is insert!
This token is: values
State = 3
last_state = :3
Column Number: 6
State from table: 4
command is insert!
This token is: Mary Ann
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Davis
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: Math
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
This token is: ,
State = 5
last_state = :5
This token is: 30
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is insert!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!



>select * from employee
Command Function Fired! select * from employee
set_string Function Fired!
set string : Input string: select * from employee
Tokenize Function Fired!
Input string: select * from employee
STokenizer::set_string called with input: select * from employee



















Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
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
current token is employee
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: employee
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    fields: [*]
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from employee
basic_test: records selected: 

>select last, first, age from employee
Command Function Fired! select last, first, age from employee
set_string Function Fired!
set string : Input string: select last, first, age from employee
Tokenize Function Fired!
Input string: select last, first, age from employee
STokenizer::set_string called with input: select last, first, age from employee



















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
current token is first
current token is ,
current token is age
current token is from
get_column: from is a keyword.
current token is employee
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: last
State = 1
last_state = :1
Column Number: 11
State from table: 2
command is select!
This token is: ,
State = 2
last_state = :2
This token is: first
State = 2
last_state = :2
Column Number: 11
State from table: 2
command is select!
This token is: ,
State = 2
last_state = :2
This token is: age
State = 2
last_state = :2
Column Number: 11
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: employee
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    fields: [*, last, first, age]
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select last, first, age from employee
basic_test: records selected: 

>select last from employee
Command Function Fired! select last from employee
set_string Function Fired!
set string : Input string: select last from employee
Tokenize Function Fired!
Input string: select last from employee
STokenizer::set_string called with input: select last from employee



















Tokens: 
[ALFA: select]
[ALFA: last]
[ALFA: from]
[ALFA: employee]
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
current token is employee
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: last
State = 1
last_state = :1
Column Number: 11
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: employee
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
Parse Tree Function Fired!
make
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee]
    ⎵
^
⎴
table_name: [employee, employee, employee]
    ^
    ⎴
    fields: [*, last, first, age, last]
    command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select]
    ⎵
command: [make]
⎵
    ^
    ⎴
    col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
    ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select last from employee
basic_test: records selected: 

>select * from employee where last = Johnson
Command Function Fired! select * from employee where last = Johnson
set_string Function Fired!
set string : Input string: select * from employee where last = Johnson
Tokenize Function Fired!
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson



















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
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
current token is Johnson
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: employee
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
This token is: where
State = 4
last_state = :4
Column Number: 10
State from table: 5
command is select!
This token is: last
State = 5
last_state = :5
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: Johnson
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *]
        condition: [last, =, Johnson]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from employee where last = Johnson
basic_test: records selected: 

>select * from employee where last=Blow and major="JoAnn"
Command Function Fired! select * from employee where last=Blow and major="JoAnn"
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
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
current token is Blow
current token is and
current token is major
current token is =
current token is JoAnn
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: employee
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
This token is: where
State = 4
last_state = :4
Column Number: 10
State from table: 5
command is select!
This token is: last
State = 5
last_state = :5
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: Blow
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: and
State = 8
last_state = :8
Column Number: 13
State from table: 9
command is select!
This token is: major
State = 9
last_state = :9
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: JoAnn
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes, yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee, employee]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *, *]
        condition: [last, =, Johnson, last, =, Blow, and, major, =, JoAnn]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from employee where last=Blow and major="JoAnn"
basic_test: records selected: 

>select * from student
Command Function Fired! select * from student
set_string Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student



















Tokens: 
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
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
current token is student
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: student
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes, yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee, employee, student]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *, *, *]
        condition: [last, =, Johnson, last, =, Blow, and, major, =, JoAnn]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from student
basic_test: records selected: 

>select * from student where (major=CS or major=Art)
Command Function Fired! select * from student where (major=CS or major=Art)
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
current token is student
current token is where
get_column: where is a keyword.
current token is (
current token is major
current token is =
current token is CS
current token is or
current token is major
current token is =
current token is Art
current token is )
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: student
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
This token is: where
State = 4
last_state = :4
Column Number: 10
State from table: 5
command is select!
This token is: (
State = 5
last_state = :5
Column Number: 15
State from table: 6
command is select!
This token is: major
State = 6
last_state = :6
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: CS
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: or
State = 8
last_state = :8
Column Number: 13
State from table: 9
command is select!
This token is: major
State = 9
last_state = :9
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: Art
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: )
State = 8
last_state = :8
Column Number: 16
State from table: 7
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes, yes, yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee, employee, student, student]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *, *, *, *]
        condition: [last, =, Johnson, last, =, Blow, and, major, =, JoAnn, (, major, =, CS, or, major, =, Art, )]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from student where (major=CS or major=Art)
basic_test: records selected: 

>select * from student where lname>J
Command Function Fired! select * from student where lname>J
set_string Function Fired!
set string : Input string: select * from student where lname>J
Tokenize Function Fired!
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J



















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
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: student
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
This token is: where
State = 4
last_state = :4
Column Number: 10
State from table: 5
command is select!
This token is: lname
State = 5
last_state = :5
Column Number: 11
State from table: 8
command is select!
This token is: >
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: J
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes, yes, yes, yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee, employee, student, student, student]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *, *, *, *, *]
        condition: [last, =, Johnson, last, =, Blow, and, major, =, JoAnn, (, major, =, CS, or, major, =, Art, ), lname, >, J]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from student where lname>J
basic_test: records selected: 

>select * from student where lname>J and (major=CS or major=Art)
Command Function Fired! select * from student where lname>J and (major=CS or major=Art)
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
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
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
This token is: select
State = 0
last_state = :0
Column Number: 7
State from table: 1
command is select!
This token is: *
State = 1
last_state = :1
Column Number: 8
State from table: 2
command is select!
This token is: from
State = 2
last_state = :2
Column Number: 9
State from table: 3
command is select!
This token is: student
State = 3
last_state = :3
Column Number: 11
State from table: 4
command is select!
This token is: where
State = 4
last_state = :4
Column Number: 10
State from table: 5
command is select!
This token is: lname
State = 5
last_state = :5
Column Number: 11
State from table: 8
command is select!
This token is: >
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: J
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: and
State = 8
last_state = :8
Column Number: 13
State from table: 9
command is select!
This token is: (
State = 9
last_state = :9
Column Number: 15
State from table: 6
command is select!
This token is: major
State = 6
last_state = :6
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: CS
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: or
State = 8
last_state = :8
Column Number: 13
State from table: 9
command is select!
This token is: major
State = 9
last_state = :9
Column Number: 11
State from table: 8
command is select!
This token is: =
State = 8
last_state = :8
Column Number: 12
State from table: 10
command is select!
This token is: Art
State = 10
last_state = :10
Column Number: 11
State from table: 8
command is select!
This token is: )
State = 8
last_state = :8
Column Number: 16
State from table: 7
command is select!
Parse Tree Function Fired!
make
        ⎴
        where: [yes, yes, yes, yes, yes]
        values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
        ⎵
    ⎴
    values: [Blow, Joe, CS, 100000, 2018, Blow, JoAnn, Physics, 200000, 2016, Johnson, Jack, HR, 150000, 2014, Johnson, Jimmy, Chemistry, 140000, 2018, Flo, Yao, Art, 20, Bo, Yang, CS, 28, Sammuel L., Jackson, CS, 40, Billy, Jackson, Math, 27, Mary Ann, Davis, Math, 30]
    ⎵
        ^
        ⎴
        table_name: [employee, employee, employee, employee, employee, employee, student, student, student, student, student, student, employee, employee, employee, employee, employee, student, student, student, student]
        ⎵
^
⎴
table_name: [employee, employee, employee]
⎵
        ^
        ⎴
        fields: [*, last, first, age, last, *, *, *, *, *, *]
        condition: [last, =, Johnson, last, =, Blow, and, major, =, JoAnn, (, major, =, CS, or, major, =, Art, ), lname, >, J, lname, >, J, and, (, major, =, CS, or, major, =, Art, )]
        ⎵
    ⎴
    condition: []
        ^
        ⎴
        command: [make, make, insert, insert, insert, insert, make, insert, insert, insert, insert, insert, select, select, select, select, select, select, select, select, select]
        ⎵
    command: [make]
    ⎵
        ^
        ⎴
        col : [last, first, dep, salary, year, last, first, dep, salary, year, fname, lname, major, age]
        ⎵


>>> Parsed command: make
>>> ------>> cmd[0] = Make----------------
Table already exists. Overwriting: employee
>>> Creating table: employee with fields: last first dep salary year last first dep salary year fname lname major age 
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 14
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
Index 5 initialized for field: last
Index 6 initialized for field: first
Index 7 initialized for field: dep
Index 8 initialized for field: salary
Index 9 initialized for field: year
Index 10 initialized for field: fname
Index 11 initialized for field: lname
Index 12 initialized for field: major
Index 13 initialized for field: age
-----------------------------------------------
Table default constructor fired!
Table default constructor fired!
cmd = select * from student where lname>J and (major=CS or major=Art)
basic_test: records selected: 
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (30 ms)
[----------] 1 test from SQL_BASIC (30 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (30 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac 99_99_final % 