jwcomputer@Mac Final_Dec_20 % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
----- BEGIN TEST --------
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295888
Cleared BTree node at address: 0x16d295888
Calling destructor for BTree at address: 0x16d2957e8
Cleared BTree node at address: 0x16d2957e8
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295888
Cleared BTree node at address: 0x16d295888
Calling destructor for BTree at address: 0x16d2957e8
Cleared BTree node at address: 0x16d2957e8
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295888
Cleared BTree node at address: 0x16d295888
Calling destructor for BTree at address: 0x16d2957e8
Cleared BTree node at address: 0x16d2957e8
Build Keyword List Function Fired!
Cleared BTree node at address: 0x11de08070
Cleared BTree node at address: 0x11de083c0
Cleared BTree node at address: 0x11de08460
Cleared BTree node at address: 0x11de08500
Cleared BTree node at address: 0x11de085a0
Cleared BTree node at address: 0x11de08640
Cleared BTree node at address: 0x11de08b40
Cleared BTree node at address: 0x11de08be0
Cleared BTree node at address: 0x11de08c80
Cleared BTree node at address: 0x11de08d20
Cleared BTree node at address: 0x11de08dc0
Cleared BTree node at address: 0x11de08e60
Cleared BTree node at address: 0x11de08f00
Cleared BTree node at address: 0x11de08fa0
Cleared BTree node at address: 0x11de09040
Cleared BTree node at address: 0x11de090e0
Cleared BTree node at address: 0x11de09180
Cleared BTree node at address: 0x11de09220
Cleared BTree node at address: 0x11de092c0
Keyword list built successfully!
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.

----- SQL object initialized. -----

Table default constructor fired!
Default table file created: default_table.tbl

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
Cleared BTree node at address: 0x11df040f0
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Cleared BTree node at address: 0x11df04370
Cleared BTree node at address: 0x11df04410
Cleared BTree node at address: 0x11df044b0
Cleared BTree node at address: 0x11df04550
Cleared BTree node at address: 0x11df045f0
current token is ,
current token is salary
current token is ,
current token is year
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11df04410
Calling destructor for BTree at address: 0x11df04410
Cleared BTree node at address: 0x11df04410
Cleared BTree node at address: 0x11df044b0
Calling destructor for BTree at address: 0x11df044b0
Cleared BTree node at address: 0x11df044b0
Cleared BTree node at address: 0x11df04370
Calling destructor for BTree at address: 0x11df04370
Cleared BTree node at address: 0x11df04370
Cleared BTree node at address: 0x11df04550
Calling destructor for BTree at address: 0x11df04550
Cleared BTree node at address: 0x11df04550
Cleared BTree node at address: 0x11df045f0
Calling destructor for BTree at address: 0x11df045f0
Cleared BTree node at address: 0x11df045f0
Cleared BTree node at address: 0x11df04730
Calling destructor for BTree at address: 0x11df04730
Cleared BTree node at address: 0x11df04730
Cleared BTree node at address: 0x11df04690
Calling destructor for BTree at address: 0x11df04690
Cleared BTree node at address: 0x11df04690
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295838
Cleared BTree node at address: 0x16d295838
Calling destructor for BTree at address: 0x16d295798
Cleared BTree node at address: 0x16d295798
Calling destructor for BTree at address: 0x16d295658
Cleared BTree node at address: 0x16d295658
Calling destructor for BTree at address: 0x16d2955b8
Cleared BTree node at address: 0x16d2955b8
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11f8042e0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Cleared BTree node at address: 0x16d296538
Cleared BTree node at address: 0x16d2965d8
Calling destructor for BTree at address: 0x16d294830
Cleared BTree node at address: 0x16d294830
Calling destructor for BTree at address: 0x16d294790
Cleared BTree node at address: 0x11f904b40
Calling destructor for BTree at address: 0x11f904b40
Cleared BTree node at address: 0x11f904b40
Cleared BTree node at address: 0x11f904be0
Calling destructor for BTree at address: 0x11f904be0
Cleared BTree node at address: 0x11f904be0
Cleared BTree node at address: 0x11f904c80
Calling destructor for BTree at address: 0x11f904c80
Cleared BTree node at address: 0x11f904c80
Cleared BTree node at address: 0x16d294790
Calling destructor for BTree at address: 0x16d294ab0
Cleared BTree node at address: 0x16d294ab0
Calling destructor for BTree at address: 0x16d294a10
Cleared BTree node at address: 0x11f9044f0
Calling destructor for BTree at address: 0x11f9044f0
Cleared BTree node at address: 0x11f9044f0
Cleared BTree node at address: 0x11f904590
Calling destructor for BTree at address: 0x11f904590
Cleared BTree node at address: 0x11f904590
Cleared BTree node at address: 0x11f904630
Calling destructor for BTree at address: 0x11f904630
Cleared BTree node at address: 0x11f904630
Cleared BTree node at address: 0x16d294a10
Calling destructor for BTree at address: 0x16d295470
Cleared BTree node at address: 0x16d295470
Calling destructor for BTree at address: 0x16d2953d0
Cleared BTree node at address: 0x11f8042e0
Calling destructor for BTree at address: 0x11f8042e0
Cleared BTree node at address: 0x11f8042e0
Cleared BTree node at address: 0x11f804380
Calling destructor for BTree at address: 0x11f804380
Cleared BTree node at address: 0x11f804380
Cleared BTree node at address: 0x11f804150
Calling destructor for BTree at address: 0x11f804150
Cleared BTree node at address: 0x11f804150
Cleared BTree node at address: 0x16d2953d0
>>> Table created successfully: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296210
Cleared BTree node at address: 0x16d296210
Calling destructor for BTree at address: 0x16d296170
Cleared BTree node at address: 0x11f9044f0
Calling destructor for BTree at address: 0x11f9044f0
Cleared BTree node at address: 0x11f9044f0
Cleared BTree node at address: 0x11f904590
Calling destructor for BTree at address: 0x11f904590
Cleared BTree node at address: 0x11f904590
Cleared BTree node at address: 0x11f904630
Calling destructor for BTree at address: 0x11f904630
Cleared BTree node at address: 0x11f904630
Cleared BTree node at address: 0x16d296170
basic_test: table created.


----- Table contents after table creation: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11f904b00
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Cleared BTree node at address: 0x11f905410
Cleared BTree node at address: 0x11f9054b0
Cleared BTree node at address: 0x11f905550
Cleared BTree node at address: 0x11f9055f0
Cleared BTree node at address: 0x11f905690
current token is ,
current token is salary
current token is ,
current token is year
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f9054b0
Calling destructor for BTree at address: 0x11f9054b0
Cleared BTree node at address: 0x11f9054b0
Cleared BTree node at address: 0x11f905550
Calling destructor for BTree at address: 0x11f905550
Cleared BTree node at address: 0x11f905550
Cleared BTree node at address: 0x11f905410
Calling destructor for BTree at address: 0x11f905410
Cleared BTree node at address: 0x11f905410
Cleared BTree node at address: 0x11f9055f0
Calling destructor for BTree at address: 0x11f9055f0
Cleared BTree node at address: 0x11f9055f0
Cleared BTree node at address: 0x11f905690
Calling destructor for BTree at address: 0x11f905690
Cleared BTree node at address: 0x11f905690
Cleared BTree node at address: 0x11f9057d0
Calling destructor for BTree at address: 0x11f9057d0
Cleared BTree node at address: 0x11f9057d0
Cleared BTree node at address: 0x11f905730
Calling destructor for BTree at address: 0x11f905730
Cleared BTree node at address: 0x11f905730
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295838
Cleared BTree node at address: 0x16d295838
Calling destructor for BTree at address: 0x16d295798
Cleared BTree node at address: 0x16d295798
Calling destructor for BTree at address: 0x16d295658
Cleared BTree node at address: 0x16d295658
Calling destructor for BTree at address: 0x16d2955b8
Cleared BTree node at address: 0x16d2955b8
>>> Table already exists. Overwriting: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling remove: [employee: Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------
]

Calling loose_remove: [employee: Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------
]

Index i: 0, Found: true
Case b: Leaf node and entry found. Deleting entry.
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294478
Cleared BTree node at address: 0x16d294478
Calling destructor for BTree at address: 0x16d2943d8
Cleared BTree node at address: 0x16d2943d8
Cleared BTree node at address: 0x16d2945d0
Cleared BTree node at address: 0x16d294670
Deleting last/only element: employee: Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------

Calling destructor for BTree at address: 0x16d294670
Cleared BTree node at address: 0x16d294670
Calling destructor for BTree at address: 0x16d2945d0
Cleared BTree node at address: 0x11f9055e0
Calling destructor for BTree at address: 0x11f9055e0
Cleared BTree node at address: 0x11f9055e0
Cleared BTree node at address: 0x11f905680
Calling destructor for BTree at address: 0x11f905680
Cleared BTree node at address: 0x11f905680
Cleared BTree node at address: 0x11f905720
Calling destructor for BTree at address: 0x11f905720
Cleared BTree node at address: 0x11f905720
Cleared BTree node at address: 0x16d2945d0
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11f905ad0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Cleared BTree node at address: 0x11f905190
Calling destructor for BTree at address: 0x11f905190
Cleared BTree node at address: 0x11f905190
Cleared BTree node at address: 0x11f905230
Calling destructor for BTree at address: 0x11f905230
Cleared BTree node at address: 0x11f905230
Cleared BTree node at address: 0x11f9052d0
Calling destructor for BTree at address: 0x11f9052d0
Cleared BTree node at address: 0x11f9052d0
Cleared BTree node at address: 0x16d296538
Cleared BTree node at address: 0x16d2965d8
Calling destructor for BTree at address: 0x16d294830
Cleared BTree node at address: 0x16d294830
Calling destructor for BTree at address: 0x16d294790
Cleared BTree node at address: 0x11f9065d0
Calling destructor for BTree at address: 0x11f9065d0
Cleared BTree node at address: 0x11f9065d0
Cleared BTree node at address: 0x11f906670
Calling destructor for BTree at address: 0x11f906670
Cleared BTree node at address: 0x11f906670
Cleared BTree node at address: 0x11f906710
Calling destructor for BTree at address: 0x11f906710
Cleared BTree node at address: 0x11f906710
Cleared BTree node at address: 0x16d294790
Calling destructor for BTree at address: 0x16d294ab0
Cleared BTree node at address: 0x16d294ab0
Calling destructor for BTree at address: 0x16d294a10
Cleared BTree node at address: 0x11f9057d0
Calling destructor for BTree at address: 0x11f9057d0
Cleared BTree node at address: 0x11f9057d0
Cleared BTree node at address: 0x11f906000
Calling destructor for BTree at address: 0x11f906000
Cleared BTree node at address: 0x11f906000
Cleared BTree node at address: 0x11f9060a0
Calling destructor for BTree at address: 0x11f9060a0
Cleared BTree node at address: 0x11f9060a0
Cleared BTree node at address: 0x16d294a10
Calling destructor for BTree at address: 0x16d295470
Cleared BTree node at address: 0x16d295470
Calling destructor for BTree at address: 0x16d2953d0
Cleared BTree node at address: 0x11f905ad0
Calling destructor for BTree at address: 0x11f905ad0
Cleared BTree node at address: 0x11f905ad0
Cleared BTree node at address: 0x11f905b70
Calling destructor for BTree at address: 0x11f905b70
Cleared BTree node at address: 0x11f905b70
Cleared BTree node at address: 0x11f9056b0
Calling destructor for BTree at address: 0x11f9056b0
Cleared BTree node at address: 0x11f9056b0
Cleared BTree node at address: 0x16d2953d0
>>> Table created successfully: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11f905230
Calling destructor for BTree at address: 0x11f905230
Cleared BTree node at address: 0x11f905230
Cleared BTree node at address: 0x11f905680
Calling destructor for BTree at address: 0x11f905680
Cleared BTree node at address: 0x11f905680
Cleared BTree node at address: 0x11f905720
Calling destructor for BTree at address: 0x11f905720
Cleared BTree node at address: 0x11f905720
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [make table employee fields  last,       first,         dep,      salary, year]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11f905d00
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is Joe
current token is ,
current token is CS
Cleared BTree node at address: 0x11f905f80
Cleared BTree node at address: 0x11f906020
Cleared BTree node at address: 0x11f9060c0
Cleared BTree node at address: 0x11f906160
Cleared BTree node at address: 0x11f906200
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f906020
Calling destructor for BTree at address: 0x11f906020
Cleared BTree node at address: 0x11f906020
Cleared BTree node at address: 0x11f906340
Calling destructor for BTree at address: 0x11f906340
Cleared BTree node at address: 0x11f906340
Cleared BTree node at address: 0x11f9060c0
Calling destructor for BTree at address: 0x11f9060c0
Cleared BTree node at address: 0x11f9060c0
Cleared BTree node at address: 0x11f905f80
Calling destructor for BTree at address: 0x11f905f80
Cleared BTree node at address: 0x11f905f80
Cleared BTree node at address: 0x11f906160
Calling destructor for BTree at address: 0x11f906160
Cleared BTree node at address: 0x11f906160
Cleared BTree node at address: 0x11f906200
Calling destructor for BTree at address: 0x11f906200
Cleared BTree node at address: 0x11f906200
Cleared BTree node at address: 0x11f9062a0
Calling destructor for BTree at address: 0x11f9062a0
Cleared BTree node at address: 0x11f9062a0
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 0)>>> Insert completed for table: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11f9072a0
Calling destructor for BTree at address: 0x11f9072a0
Cleared BTree node at address: 0x11f9072a0
Cleared BTree node at address: 0x11f907340
Calling destructor for BTree at address: 0x11f907340
Cleared BTree node at address: 0x11f907340
Cleared BTree node at address: 0x11f9073e0
Calling destructor for BTree at address: 0x11f9073e0
Cleared BTree node at address: 0x11f9073e0
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into employee values Blow,       Joe,           CS,       100000, 2018]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11de09d30
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is JoAnn
current token is ,
current token is Physics
Cleared BTree node at address: 0x11de0a000
Cleared BTree node at address: 0x11de0a0a0
Cleared BTree node at address: 0x11de0a140
Cleared BTree node at address: 0x11de0a1e0
Cleared BTree node at address: 0x11de0a280
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11de0a0a0
Calling destructor for BTree at address: 0x11de0a0a0
Cleared BTree node at address: 0x11de0a0a0
Cleared BTree node at address: 0x11de0a3c0
Calling destructor for BTree at address: 0x11de0a3c0
Cleared BTree node at address: 0x11de0a3c0
Cleared BTree node at address: 0x11de0a140
Calling destructor for BTree at address: 0x11de0a140
Cleared BTree node at address: 0x11de0a140
Cleared BTree node at address: 0x11de0a000
Calling destructor for BTree at address: 0x11de0a000
Cleared BTree node at address: 0x11de0a000
Cleared BTree node at address: 0x11de0a1e0
Calling destructor for BTree at address: 0x11de0a1e0
Cleared BTree node at address: 0x11de0a1e0
Cleared BTree node at address: 0x11de0a280
Calling destructor for BTree at address: 0x11de0a280
Cleared BTree node at address: 0x11de0a280
Cleared BTree node at address: 0x11de0a320
Calling destructor for BTree at address: 0x11de0a320
Cleared BTree node at address: 0x11de0a320
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 1)>>> Insert completed for table: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11de0be30
Calling destructor for BTree at address: 0x11de0be30
Cleared BTree node at address: 0x11de0be30
Cleared BTree node at address: 0x11de0bed0
Calling destructor for BTree at address: 0x11de0bed0
Cleared BTree node at address: 0x11de0bed0
Cleared BTree node at address: 0x11de0bf70
Calling destructor for BTree at address: 0x11de0bf70
Cleared BTree node at address: 0x11de0bf70
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into employee values Blow,       JoAnn,         Physics,  200000, 2016]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11de0be60
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jack
current token is ,
current token is HR
Cleared BTree node at address: 0x11de0c150
Cleared BTree node at address: 0x11de0c1f0
Cleared BTree node at address: 0x11de0c290
Cleared BTree node at address: 0x11de0c330
Cleared BTree node at address: 0x11de0c3d0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11de0c1f0
Calling destructor for BTree at address: 0x11de0c1f0
Cleared BTree node at address: 0x11de0c1f0
Cleared BTree node at address: 0x11de0c510
Calling destructor for BTree at address: 0x11de0c510
Cleared BTree node at address: 0x11de0c510
Cleared BTree node at address: 0x11de0c290
Calling destructor for BTree at address: 0x11de0c290
Cleared BTree node at address: 0x11de0c290
Cleared BTree node at address: 0x11de0c150
Calling destructor for BTree at address: 0x11de0c150
Cleared BTree node at address: 0x11de0c150
Cleared BTree node at address: 0x11de0c330
Calling destructor for BTree at address: 0x11de0c330
Cleared BTree node at address: 0x11de0c330
Cleared BTree node at address: 0x11de0c3d0
Calling destructor for BTree at address: 0x11de0c3d0
Cleared BTree node at address: 0x11de0c3d0
Cleared BTree node at address: 0x11de0c470
Calling destructor for BTree at address: 0x11de0c470
Cleared BTree node at address: 0x11de0c470
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 2)>>> Insert completed for table: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11de0f5e0
Calling destructor for BTree at address: 0x11de0f5e0
Cleared BTree node at address: 0x11de0f5e0
Cleared BTree node at address: 0x11de0f680
Calling destructor for BTree at address: 0x11de0f680
Cleared BTree node at address: 0x11de0f680
Cleared BTree node at address: 0x11de0f720
Calling destructor for BTree at address: 0x11de0f720
Cleared BTree node at address: 0x11de0f720
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into employee values Johnson,    Jack,          HR,       150000, 2014]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11f804150
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jimmy
current token is ,
current token is Chemistry
Cleared BTree node at address: 0x11fa04120
Cleared BTree node at address: 0x11fa041c0
Cleared BTree node at address: 0x11fa04260
Cleared BTree node at address: 0x11fa04300
Cleared BTree node at address: 0x11fa043a0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fa041c0
Calling destructor for BTree at address: 0x11fa041c0
Cleared BTree node at address: 0x11fa041c0
Cleared BTree node at address: 0x11fa044e0
Calling destructor for BTree at address: 0x11fa044e0
Cleared BTree node at address: 0x11fa044e0
Cleared BTree node at address: 0x11fa04260
Calling destructor for BTree at address: 0x11fa04260
Cleared BTree node at address: 0x11fa04260
Cleared BTree node at address: 0x11fa04120
Calling destructor for BTree at address: 0x11fa04120
Cleared BTree node at address: 0x11fa04120
Cleared BTree node at address: 0x11fa04300
Calling destructor for BTree at address: 0x11fa04300
Cleared BTree node at address: 0x11fa04300
Cleared BTree node at address: 0x11fa043a0
Calling destructor for BTree at address: 0x11fa043a0
Cleared BTree node at address: 0x11fa043a0
Cleared BTree node at address: 0x11fa04440
Calling destructor for BTree at address: 0x11fa04440
Cleared BTree node at address: 0x11fa04440
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 3)>>> Insert completed for table: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11fb04ce0
Calling destructor for BTree at address: 0x11fb04ce0
Cleared BTree node at address: 0x11fb04ce0
Cleared BTree node at address: 0x11fb04d80
Calling destructor for BTree at address: 0x11fb04d80
Cleared BTree node at address: 0x11fb04d80
Cleared BTree node at address: 0x11fb04e20
Calling destructor for BTree at address: 0x11fb04e20
Cleared BTree node at address: 0x11fb04e20
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11fc04960
current token is fields
get_column: fields is a keyword.
current token is fname
current token is ,
current token is lname
current token is ,
current token is major
Cleared BTree node at address: 0x11fc04be0
Cleared BTree node at address: 0x11fc04c80
Cleared BTree node at address: 0x11fc04d20
Cleared BTree node at address: 0x11fc04dc0
Cleared BTree node at address: 0x11fc04e60
current token is ,
current token is age
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fc04c80
Calling destructor for BTree at address: 0x11fc04c80
Cleared BTree node at address: 0x11fc04c80
Cleared BTree node at address: 0x11fc04fa0
Calling destructor for BTree at address: 0x11fc04fa0
Cleared BTree node at address: 0x11fc04fa0
Cleared BTree node at address: 0x11fc04d20
Calling destructor for BTree at address: 0x11fc04d20
Cleared BTree node at address: 0x11fc04d20
Cleared BTree node at address: 0x11fc04be0
Calling destructor for BTree at address: 0x11fc04be0
Cleared BTree node at address: 0x11fc04be0
Cleared BTree node at address: 0x11fc04dc0
Calling destructor for BTree at address: 0x11fc04dc0
Cleared BTree node at address: 0x11fc04dc0
Cleared BTree node at address: 0x11fc04e60
Calling destructor for BTree at address: 0x11fc04e60
Cleared BTree node at address: 0x11fc04e60
Cleared BTree node at address: 0x11fc04f00
Calling destructor for BTree at address: 0x11fc04f00
Cleared BTree node at address: 0x11fc04f00
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d295838
Cleared BTree node at address: 0x16d295838
Calling destructor for BTree at address: 0x16d295798
Cleared BTree node at address: 0x16d295798
Calling destructor for BTree at address: 0x16d295658
Cleared BTree node at address: 0x16d295658
Calling destructor for BTree at address: 0x16d2955b8
Cleared BTree node at address: 0x16d2955b8
>>> Creating table: student with fields: fname lname major age 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11de0ee00
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
Cleared BTree node at address: 0x16d296718
Cleared BTree node at address: 0x16d2967b8
Calling destructor for BTree at address: 0x16d294830
Cleared BTree node at address: 0x16d294830
Calling destructor for BTree at address: 0x16d294790
Cleared BTree node at address: 0x11de0f620
Calling destructor for BTree at address: 0x11de0f620
Cleared BTree node at address: 0x11de0f620
Cleared BTree node at address: 0x11de0f6c0
Calling destructor for BTree at address: 0x11de0f6c0
Cleared BTree node at address: 0x11de0f6c0
Cleared BTree node at address: 0x16d294790
Calling destructor for BTree at address: 0x16d294ab0
Cleared BTree node at address: 0x16d294ab0
Calling destructor for BTree at address: 0x16d294a10
Cleared BTree node at address: 0x11de0ecd0
Calling destructor for BTree at address: 0x11de0ecd0
Cleared BTree node at address: 0x11de0ecd0
Cleared BTree node at address: 0x11de0f580
Calling destructor for BTree at address: 0x11de0f580
Cleared BTree node at address: 0x11de0f580
Cleared BTree node at address: 0x16d294a10
Calling destructor for BTree at address: 0x16d295470
Cleared BTree node at address: 0x16d295470
Calling destructor for BTree at address: 0x16d2953d0
Cleared BTree node at address: 0x11de0ee00
Calling destructor for BTree at address: 0x11de0ee00
Cleared BTree node at address: 0x11de0ee00
Cleared BTree node at address: 0x11de0eea0
Calling destructor for BTree at address: 0x11de0eea0
Cleared BTree node at address: 0x11de0eea0
Cleared BTree node at address: 0x16d2953d0
>>> Table created successfully: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11de0eba0
Calling destructor for BTree at address: 0x11de0eba0
Cleared BTree node at address: 0x11de0eba0
Cleared BTree node at address: 0x11de0ec40
Calling destructor for BTree at address: 0x11de0ec40
Cleared BTree node at address: 0x11de0ec40
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [make table student fields  fname,          lname,    major,    age]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11de0f000
current token is values
get_column: values is a keyword.
current token is Flo
current token is ,
current token is Yao
current token is ,
current token is Art
current token is ,
current token is 20
Cleared BTree node at address: 0x11de0f280
Cleared BTree node at address: 0x11de0f320
Cleared BTree node at address: 0x11de0f3c0
Cleared BTree node at address: 0x11de0f460
Cleared BTree node at address: 0x11de0f500
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11de0f320
Calling destructor for BTree at address: 0x11de0f320
Cleared BTree node at address: 0x11de0f320
Cleared BTree node at address: 0x11de0f3c0
Calling destructor for BTree at address: 0x11de0f3c0
Cleared BTree node at address: 0x11de0f3c0
Cleared BTree node at address: 0x11de0f280
Calling destructor for BTree at address: 0x11de0f280
Cleared BTree node at address: 0x11de0f280
Cleared BTree node at address: 0x11de0f460
Calling destructor for BTree at address: 0x11de0f460
Cleared BTree node at address: 0x11de0f460
Cleared BTree node at address: 0x11de0f500
Calling destructor for BTree at address: 0x11de0f500
Cleared BTree node at address: 0x11de0f500
Cleared BTree node at address: 0x11de0f5a0
Calling destructor for BTree at address: 0x11de0f5a0
Cleared BTree node at address: 0x11de0f5a0
Cleared BTree node at address: 0x16d294a50
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
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)>>> Insert completed for table: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11de10c30
Calling destructor for BTree at address: 0x11de10c30
Cleared BTree node at address: 0x11de10c30
Cleared BTree node at address: 0x11de10cd0
Calling destructor for BTree at address: 0x11de10cd0
Cleared BTree node at address: 0x11de10cd0
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into student values Flo,            Yao,     Art,    20]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11fd040e0
current token is values
get_column: values is a keyword.
current token is Bo
current token is ,
current token is Yang
current token is ,
current token is CS
Cleared BTree node at address: 0x11fd04360
Cleared BTree node at address: 0x11fd04400
Cleared BTree node at address: 0x11fd044a0
Cleared BTree node at address: 0x11fd04540
Cleared BTree node at address: 0x11fd045e0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fd04400
Calling destructor for BTree at address: 0x11fd04400
Cleared BTree node at address: 0x11fd04400
Cleared BTree node at address: 0x11fd044a0
Calling destructor for BTree at address: 0x11fd044a0
Cleared BTree node at address: 0x11fd044a0
Cleared BTree node at address: 0x11fd04360
Calling destructor for BTree at address: 0x11fd04360
Cleared BTree node at address: 0x11fd04360
Cleared BTree node at address: 0x11fd04540
Calling destructor for BTree at address: 0x11fd04540
Cleared BTree node at address: 0x11fd04540
Cleared BTree node at address: 0x11fd045e0
Calling destructor for BTree at address: 0x11fd045e0
Cleared BTree node at address: 0x11fd045e0
Cleared BTree node at address: 0x11fd04680
Calling destructor for BTree at address: 0x11fd04680
Cleared BTree node at address: 0x11fd04680
Cleared BTree node at address: 0x16d294a50
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
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)>>> Insert completed for table: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11fd060b0
Calling destructor for BTree at address: 0x11fd060b0
Cleared BTree node at address: 0x11fd060b0
Cleared BTree node at address: 0x11fd06150
Calling destructor for BTree at address: 0x11fd06150
Cleared BTree node at address: 0x11fd06150
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into student values Bo,                   Yang,      CS,             28]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11fd04710
current token is values
get_column: values is a keyword.
current token is Sammuel L.
current token is ,
current token is Jackson
current token is ,
current token is CS
Cleared BTree node at address: 0x11fd04540
Cleared BTree node at address: 0x11fd05cc0
Cleared BTree node at address: 0x11fd05d60
Cleared BTree node at address: 0x11fd05e00
Cleared BTree node at address: 0x11fd05ea0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fd05cc0
Calling destructor for BTree at address: 0x11fd05cc0
Cleared BTree node at address: 0x11fd05cc0
Cleared BTree node at address: 0x11fd05d60
Calling destructor for BTree at address: 0x11fd05d60
Cleared BTree node at address: 0x11fd05d60
Cleared BTree node at address: 0x11fd04540
Calling destructor for BTree at address: 0x11fd04540
Cleared BTree node at address: 0x11fd04540
Cleared BTree node at address: 0x11fd05e00
Calling destructor for BTree at address: 0x11fd05e00
Cleared BTree node at address: 0x11fd05e00
Cleared BTree node at address: 0x11fd05ea0
Calling destructor for BTree at address: 0x11fd05ea0
Cleared BTree node at address: 0x11fd05ea0
Cleared BTree node at address: 0x11fd05f40
Calling destructor for BTree at address: 0x11fd05f40
Cleared BTree node at address: 0x11fd05f40
Cleared BTree node at address: 0x16d294a50
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
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)>>> Insert completed for table: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11fd08c60
Calling destructor for BTree at address: 0x11fd08c60
Cleared BTree node at address: 0x11fd08c60
Cleared BTree node at address: 0x11fd08d00
Calling destructor for BTree at address: 0x11fd08d00
Cleared BTree node at address: 0x11fd08d00
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into student values "Sammuel L.", Jackson,   CS,             40]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11fd085b0
current token is values
get_column: values is a keyword.
current token is Billy
current token is ,
current token is Jackson
current token is ,
current token is Math
Cleared BTree node at address: 0x11fd08830
Cleared BTree node at address: 0x11fd088d0
Cleared BTree node at address: 0x11fd08970
Cleared BTree node at address: 0x11fd08a10
Cleared BTree node at address: 0x11fd08ab0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fd088d0
Calling destructor for BTree at address: 0x11fd088d0
Cleared BTree node at address: 0x11fd088d0
Cleared BTree node at address: 0x11fd08970
Calling destructor for BTree at address: 0x11fd08970
Cleared BTree node at address: 0x11fd08970
Cleared BTree node at address: 0x11fd08830
Calling destructor for BTree at address: 0x11fd08830
Cleared BTree node at address: 0x11fd08830
Cleared BTree node at address: 0x11fd08a10
Calling destructor for BTree at address: 0x11fd08a10
Cleared BTree node at address: 0x11fd08a10
Cleared BTree node at address: 0x11fd08ab0
Calling destructor for BTree at address: 0x11fd08ab0
Cleared BTree node at address: 0x11fd08ab0
Cleared BTree node at address: 0x11fd08b50
Calling destructor for BTree at address: 0x11fd08b50
Cleared BTree node at address: 0x11fd08b50
Cleared BTree node at address: 0x16d294a50
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
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 3
_last_record: 2
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 3)>>> Insert completed for table: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11fc083d0
Calling destructor for BTree at address: 0x11fc083d0
Cleared BTree node at address: 0x11fc083d0
Cleared BTree node at address: 0x11fc08470
Calling destructor for BTree at address: 0x11fc08470
Cleared BTree node at address: 0x11fc08470
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into student values "Billy",      Jackson,   Math,   27]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

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
Cleared BTree node at address: 0x11fc07f50
current token is values
get_column: values is a keyword.
current token is Mary Ann
current token is ,
current token is Davis
current token is ,
current token is Math
current token is ,
current token is 30
Cleared BTree node at address: 0x11fc081d0
Cleared BTree node at address: 0x11fc08270
Cleared BTree node at address: 0x11fc08310
Cleared BTree node at address: 0x11fc083b0
Cleared BTree node at address: 0x11fc08450
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fc08270
Calling destructor for BTree at address: 0x11fc08270
Cleared BTree node at address: 0x11fc08270
Cleared BTree node at address: 0x11fc08310
Calling destructor for BTree at address: 0x11fc08310
Cleared BTree node at address: 0x11fc08310
Cleared BTree node at address: 0x11fc081d0
Calling destructor for BTree at address: 0x11fc081d0
Cleared BTree node at address: 0x11fc081d0
Cleared BTree node at address: 0x11fc083b0
Calling destructor for BTree at address: 0x11fc083b0
Cleared BTree node at address: 0x11fc083b0
Cleared BTree node at address: 0x11fc08450
Calling destructor for BTree at address: 0x11fc08450
Cleared BTree node at address: 0x11fc08450
Cleared BTree node at address: 0x11fc08510
Calling destructor for BTree at address: 0x11fc08510
Cleared BTree node at address: 0x11fc08510
Cleared BTree node at address: 0x16d294a50
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
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 4
_last_record: 3
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
3              Billy          Jackson        Math           27             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18

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
Inserting field value: 30 for field: age at index: 3Inserted into _indices[3]: (30, 4)>>> Insert completed for table: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
Calling destructor for BTree at address: 0x16d296040
Cleared BTree node at address: 0x16d296040
Calling destructor for BTree at address: 0x16d295fa0
Cleared BTree node at address: 0x11de14c50
Calling destructor for BTree at address: 0x11de14c50
Cleared BTree node at address: 0x11de14c50
Cleared BTree node at address: 0x11de14cf0
Calling destructor for BTree at address: 0x11de14cf0
Cleared BTree node at address: 0x11de14cf0
Cleared BTree node at address: 0x16d295fa0

----- Table contents after command [insert into student values "Mary Ann",   Davis,     Math,   30]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------




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
Cleared BTree node at address: 0x11fc07d10
current token is employee
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fc07d10
Calling destructor for BTree at address: 0x11fc07d10
Cleared BTree node at address: 0x11fc07d10
Cleared BTree node at address: 0x11fc07db0
Calling destructor for BTree at address: 0x11fc07db0
Cleared BTree node at address: 0x11fc07db0
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_3 and fields: last first dep salary year 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11fc0afb0
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
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)Field name: first
Field index for first: 1
Inserting field value: Joe for field: first at index: 1Inserted into _indices[1]: (Joe, 0)Field name: dep
Field index for dep: 2
Inserting field value: CS for field: dep at index: 2Inserted into _indices[2]: (CS, 0)Field name: salary
Field index for salary: 3
Inserting field value: 100000 for field: salary at index: 3Inserted into _indices[3]: (100000, 0)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 0)-------Table::field_col_no fired!-------
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
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 1)Field name: first
Field index for first: 1
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 1)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 1)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3Inserted into _indices[3]: (200000, 1)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 1)-------Table::field_col_no fired!-------
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
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 2)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 2)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 2)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 2)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 2)-------Table::field_col_no fired!-------
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
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 3)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 3)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 3)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 3)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 3)Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_3
-------------------Table::vector_to_table done!----------------------------
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d294ea8
Cleared BTree node at address: 0x16d294ea8
Calling destructor for BTree at address: 0x16d294e08
Cleared BTree node at address: 0x11fc0afb0
Calling destructor for BTree at address: 0x11fc0afb0
Cleared BTree node at address: 0x11fc0afb0
Cleared BTree node at address: 0x11fc0b050
Calling destructor for BTree at address: 0x11fc0b050
Cleared BTree node at address: 0x11fc0b050
Cleared BTree node at address: 0x11fc0ae20
Calling destructor for BTree at address: 0x11fc0ae20
Cleared BTree node at address: 0x11fc0ae20
Cleared BTree node at address: 0x16d294e08
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11fc0aee0
Calling destructor for BTree at address: 0x11fc0aee0
Cleared BTree node at address: 0x11fc0aee0
Cleared BTree node at address: 0x11fc11cf0
Calling destructor for BTree at address: 0x11fc11cf0
Cleared BTree node at address: 0x11fc11cf0
Cleared BTree node at address: 0x11fc131b0
Calling destructor for BTree at address: 0x11fc131b0
Cleared BTree node at address: 0x11fc131b0
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from employee]: -----
Table name: _selected_table_3, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           

basic_test: records selected: 0 1 2 3

>select last, first, dep from employee

=====Command Function Fired!=====
 select last, first, dep from employee
set_string Function Fired!
set string : Input string: select last, first, dep from employee
Tokenize Function Fired!
Input string: select last, first, dep from employee
STokenizer::set_string called with input: select last, first, dep from employee
Tokens: 
[ALFA: select]->[ALFA: last]->[Comma: ,]->[ALFA: first]->[Comma: ,]->[ALFA: dep]->[ALFA: from]->[ALFA: employee]->
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
Cleared BTree node at address: 0x11f90c2c0
current token is first
current token is ,
current token is dep
current token is from
get_column: from is a keyword.
current token is employee
Cleared BTree node at address: 0x11f90c540
Cleared BTree node at address: 0x11f90c5e0
Cleared BTree node at address: 0x11f90c680
Cleared BTree node at address: 0x11f90c720
Cleared BTree node at address: 0x11f90c7c0
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f90c5e0
Calling destructor for BTree at address: 0x11f90c5e0
Cleared BTree node at address: 0x11f90c5e0
Cleared BTree node at address: 0x11f90c680
Calling destructor for BTree at address: 0x11f90c680
Cleared BTree node at address: 0x11f90c680
Cleared BTree node at address: 0x11f90c540
Calling destructor for BTree at address: 0x11f90c540
Cleared BTree node at address: 0x11f90c540
Cleared BTree node at address: 0x11f90c720
Calling destructor for BTree at address: 0x11f90c720
Cleared BTree node at address: 0x11f90c720
Cleared BTree node at address: 0x11f90c7c0
Calling destructor for BTree at address: 0x11f90c7c0
Cleared BTree node at address: 0x11f90c7c0
Cleared BTree node at address: 0x11f90c860
Calling destructor for BTree at address: 0x11f90c860
Cleared BTree node at address: 0x11f90c860
Cleared BTree node at address: 0x16d294a50
Parse Tree Function Fired!
command: select
    ⎴
    table_name: [employee]
    fields: [last, first, dep]
    ⎵
^
⎴
fields: [last, first, dep]
⎵
    ^
    ⎴
    command: [select]
    ⎵


Parse Tree Function Done!
SQL::command()| Parse tree contents:     ⎴
    table_name: [employee]
    fields: [last, first, dep]
    ⎵
^
⎴
fields: [last, first, dep]
⎵
    ^
    ⎴
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_4 and fields: last first dep 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11fb043a0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 3
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS
_field_names last first dep
_field_names size: 3
_field_map.size() 3
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
Inserting field value: CS for field: dep at index: 2Inserted into _indices[2]: (CS, 0)-------Table::field_col_no fired!-------
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics
_field_names last first dep
_field_names size: 3
_field_map.size() 3

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
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 1)-------Table::field_col_no fired!-------
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR
_field_names last first dep
_field_names size: 3
_field_map.size() 3
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
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 2)-------Table::field_col_no fired!-------
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry
_field_names last first dep
_field_names size: 3
_field_map.size() 3

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
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 3)Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_4
-------------------Table::vector_to_table done!----------------------------
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d294ea8
Cleared BTree node at address: 0x16d294ea8
Calling destructor for BTree at address: 0x16d294e08
Cleared BTree node at address: 0x11fb043a0
Calling destructor for BTree at address: 0x11fb043a0
Cleared BTree node at address: 0x11fb043a0
Cleared BTree node at address: 0x11fb04440
Calling destructor for BTree at address: 0x11fb04440
Cleared BTree node at address: 0x11fb04440
Cleared BTree node at address: 0x16d294e08
Cleared BTree node at address: 0x11fc0ae20
Calling destructor for BTree at address: 0x11fc0ae20
Cleared BTree node at address: 0x11fc0ae20
Cleared BTree node at address: 0x11fc0afb0
Calling destructor for BTree at address: 0x11fc0afb0
Cleared BTree node at address: 0x11fc0afb0
Cleared BTree node at address: 0x11fc0b050
Calling destructor for BTree at address: 0x11fc0b050
Cleared BTree node at address: 0x11fc0b050
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11f90c6e0
Calling destructor for BTree at address: 0x11f90c6e0
Cleared BTree node at address: 0x11f90c6e0
Cleared BTree node at address: 0x11f912970
Calling destructor for BTree at address: 0x11f912970
Cleared BTree node at address: 0x11f912970
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select last, first, dep from employee]: -----
Table name: _selected_table_4, records: 4
_last_record: 3
------------------------------------------------------------
Record#        last           first          dep            
------------------------------------------------------------
0              Blow           Joe            CS             
1              Blow           JoAnn          Physics        
2              Johnson        Jack           HR             
3              Johnson        Jimmy          Chemistry      

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
Cleared BTree node at address: 0x11f912970
current token is employee
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f912970
Calling destructor for BTree at address: 0x11f912970
Cleared BTree node at address: 0x11f912970
Cleared BTree node at address: 0x11f90c990
Calling destructor for BTree at address: 0x11f90c990
Cleared BTree node at address: 0x11f90c990
Cleared BTree node at address: 0x16d294a50
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
SQL::command()| Parse tree contents:     ⎴
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


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_5 and fields: last 

-------Table ctor 3 fired!-------

-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 1
Index 0 initialized for field: last
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: employee.tbl
Opening file for writing: _selected_table_5.tbl
Opening file for writing (overwrite mode): _selected_table_5.tbl
File opened for writing: _selected_table_5.tbl
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Blow for field: last at index: 0Inserted into _indices[0]: (Blow, 0)-------Table::field_col_no fired!-------
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Blow
_field_names last
_field_names size: 1
_field_map.size() 1

Iterator Constructor Fired!

Duplicate record found, skipping insertion.
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson
_field_names last
_field_names size: 1
_field_map.size() 1
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 1)-------Table::field_col_no fired!-------
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
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Johnson
_field_names last
_field_names size: 1
_field_map.size() 1

Iterator Constructor Fired!

Duplicate record found, skipping insertion.
Vector_to_table :: record numbers: 0 1 
Vector_to_table :: table name: _selected_table_5
-------------------Table::vector_to_table done!----------------------------
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d294ea8
Cleared BTree node at address: 0x16d294ea8
Calling destructor for BTree at address: 0x16d294e08
Cleared BTree node at address: 0x16d294e08
Cleared BTree node at address: 0x11f90c540
Calling destructor for BTree at address: 0x11f90c540
Cleared BTree node at address: 0x11f90c540
Cleared BTree node at address: 0x11f90c5e0
Calling destructor for BTree at address: 0x11f90c5e0
Cleared BTree node at address: 0x11f90c5e0
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select last from employee]: -----
Table name: _selected_table_5, records: 2
_last_record: 1
------------------------------
Record#        last           
------------------------------
0              Blow           
1              Blow           

basic_test: records selected: 0 1

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
Cleared BTree node at address: 0x11f90ca70
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
Cleared BTree node at address: 0x11f91f130
Cleared BTree node at address: 0x11f91f1d0
Cleared BTree node at address: 0x11f91f270
Cleared BTree node at address: 0x11f91f310
Cleared BTree node at address: 0x11f91f3b0
current token is Johnson
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f91f1d0
Calling destructor for BTree at address: 0x11f91f1d0
Cleared BTree node at address: 0x11f91f1d0
Cleared BTree node at address: 0x11f91f270
Calling destructor for BTree at address: 0x11f91f270
Cleared BTree node at address: 0x11f91f270
Cleared BTree node at address: 0x11f91f130
Calling destructor for BTree at address: 0x11f91f130
Cleared BTree node at address: 0x11f91f130
Cleared BTree node at address: 0x11f91f310
Calling destructor for BTree at address: 0x11f91f310
Cleared BTree node at address: 0x11f91f310
Cleared BTree node at address: 0x11f91f3b0
Calling destructor for BTree at address: 0x11f91f3b0
Cleared BTree node at address: 0x11f91f3b0
Cleared BTree node at address: 0x11f91f450
Calling destructor for BTree at address: 0x11f91f450
Cleared BTree node at address: 0x11f91f450
Cleared BTree node at address: 0x16d294a50
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
SQL::command()| Parse tree contents:     ⎴
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


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           


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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Johnson]-> [RelationalOperator: =]-> |||
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
Field index for last: 0
Debug cond(): printing _indices: Blow -> 0 1
Johnson -> 2 3
Processing '=': field_value = Johnson

Iterator Constructor Fired!

Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 2 3 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_6 and fields: last first dep salary year 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11f921010
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
Opening file for writing: _selected_table_6.tbl
Opening file for writing (overwrite mode): _selected_table_6.tbl
File opened for writing: _selected_table_6.tbl
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
Fields to insert : Johnson Jack HR 150000 2014
_field_names last first dep salary year
_field_names size: 5
_field_map.size() 5
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 0)Field name: first
Field index for first: 1
Inserting field value: Jack for field: first at index: 1Inserted into _indices[1]: (Jack, 0)Field name: dep
Field index for dep: 2
Inserting field value: HR for field: dep at index: 2Inserted into _indices[2]: (HR, 0)Field name: salary
Field index for salary: 3
Inserting field value: 150000 for field: salary at index: 3Inserted into _indices[3]: (150000, 0)Field name: year
Field index for year: 4
Inserting field value: 2014 for field: year at index: 4Inserted into _indices[4]: (2014, 0)-------Table::field_col_no fired!-------
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

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 1

Updating _indices with field values:
Field name: last
Field index for last: 0
Inserting field value: Johnson for field: last at index: 0Inserted into _indices[0]: (Johnson, 1)Field name: first
Field index for first: 1
Inserting field value: Jimmy for field: first at index: 1Inserted into _indices[1]: (Jimmy, 1)Field name: dep
Field index for dep: 2
Inserting field value: Chemistry for field: dep at index: 2Inserted into _indices[2]: (Chemistry, 1)Field name: salary
Field index for salary: 3
Inserting field value: 140000 for field: salary at index: 3Inserted into _indices[3]: (140000, 1)Field name: year
Field index for year: 4
Inserting field value: 2018 for field: year at index: 4Inserted into _indices[4]: (2018, 1)Vector_to_table :: record numbers: 0 1 
Vector_to_table :: table name: _selected_table_6
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_6
Table name: _selected_table_6, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Johnson        Jack           HR             150000         2014           
1              Johnson        Jimmy          Chemistry      140000         2018           
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295070
Cleared BTree node at address: 0x16d295070
Calling destructor for BTree at address: 0x16d294fd0
Cleared BTree node at address: 0x11f921010
Calling destructor for BTree at address: 0x11f921010
Cleared BTree node at address: 0x11f921010
Cleared BTree node at address: 0x11f9210b0
Calling destructor for BTree at address: 0x11f9210b0
Cleared BTree node at address: 0x11f9210b0
Cleared BTree node at address: 0x11f920e80
Calling destructor for BTree at address: 0x11f920e80
Cleared BTree node at address: 0x11f920e80
Cleared BTree node at address: 0x16d294fd0
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11f920db0
Calling destructor for BTree at address: 0x11f920db0
Cleared BTree node at address: 0x11f920db0
Cleared BTree node at address: 0x11f920c40
Calling destructor for BTree at address: 0x11f920c40
Cleared BTree node at address: 0x11f920c40
Cleared BTree node at address: 0x11f920f20
Calling destructor for BTree at address: 0x11f920f20
Cleared BTree node at address: 0x11f920f20
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from employee where last = Johnson]: -----
Table name: _selected_table_6, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
2                                                                                         
3                                                                                         

basic_test: records selected: 2 3

>select * from employee where last=Blow and first="JoAnn"

=====Command Function Fired!=====
 select * from employee where last=Blow and first="JoAnn"
set_string Function Fired!
set string : Input string: select * from employee where last=Blow and first="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and first="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and first="JoAnn"
Combining tokens after RELATIONAL_OPERATOR at index 6
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 10
Tokens: 
[ALFA: select]->[Asterisk: *]->[ALFA: from]->[ALFA: employee]->[ALFA: where]->[ALFA: last]->[RelationalOperator: =]->[ALFA: Blow]->[LogicalOperator: and]->[ALFA: first]->[RelationalOperator: =]->[String: JoAnn]->
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
Cleared BTree node at address: 0x11fb04e20
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
Cleared BTree node at address: 0x11fb09400
Cleared BTree node at address: 0x11fb094a0
Cleared BTree node at address: 0x11fb09540
Cleared BTree node at address: 0x11fb095e0
Cleared BTree node at address: 0x11fb09680
current token is Blow
current token is and
current token is first
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fb094a0
Calling destructor for BTree at address: 0x11fb094a0
Cleared BTree node at address: 0x11fb094a0
Cleared BTree node at address: 0x11fb09540
Calling destructor for BTree at address: 0x11fb09540
Cleared BTree node at address: 0x11fb09540
Cleared BTree node at address: 0x11fb097c0
Calling destructor for BTree at address: 0x11fb097c0
Cleared BTree node at address: 0x11fb097c0
Cleared BTree node at address: 0x11fb09400
Calling destructor for BTree at address: 0x11fb09400
Cleared BTree node at address: 0x11fb09400
Cleared BTree node at address: 0x11fb095e0
Calling destructor for BTree at address: 0x11fb095e0
Cleared BTree node at address: 0x11fb095e0
Cleared BTree node at address: 0x11fb09680
Calling destructor for BTree at address: 0x11fb09680
Cleared BTree node at address: 0x11fb09680
Cleared BTree node at address: 0x11fb09720
Calling destructor for BTree at address: 0x11fb09720
Cleared BTree node at address: 0x11fb09720
Cleared BTree node at address: 0x16d294a50
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
    condition: [last, =, Blow, and, first, =, JoAnn]
    command: [select]
    ⎵


Parse Tree Function Done!
SQL::command()| Parse tree contents:     ⎴
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
    condition: [last, =, Blow, and, first, =, JoAnn]
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: employee -> Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
2              Johnson        Jack           HR             150000         2014           
3              Johnson        Jimmy          Chemistry      140000         2018           


Iterator Constructor Fired!

>>> Applying WHERE condition.
>>> Condition from parse tree: last = Blow and first = JoAnn
Tokenize Function Fired!
Input string: last = Blow and first = JoAnn 
STokenizer::set_string called with input: last = Blow and first = JoAnn 
Combining tokens after RELATIONAL_OPERATOR at index 1
Adding token: Blow to combined string.
Pushing combined token: Blow
Combining tokens after RELATIONAL_OPERATOR at index 5
Adding token: JoAnn to combined string.
Pushing combined token: JoAnn
Tokens: 
[ALFA: last]->[RelationalOperator: =]->[ALFA: Blow]->[LogicalOperator: and]->[ALFA: first]->[RelationalOperator: =]->[ALFA: JoAnn]->
Tokenization done!
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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: last]-> [ALFA: Blow]-> [RelationalOperator: =]-> [ALFA: first]-> [ALFA: JoAnn]-> [RelationalOperator: =]-> [LogicalOperator: and]-> |||
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
Field index for last: 0
Debug cond(): printing _indices: Blow -> 0 1
Johnson -> 2 3
Processing '=': field_value = Blow

Iterator Constructor Fired!


Iterator Constructor Fired!

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
Field index for first: 1
Debug cond(): printing _indices: Jack -> 2
Jimmy -> 3
JoAnn -> 1
Joe -> 0
Processing '=': field_value = JoAnn

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::and_with fired!-------
_recnos:1 
Final record numbers after cond evaluation:1 
-------Table::cond done!-------
Matching record numbers:
  1 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 1 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_7 and fields: last first dep salary year 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x123804080
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
Opening file for writing: _selected_table_7.tbl
Opening file for writing (overwrite mode): _selected_table_7.tbl
File opened for writing: _selected_table_7.tbl
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
Fields to insert : Blow JoAnn Physics 200000 2016
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
Inserting field value: JoAnn for field: first at index: 1Inserted into _indices[1]: (JoAnn, 0)Field name: dep
Field index for dep: 2
Inserting field value: Physics for field: dep at index: 2Inserted into _indices[2]: (Physics, 0)Field name: salary
Field index for salary: 3
Inserting field value: 200000 for field: salary at index: 3Inserted into _indices[3]: (200000, 0)Field name: year
Field index for year: 4
Inserting field value: 2016 for field: year at index: 4Inserted into _indices[4]: (2016, 0)Vector_to_table :: record numbers: 0 
Vector_to_table :: table name: _selected_table_7
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_7
Table name: _selected_table_7, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           JoAnn          Physics        200000         2016           
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295070
Cleared BTree node at address: 0x16d295070
Calling destructor for BTree at address: 0x16d294fd0
Cleared BTree node at address: 0x123804080
Calling destructor for BTree at address: 0x123804080
Cleared BTree node at address: 0x123804080
Cleared BTree node at address: 0x123804120
Calling destructor for BTree at address: 0x123804120
Cleared BTree node at address: 0x123804120
Cleared BTree node at address: 0x1238044e0
Calling destructor for BTree at address: 0x1238044e0
Cleared BTree node at address: 0x1238044e0
Cleared BTree node at address: 0x16d294fd0
Cleared BTree node at address: 0x11f920e80
Calling destructor for BTree at address: 0x11f920e80
Cleared BTree node at address: 0x11f920e80
Cleared BTree node at address: 0x11f917b80
Calling destructor for BTree at address: 0x11f917b80
Cleared BTree node at address: 0x11f917b80
Cleared BTree node at address: 0x11f920fc0
Calling destructor for BTree at address: 0x11f920fc0
Cleared BTree node at address: 0x11f920fc0
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11ff06960
Calling destructor for BTree at address: 0x11ff06960
Cleared BTree node at address: 0x11ff06960
Cleared BTree node at address: 0x11ff06a00
Calling destructor for BTree at address: 0x11ff06a00
Cleared BTree node at address: 0x11ff06a00
Cleared BTree node at address: 0x11ff06aa0
Calling destructor for BTree at address: 0x11ff06aa0
Cleared BTree node at address: 0x11ff06aa0
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from employee where last=Blow and first="JoAnn"]: -----
Table name: _selected_table_7, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
1                                                                                         

basic_test: records selected: 1

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
Cleared BTree node at address: 0x11de14910
current token is student
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11de14910
Calling destructor for BTree at address: 0x11de14910
Cleared BTree node at address: 0x11de14910
Cleared BTree node at address: 0x11de149b0
Calling destructor for BTree at address: 0x11de149b0
Cleared BTree node at address: 0x11de149b0
Cleared BTree node at address: 0x16d294a50
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
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
3              Billy          Jackson        Math           27             
4              Mary Ann       Davis          Math           30             

>>> No WHERE condition found. Selecting all records.
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_8 and fields: fname lname major age 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11fd08470
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: student.tbl
Opening file for writing: _selected_table_8.tbl
Opening file for writing (overwrite mode): _selected_table_8.tbl
File opened for writing: _selected_table_8.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 3)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 30 for field: age at index: 3Inserted into _indices[3]: (30, 4)Vector_to_table :: record numbers: 0 1 2 3 4 
Vector_to_table :: table name: _selected_table_8
-------------------Table::vector_to_table done!----------------------------
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d294ea8
Cleared BTree node at address: 0x16d294ea8
Calling destructor for BTree at address: 0x16d294e08
Cleared BTree node at address: 0x11fd08470
Calling destructor for BTree at address: 0x11fd08470
Cleared BTree node at address: 0x11fd08470
Cleared BTree node at address: 0x11fd0bd00
Calling destructor for BTree at address: 0x11fd0bd00
Cleared BTree node at address: 0x11fd0bd00
Cleared BTree node at address: 0x16d294e08
Cleared BTree node at address: 0x11f920fc0
Calling destructor for BTree at address: 0x11f920fc0
Cleared BTree node at address: 0x11f920fc0
Cleared BTree node at address: 0x11f917b80
Calling destructor for BTree at address: 0x11f917b80
Cleared BTree node at address: 0x11f917b80
Cleared BTree node at address: 0x11f921060
Calling destructor for BTree at address: 0x11f921060
Cleared BTree node at address: 0x11f921060
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11fa04780
Calling destructor for BTree at address: 0x11fa04780
Cleared BTree node at address: 0x11fa04780
Cleared BTree node at address: 0x11fa04820
Calling destructor for BTree at address: 0x11fa04820
Cleared BTree node at address: 0x11fa04820
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from student]: -----
Table name: _selected_table_8, records: 5
_last_record: 4
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
3              Billy          Jackson        Math           27             
4              Mary Ann       Davis          Math           30             

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
Cleared BTree node at address: 0x11f8053b0
current token is student
current token is where
get_column: where is a keyword.
current token is (
current token is major
current token is =
Cleared BTree node at address: 0x11f805630
Cleared BTree node at address: 0x11f8056d0
Cleared BTree node at address: 0x11f805770
Cleared BTree node at address: 0x11f805810
Cleared BTree node at address: 0x11f8058b0
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11f8056d0
Calling destructor for BTree at address: 0x11f8056d0
Cleared BTree node at address: 0x11f8056d0
Cleared BTree node at address: 0x11f805770
Calling destructor for BTree at address: 0x11f805770
Cleared BTree node at address: 0x11f805770
Cleared BTree node at address: 0x11f805a90
Calling destructor for BTree at address: 0x11f805a90
Cleared BTree node at address: 0x11f805a90
Cleared BTree node at address: 0x11f805630
Calling destructor for BTree at address: 0x11f805630
Cleared BTree node at address: 0x11f805630
Cleared BTree node at address: 0x11f805810
Calling destructor for BTree at address: 0x11f805810
Cleared BTree node at address: 0x11f805810
Cleared BTree node at address: 0x11f8059f0
Calling destructor for BTree at address: 0x11f8059f0
Cleared BTree node at address: 0x11f8059f0
Cleared BTree node at address: 0x11f8058b0
Calling destructor for BTree at address: 0x11f8058b0
Cleared BTree node at address: 0x11f8058b0
Cleared BTree node at address: 0x11f805950
Calling destructor for BTree at address: 0x11f805950
Cleared BTree node at address: 0x11f805950
Cleared BTree node at address: 0x16d294a50
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
    condition: [(, major, =, CS, or, major, =, Art, )]
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
3              Billy          Jackson        Math           27             
4              Mary Ann       Davis          Math           30             


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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> |||
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
Field index for major: 2
Debug cond(): printing _indices: Art -> 0
CS -> 1 2
Math -> 3 4
Processing '=': field_value = CS

Iterator Constructor Fired!


Iterator Constructor Fired!

-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
Field index for major: 2
Debug cond(): printing _indices: Art -> 0
CS -> 1 2
Math -> 3 4
Processing '=': field_value = Art

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_9 and fields: fname lname major age 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11fb0e000
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: student.tbl
Opening file for writing: _selected_table_9.tbl
Opening file for writing (overwrite mode): _selected_table_9.tbl
File opened for writing: _selected_table_9.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)Vector_to_table :: record numbers: 0 1 2 
Vector_to_table :: table name: _selected_table_9
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_9
Table name: _selected_table_9, records: 3
_last_record: 2
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295070
Cleared BTree node at address: 0x16d295070
Calling destructor for BTree at address: 0x16d294fd0
Cleared BTree node at address: 0x11fb0e000
Calling destructor for BTree at address: 0x11fb0e000
Cleared BTree node at address: 0x11fb0e000
Cleared BTree node at address: 0x11fb0e0a0
Calling destructor for BTree at address: 0x11fb0e0a0
Cleared BTree node at address: 0x11fb0e0a0
Cleared BTree node at address: 0x16d294fd0
Cleared BTree node at address: 0x11fc0ad50
Calling destructor for BTree at address: 0x11fc0ad50
Cleared BTree node at address: 0x11fc0ad50
Cleared BTree node at address: 0x11fc13d50
Calling destructor for BTree at address: 0x11fc13d50
Cleared BTree node at address: 0x11fc13d50
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x123806060
Calling destructor for BTree at address: 0x123806060
Cleared BTree node at address: 0x123806060
Cleared BTree node at address: 0x123806100
Calling destructor for BTree at address: 0x123806100
Cleared BTree node at address: 0x123806100
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from student where (major=CS or major=Art)]: -----
Table name: _selected_table_9, records: 3
_last_record: 2
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             

basic_test: records selected: 0 1 2

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
Cleared BTree node at address: 0x11fa07a50
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
Cleared BTree node at address: 0x11fa09130
Cleared BTree node at address: 0x11fa091d0
Cleared BTree node at address: 0x11fa09270
Cleared BTree node at address: 0x11fa09310
Cleared BTree node at address: 0x11ff08da0
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x11fa091d0
Calling destructor for BTree at address: 0x11fa091d0
Cleared BTree node at address: 0x11fa091d0
Cleared BTree node at address: 0x11fa09270
Calling destructor for BTree at address: 0x11fa09270
Cleared BTree node at address: 0x11fa09270
Cleared BTree node at address: 0x11fa09130
Calling destructor for BTree at address: 0x11fa09130
Cleared BTree node at address: 0x11fa09130
Cleared BTree node at address: 0x11fa09310
Calling destructor for BTree at address: 0x11fa09310
Cleared BTree node at address: 0x11fa09310
Cleared BTree node at address: 0x11ff08da0
Calling destructor for BTree at address: 0x11ff08da0
Cleared BTree node at address: 0x11ff08da0
Cleared BTree node at address: 0x11ff08e40
Calling destructor for BTree at address: 0x11ff08e40
Cleared BTree node at address: 0x11ff08e40
Cleared BTree node at address: 0x16d294a50
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
    condition: [lname, >, J]
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             


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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> |||
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
Field index for lname: 1
Debug cond(): printing _indices: Davis -> 4
Jackson -> 2 3
Yang -> 1
Yao -> 0
Processing '>': field_value = J

Iterator Constructor Fired!

Matching record: Key = Jackson, Record = 2 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0
Final record numbers after cond evaluation:2 3 1 0 
-------Table::cond done!-------
Matching record numbers:
  2   3   1   0 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 2 3 1 0 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_10 and fields: fname lname major age 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11fd08470
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: student.tbl
Opening file for writing: _selected_table_10.tbl
Opening file for writing (overwrite mode): _selected_table_10.tbl
File opened for writing: _selected_table_10.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4
FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 0

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Sammuel L. for field: fname at index: 0Inserted into _indices[0]: (Sammuel L., 0)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 0)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 0)Field name: age
Field index for age: 3
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
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
Inserting field value: Billy for field: fname at index: 0Inserted into _indices[0]: (Billy, 1)Field name: lname
Field index for lname: 1
Inserting field value: Jackson for field: lname at index: 1Inserted into _indices[1]: (Jackson, 1)Field name: major
Field index for major: 2
Inserting field value: Math for field: major at index: 2Inserted into _indices[2]: (Math, 1)Field name: age
Field index for age: 3
Inserting field value: 27 for field: age at index: 3Inserted into _indices[3]: (27, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
_field_names fname lname major age
_field_names size: 4
_field_map.size() 4

Iterator Constructor Fired!


Iterator Constructor Fired!

FileRecord::FileRecord fired!
FileRecord::write fired!
Record written successfully with record number: 2

Updating _indices with field values:
Field name: fname
Field index for fname: 0
Inserting field value: Bo for field: fname at index: 0Inserted into _indices[0]: (Bo, 2)Field name: lname
Field index for lname: 1
Inserting field value: Yang for field: lname at index: 1Inserted into _indices[1]: (Yang, 2)Field name: major
Field index for major: 2
Inserting field value: CS for field: major at index: 2Inserted into _indices[2]: (CS, 2)Field name: age
Field index for age: 3
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 2)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
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
Inserting field value: Flo for field: fname at index: 0Inserted into _indices[0]: (Flo, 3)Field name: lname
Field index for lname: 1
Inserting field value: Yao for field: lname at index: 1Inserted into _indices[1]: (Yao, 3)Field name: major
Field index for major: 2
Inserting field value: Art for field: major at index: 2Inserted into _indices[2]: (Art, 3)Field name: age
Field index for age: 3
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 3)Vector_to_table :: record numbers: 0 1 2 3 
Vector_to_table :: table name: _selected_table_10
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_10
Table name: _selected_table_10, records: 4
_last_record: 3
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Sammuel L.     Jackson        CS             40             
1              Billy          Jackson        Math           27             
2              Bo             Yang           CS             28             
3              Flo            Yao            Art            20             
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295070
Cleared BTree node at address: 0x16d295070
Calling destructor for BTree at address: 0x16d294fd0
Cleared BTree node at address: 0x11fd08470
Calling destructor for BTree at address: 0x11fd08470
Cleared BTree node at address: 0x11fd08470
Cleared BTree node at address: 0x11fd08510
Calling destructor for BTree at address: 0x11fd08510
Cleared BTree node at address: 0x11fd08510
Cleared BTree node at address: 0x16d294fd0
Cleared BTree node at address: 0x1238040c0
Calling destructor for BTree at address: 0x1238040c0
Cleared BTree node at address: 0x1238040c0
Cleared BTree node at address: 0x123804160
Calling destructor for BTree at address: 0x123804160
Cleared BTree node at address: 0x123804160
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11f917b80
Calling destructor for BTree at address: 0x11f917b80
Cleared BTree node at address: 0x11f917b80
Cleared BTree node at address: 0x11f92e970
Calling destructor for BTree at address: 0x11f92e970
Cleared BTree node at address: 0x11f92e970
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from student where lname>J]: -----
Table name: _selected_table_10, records: 4
_last_record: 3
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
2              Bo             Yang           CS             28             
3              Flo            Yao            Art            20             
1              Billy          Jackson        Math           27             
0              Sammuel L.     Jackson        CS             40             

basic_test: records selected: 2 3 1 0

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
Cleared BTree node at address: 0x11ff09240
current token is student
current token is where
get_column: where is a keyword.
current token is lname
current token is >
current token is J
Cleared BTree node at address: 0x123806060
Cleared BTree node at address: 0x123806100
Cleared BTree node at address: 0x123804200
Cleared BTree node at address: 0x1238042a0
Cleared BTree node at address: 0x123804340
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
Calling destructor for BTree at address: 0x16d294a50
Cleared BTree node at address: 0x123806100
Calling destructor for BTree at address: 0x123806100
Cleared BTree node at address: 0x123806100
Cleared BTree node at address: 0x1238045c0
Calling destructor for BTree at address: 0x1238045c0
Cleared BTree node at address: 0x1238045c0
Cleared BTree node at address: 0x123806060
Calling destructor for BTree at address: 0x123806060
Cleared BTree node at address: 0x123806060
Cleared BTree node at address: 0x123804200
Calling destructor for BTree at address: 0x123804200
Cleared BTree node at address: 0x123804200
Cleared BTree node at address: 0x123804660
Calling destructor for BTree at address: 0x123804660
Cleared BTree node at address: 0x123804660
Cleared BTree node at address: 0x123804700
Calling destructor for BTree at address: 0x123804700
Cleared BTree node at address: 0x123804700
Cleared BTree node at address: 0x1238042a0
Calling destructor for BTree at address: 0x1238042a0
Cleared BTree node at address: 0x1238042a0
Cleared BTree node at address: 0x123804480
Calling destructor for BTree at address: 0x123804480
Cleared BTree node at address: 0x123804480
Cleared BTree node at address: 0x123804340
Calling destructor for BTree at address: 0x123804340
Cleared BTree node at address: 0x123804340
Cleared BTree node at address: 0x1238043e0
Calling destructor for BTree at address: 0x1238043e0
Cleared BTree node at address: 0x1238043e0
Cleared BTree node at address: 0x16d294a50
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
    condition: [lname, >, J, and, (, major, =, CS, or, major, =, Art, )]
    command: [select]
    ⎵


>>> Parsed command: select
>>> ------>> cmd[0] = select---------------
Table default constructor fired!
Default table file created: default_table.tbl
Finding key: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d294aa8
Cleared BTree node at address: 0x16d294aa8
Calling destructor for BTree at address: 0x16d294a08
Cleared BTree node at address: 0x16d294a08
Calling destructor for BTree at address: 0x16d2948c8
Cleared BTree node at address: 0x16d2948c8
Calling destructor for BTree at address: 0x16d294828
Cleared BTree node at address: 0x16d294828
Found Pair: student -> Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
2              Sammuel L.     Jackson        CS             40             
3              Billy          Jackson        Math           27             
1              Bo             Yang           CS             28             
0              Flo            Yao            Art            20             


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
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16d2948d8
Cleared BTree node at address: 0x16d2948d8
Calling destructor for BTree at address: 0x16d294838
Cleared BTree node at address: 0x16d294838
Calling destructor for BTree at address: 0x16d294ab8
Cleared BTree node at address: 0x16d294ab8
Calling destructor for BTree at address: 0x16d294a18
Cleared BTree node at address: 0x16d294a18
-------Table::select fired!-------
-------Table::cond fired!-------
Postfix expression: Queue: head->[ALFA: lname]-> [ALFA: J]-> [RelationalOperator: >]-> [ALFA: major]-> [ALFA: CS]-> [RelationalOperator: =]-> [ALFA: major]-> [ALFA: Art]-> [RelationalOperator: =]-> [LogicalOperator: or]-> [LogicalOperator: and]-> |||
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
Field index for lname: 1
Debug cond(): printing _indices: Davis -> 4
Jackson -> 2 3
Yang -> 1
Yao -> 0
Processing '>': field_value = J

Iterator Constructor Fired!

Matching record: Key = Jackson, Record = 2 3
Matching record: Key = Yang, Record = 1
Matching record: Key = Yao, Record = 0
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
Field index for major: 2
Debug cond(): printing _indices: Art -> 0
CS -> 1 2
Math -> 3 4
Processing '=': field_value = CS

Iterator Constructor Fired!


Iterator Constructor Fired!

-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
Field index for major: 2
Debug cond(): printing _indices: Art -> 0
CS -> 1 2
Math -> 3 4
Processing '=': field_value = Art

Iterator Constructor Fired!


Iterator Constructor Fired!

-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 -------ResultSet::and_with fired!-------
_recnos:0 1 2 
Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_11 and fields: fname lname major age 

-------Table ctor 3 fired!-------

Cleared BTree node at address: 0x11f8058e0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------

-[02]--------------------------------------DEBUG HERE!
File opened for reading: student.tbl
Opening file for writing: _selected_table_11.tbl
Opening file for writing (overwrite mode): _selected_table_11.tbl
File opened for writing: _selected_table_11.tbl
-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 20 for field: age at index: 3Inserted into _indices[3]: (20, 0)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 28 for field: age at index: 3Inserted into _indices[3]: (28, 1)-------Table::field_col_no fired!-------
Field name: fname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: fname
Found Pair: fname -> 0
Field found: fname at index 0
-------Table::field_col_no fired!-------
Field name: lname
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: lname
Found Pair: lname -> 1
Field found: lname at index 1
-------Table::field_col_no fired!-------
Field name: major
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: major
Found Pair: major -> 2
Field found: major at index 2
-------Table::field_col_no fired!-------
Field name: age
Field map size: 4
    ⎴
    major: 2
    ⎵
⎴
lname: 1
⎵
    ⎴
    fname: 0
    age : 3
    ⎵


Finding key: age
Found Pair: age -> 3
Field found: age at index 3
FileRecord::FileRecord fired!
FileRecord::write fired!

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
Inserting field value: 40 for field: age at index: 3Inserted into _indices[3]: (40, 2)Vector_to_table :: record numbers: 0 1 2 
Vector_to_table :: table name: _selected_table_11
-------------------Table::vector_to_table done!----------------------------
vector_to_table() result->_name: _selected_table_11
Table name: _selected_table_11, records: 3
_last_record: 2
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             
Cleared BTree node at address: 0x16d295c08
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295070
Cleared BTree node at address: 0x16d295070
Calling destructor for BTree at address: 0x16d294fd0
Cleared BTree node at address: 0x11f8058e0
Calling destructor for BTree at address: 0x11f8058e0
Cleared BTree node at address: 0x11f8058e0
Cleared BTree node at address: 0x11f805980
Calling destructor for BTree at address: 0x11f805980
Cleared BTree node at address: 0x11f805980
Cleared BTree node at address: 0x16d294fd0
Cleared BTree node at address: 0x11f92ea10
Calling destructor for BTree at address: 0x11f92ea10
Cleared BTree node at address: 0x11f92ea10
Cleared BTree node at address: 0x11f92eab0
Calling destructor for BTree at address: 0x11f92eab0
Cleared BTree node at address: 0x11f92eab0
Cleared BTree node at address: 0x16d296338
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d295ca8
Cleared BTree node at address: 0x16d295ca8
Calling destructor for BTree at address: 0x16d295c08
Cleared BTree node at address: 0x11fb0d780
Calling destructor for BTree at address: 0x11fb0d780
Cleared BTree node at address: 0x11fb0d780
Cleared BTree node at address: 0x11fb130b0
Calling destructor for BTree at address: 0x11fb130b0
Cleared BTree node at address: 0x11fb130b0
Cleared BTree node at address: 0x16d295c08

----- Table contents after command [select * from student where lname>J and (major=CS or major=Art)]: -----
Table name: _selected_table_11, records: 3
_last_record: 2
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             
2              Sammuel L.     Jackson        CS             40             

basic_test: records selected: 0 1 2
----- END TEST --------
Calling destructor for BTree at address: 0x16d2963d8
Cleared BTree node at address: 0x16d2963d8
Calling destructor for BTree at address: 0x16d296338
Cleared BTree node at address: 0x11fd0baa0
Calling destructor for BTree at address: 0x11fd0baa0
Cleared BTree node at address: 0x11fd0baa0
Cleared BTree node at address: 0x11fd08470
Calling destructor for BTree at address: 0x11fd08470
Cleared BTree node at address: 0x11fd08470
Cleared BTree node at address: 0x16d296338
Calling destructor for BTree at address: 0x16d296498
Cleared BTree node at address: 0x16d296498
Calling destructor for BTree at address: 0x16d296998
Cleared BTree node at address: 0x16d296998
Calling destructor for BTree at address: 0x16d2968f8
Cleared BTree node at address: 0x16d2968f8
Calling destructor for BTree at address: 0x16d2967b8
Cleared BTree node at address: 0x16d2967b8
Calling destructor for BTree at address: 0x16d296718
Cleared BTree node at address: 0x11de0fe00
Calling destructor for BTree at address: 0x11de0fe00
Cleared BTree node at address: 0x11de0fe00
Cleared BTree node at address: 0x11de0fea0
Calling destructor for BTree at address: 0x11de0fea0
Cleared BTree node at address: 0x11de0fea0
Cleared BTree node at address: 0x16d296718
Calling destructor for BTree at address: 0x16d2965d8
Cleared BTree node at address: 0x16d2965d8
Calling destructor for BTree at address: 0x16d296538
Cleared BTree node at address: 0x11f9052d0
Calling destructor for BTree at address: 0x11f9052d0
Cleared BTree node at address: 0x11f9052d0
Cleared BTree node at address: 0x11f9055e0
Calling destructor for BTree at address: 0x11f9055e0
Cleared BTree node at address: 0x11f9055e0
Cleared BTree node at address: 0x11f905190
Calling destructor for BTree at address: 0x11f905190
Cleared BTree node at address: 0x11f905190
Cleared BTree node at address: 0x16d296538
[       OK ] SQL_BASIC.SQLBasic (71 ms)
[----------] 1 test from SQL_BASIC (71 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (71 ms total)
[  PASSED  ] 1 test.
Calling destructor for BTree at address: 0x102bb0288
Cleared BTree node at address: 0x11de08c80
Calling destructor for BTree at address: 0x11de08c80
Cleared BTree node at address: 0x11de08c80
Cleared BTree node at address: 0x11de08d20
Calling destructor for BTree at address: 0x11de08d20
Cleared BTree node at address: 0x11de08d20
Cleared BTree node at address: 0x11de09400
Calling destructor for BTree at address: 0x11de09400
Cleared BTree node at address: 0x11de09400
Cleared BTree node at address: 0x11de08be0
Calling destructor for BTree at address: 0x11de08be0
Cleared BTree node at address: 0x11de08be0
Cleared BTree node at address: 0x11de08e60
Calling destructor for BTree at address: 0x11de08e60
Cleared BTree node at address: 0x11de08e60
Cleared BTree node at address: 0x11de08f00
Calling destructor for BTree at address: 0x11de08f00
Cleared BTree node at address: 0x11de08f00
Cleared BTree node at address: 0x11de08dc0
Calling destructor for BTree at address: 0x11de08dc0
Cleared BTree node at address: 0x11de08dc0
Cleared BTree node at address: 0x11de08b40
Calling destructor for BTree at address: 0x11de08b40
Cleared BTree node at address: 0x11de08b40
Cleared BTree node at address: 0x11de09040
Calling destructor for BTree at address: 0x11de09040
Cleared BTree node at address: 0x11de09040
Cleared BTree node at address: 0x11de090e0
Calling destructor for BTree at address: 0x11de090e0
Cleared BTree node at address: 0x11de090e0
Cleared BTree node at address: 0x11de08fa0
Calling destructor for BTree at address: 0x11de08fa0
Cleared BTree node at address: 0x11de08fa0
Cleared BTree node at address: 0x11de09220
Calling destructor for BTree at address: 0x11de09220
Cleared BTree node at address: 0x11de09220
Cleared BTree node at address: 0x11de092c0
Calling destructor for BTree at address: 0x11de092c0
Cleared BTree node at address: 0x11de092c0
Cleared BTree node at address: 0x11de09180
Calling destructor for BTree at address: 0x11de09180
Cleared BTree node at address: 0x11de09180
Cleared BTree node at address: 0x11de09360
Calling destructor for BTree at address: 0x11de09360
Cleared BTree node at address: 0x11de09360
Cleared BTree node at address: 0x102bb0288
jwcomputer@Mac Final_Dec_20 % 