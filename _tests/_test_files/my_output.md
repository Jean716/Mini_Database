jwcomputer@Mac Final_Dec_20 % build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
----- BEGIN TEST --------
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ed888
Cleared BTree node at address: 0x16f8ed888
Calling destructor for BTree at address: 0x16f8ed7e8
Cleared BTree node at address: 0x16f8ed7e8
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ed888
Cleared BTree node at address: 0x16f8ed888
Calling destructor for BTree at address: 0x16f8ed7e8
Cleared BTree node at address: 0x16f8ed7e8
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ed888
Cleared BTree node at address: 0x16f8ed888
Calling destructor for BTree at address: 0x16f8ed7e8
Cleared BTree node at address: 0x16f8ed7e8
Build Keyword List Function Fired!
Cleared BTree node at address: 0x139f064b0
Cleared BTree node at address: 0x139f06800
Cleared BTree node at address: 0x139f068a0
Cleared BTree node at address: 0x139f06940
Cleared BTree node at address: 0x139f069e0
Cleared BTree node at address: 0x139f06a80
Cleared BTree node at address: 0x139f06f80
Cleared BTree node at address: 0x139f07020
Cleared BTree node at address: 0x139f070c0
Cleared BTree node at address: 0x139f07160
Cleared BTree node at address: 0x139f07200
Cleared BTree node at address: 0x139f072a0
Cleared BTree node at address: 0x139f07340
Cleared BTree node at address: 0x139f073e0
Cleared BTree node at address: 0x139f07480
Cleared BTree node at address: 0x139f07520
Cleared BTree node at address: 0x139f075c0
Cleared BTree node at address: 0x139f07660
Cleared BTree node at address: 0x139f07700
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
Cleared BTree node at address: 0x139f08370
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Cleared BTree node at address: 0x139f085f0
Cleared BTree node at address: 0x139f08690
Cleared BTree node at address: 0x139f08730
Cleared BTree node at address: 0x139f087d0
Cleared BTree node at address: 0x139f08870
current token is ,
current token is salary
current token is ,
current token is year
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x139f08690
Calling destructor for BTree at address: 0x139f08690
Cleared BTree node at address: 0x139f08690
Cleared BTree node at address: 0x139f08730
Calling destructor for BTree at address: 0x139f08730
Cleared BTree node at address: 0x139f08730
Cleared BTree node at address: 0x139f085f0
Calling destructor for BTree at address: 0x139f085f0
Cleared BTree node at address: 0x139f085f0
Cleared BTree node at address: 0x139f087d0
Calling destructor for BTree at address: 0x139f087d0
Cleared BTree node at address: 0x139f087d0
Cleared BTree node at address: 0x139f08870
Calling destructor for BTree at address: 0x139f08870
Cleared BTree node at address: 0x139f08870
Cleared BTree node at address: 0x139f089b0
Calling destructor for BTree at address: 0x139f089b0
Cleared BTree node at address: 0x139f089b0
Cleared BTree node at address: 0x139f08910
Calling destructor for BTree at address: 0x139f08910
Cleared BTree node at address: 0x139f08910
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ed838
Cleared BTree node at address: 0x16f8ed838
Calling destructor for BTree at address: 0x16f8ed798
Cleared BTree node at address: 0x16f8ed798
Calling destructor for BTree at address: 0x16f8ed658
Cleared BTree node at address: 0x16f8ed658
Calling destructor for BTree at address: 0x16f8ed5b8
Cleared BTree node at address: 0x16f8ed5b8
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x139f08740
Destroying BPlusTree at address: 0x16f8ec7d0
Cleared BTree node at address: 0x139f089a0
Destroying BPlusTree at address: 0x139f088d8
Destroying BPlusTree at address: 0x139f08810
Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x139f09028
Destroying BPlusTree at address: 0x139f08f60
Destroying BPlusTree at address: 0x139f08e98
Destroying BPlusTree at address: 0x139f08dd0
Destroying BPlusTree at address: 0x16f8ec7d0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Cleared BTree node at address: 0x16f8ee538
Cleared BTree node at address: 0x16f8ee5d8
Calling destructor for BTree at address: 0x16f8ec830
Cleared BTree node at address: 0x16f8ec830
Calling destructor for BTree at address: 0x16f8ec790
Cleared BTree node at address: 0x139f09030
Calling destructor for BTree at address: 0x139f09030
Cleared BTree node at address: 0x139f09030
Cleared BTree node at address: 0x139f098d0
Calling destructor for BTree at address: 0x139f098d0
Cleared BTree node at address: 0x139f098d0
Cleared BTree node at address: 0x139f09970
Calling destructor for BTree at address: 0x139f09970
Cleared BTree node at address: 0x139f09970
Cleared BTree node at address: 0x16f8ec790
Destroying BPlusTree at address: 0x139f09800
Destroying BPlusTree at address: 0x139f09738
Destroying BPlusTree at address: 0x139f09670
Destroying BPlusTree at address: 0x139f095a8
Destroying BPlusTree at address: 0x139f094e0
Calling destructor for BTree at address: 0x16f8ecab0
Cleared BTree node at address: 0x16f8ecab0
Calling destructor for BTree at address: 0x16f8eca10
Cleared BTree node at address: 0x139f08dd0
Calling destructor for BTree at address: 0x139f08dd0
Cleared BTree node at address: 0x139f08dd0
Cleared BTree node at address: 0x139f08e70
Calling destructor for BTree at address: 0x139f08e70
Cleared BTree node at address: 0x139f08e70
Cleared BTree node at address: 0x139f08f10
Calling destructor for BTree at address: 0x139f08f10
Cleared BTree node at address: 0x139f08f10
Cleared BTree node at address: 0x16f8eca10
Destroying BPlusTree at address: 0x139f09410
Destroying BPlusTree at address: 0x139f09348
Destroying BPlusTree at address: 0x139f09280
Destroying BPlusTree at address: 0x139f091b8
Destroying BPlusTree at address: 0x139f090f0
Calling destructor for BTree at address: 0x16f8ed470
Cleared BTree node at address: 0x16f8ed470
Calling destructor for BTree at address: 0x16f8ed3d0
Cleared BTree node at address: 0x139f089a0
Calling destructor for BTree at address: 0x139f089a0
Cleared BTree node at address: 0x139f089a0
Cleared BTree node at address: 0x139f08d30
Calling destructor for BTree at address: 0x139f08d30
Cleared BTree node at address: 0x139f08d30
Cleared BTree node at address: 0x139f08810
Calling destructor for BTree at address: 0x139f08810
Cleared BTree node at address: 0x139f08810
Cleared BTree node at address: 0x16f8ed3d0
Destroying BPlusTree at address: 0x13a80b520
Destroying BPlusTree at address: 0x13a80b458
Destroying BPlusTree at address: 0x13a80b390
Destroying BPlusTree at address: 0x13a80b2c8
Destroying BPlusTree at address: 0x13a80b200
>>> Table created successfully: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x139f08180
Destroying BPlusTree at address: 0x139f085f0
Calling destructor for BTree at address: 0x16f8ee210
Cleared BTree node at address: 0x16f8ee210
Calling destructor for BTree at address: 0x16f8ee170
Cleared BTree node at address: 0x139f08740
Calling destructor for BTree at address: 0x139f08740
Cleared BTree node at address: 0x139f08740
Cleared BTree node at address: 0x139f087e0
Calling destructor for BTree at address: 0x139f087e0
Cleared BTree node at address: 0x139f087e0
Cleared BTree node at address: 0x139f08880
Calling destructor for BTree at address: 0x139f08880
Cleared BTree node at address: 0x139f08880
Cleared BTree node at address: 0x16f8ee170
Destroying BPlusTree at address: 0x139f09050
Destroying BPlusTree at address: 0x139f08f88
Destroying BPlusTree at address: 0x139f08ec0
Destroying BPlusTree at address: 0x139f08df8
Destroying BPlusTree at address: 0x139f08d30
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
Destroying BPlusTree at address: 0x139f08a50
Destroying BPlusTree at address: 0x139f08b20
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
Cleared BTree node at address: 0x139f08e20
current token is fields
get_column: fields is a keyword.
current token is last
current token is ,
current token is first
current token is ,
current token is dep
Cleared BTree node at address: 0x139f090a0
Cleared BTree node at address: 0x139f09140
Cleared BTree node at address: 0x139f091e0
Cleared BTree node at address: 0x139f09280
Cleared BTree node at address: 0x139f09320
current token is ,
current token is salary
current token is ,
current token is year
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x139f09140
Calling destructor for BTree at address: 0x139f09140
Cleared BTree node at address: 0x139f09140
Cleared BTree node at address: 0x139f091e0
Calling destructor for BTree at address: 0x139f091e0
Cleared BTree node at address: 0x139f091e0
Cleared BTree node at address: 0x139f090a0
Calling destructor for BTree at address: 0x139f090a0
Cleared BTree node at address: 0x139f090a0
Cleared BTree node at address: 0x139f09280
Calling destructor for BTree at address: 0x139f09280
Cleared BTree node at address: 0x139f09280
Cleared BTree node at address: 0x139f09320
Calling destructor for BTree at address: 0x139f09320
Cleared BTree node at address: 0x139f09320
Cleared BTree node at address: 0x139f09460
Calling destructor for BTree at address: 0x139f09460
Cleared BTree node at address: 0x139f09460
Cleared BTree node at address: 0x139f093c0
Calling destructor for BTree at address: 0x139f093c0
Cleared BTree node at address: 0x139f093c0
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ed838
Cleared BTree node at address: 0x16f8ed838
Calling destructor for BTree at address: 0x16f8ed798
Cleared BTree node at address: 0x16f8ed798
Calling destructor for BTree at address: 0x16f8ed658
Cleared BTree node at address: 0x16f8ed658
Calling destructor for BTree at address: 0x16f8ed5b8
Cleared BTree node at address: 0x16f8ed5b8
>>> Table already exists. Overwriting: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
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
Calling destructor for BTree at address: 0x16f8ec478
Cleared BTree node at address: 0x16f8ec478
Calling destructor for BTree at address: 0x16f8ec3d8
Cleared BTree node at address: 0x16f8ec3d8
Cleared BTree node at address: 0x16f8ec5d0
Cleared BTree node at address: 0x16f8ec670
Deleting last/only element: employee: Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------

Calling destructor for BTree at address: 0x16f8ec670
Cleared BTree node at address: 0x16f8ec670
Calling destructor for BTree at address: 0x16f8ec5d0
Cleared BTree node at address: 0x139f0a060
Calling destructor for BTree at address: 0x139f0a060
Cleared BTree node at address: 0x139f0a060
Cleared BTree node at address: 0x139f0a100
Calling destructor for BTree at address: 0x139f0a100
Cleared BTree node at address: 0x139f0a100
Cleared BTree node at address: 0x139f0a1a0
Calling destructor for BTree at address: 0x139f0a1a0
Cleared BTree node at address: 0x139f0a1a0
Cleared BTree node at address: 0x16f8ec5d0
Destroying BPlusTree at address: 0x139f093c0
Destroying BPlusTree at address: 0x139f092f8
Destroying BPlusTree at address: 0x139f09230
Destroying BPlusTree at address: 0x139f09168
Destroying BPlusTree at address: 0x139f090a0
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x139f0a060
Destroying BPlusTree at address: 0x16f8ec7d0
Cleared BTree node at address: 0x139f090a0
Destroying BPlusTree at address: 0x139f0a1f8
Destroying BPlusTree at address: 0x139f0a130
Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x139f09438
Destroying BPlusTree at address: 0x139f09370
Destroying BPlusTree at address: 0x139f092a8
Destroying BPlusTree at address: 0x139f091e0
Destroying BPlusTree at address: 0x16f8ec7d0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
Cleared BTree node at address: 0x139f09e80
Calling destructor for BTree at address: 0x139f09e80
Cleared BTree node at address: 0x139f09e80
Cleared BTree node at address: 0x139f09f20
Calling destructor for BTree at address: 0x139f09f20
Cleared BTree node at address: 0x139f09f20
Cleared BTree node at address: 0x139f09fc0
Calling destructor for BTree at address: 0x139f09fc0
Cleared BTree node at address: 0x139f09fc0
Cleared BTree node at address: 0x16f8ee538
Cleared BTree node at address: 0x16f8ee5d8
Calling destructor for BTree at address: 0x16f8ec830
Cleared BTree node at address: 0x16f8ec830
Calling destructor for BTree at address: 0x16f8ec790
Cleared BTree node at address: 0x139f09440
Calling destructor for BTree at address: 0x139f09440
Cleared BTree node at address: 0x139f09440
Cleared BTree node at address: 0x139f0aaa0
Calling destructor for BTree at address: 0x139f0aaa0
Cleared BTree node at address: 0x139f0aaa0
Cleared BTree node at address: 0x139f0ab40
Calling destructor for BTree at address: 0x139f0ab40
Cleared BTree node at address: 0x139f0ab40
Cleared BTree node at address: 0x16f8ec790
Destroying BPlusTree at address: 0x139f0a9d0
Destroying BPlusTree at address: 0x139f0a908
Destroying BPlusTree at address: 0x139f0a840
Destroying BPlusTree at address: 0x139f0a778
Destroying BPlusTree at address: 0x139f0a6b0
Calling destructor for BTree at address: 0x16f8ecab0
Cleared BTree node at address: 0x16f8ecab0
Calling destructor for BTree at address: 0x16f8eca10
Cleared BTree node at address: 0x139f091e0
Calling destructor for BTree at address: 0x139f091e0
Cleared BTree node at address: 0x139f091e0
Cleared BTree node at address: 0x139f09280
Calling destructor for BTree at address: 0x139f09280
Cleared BTree node at address: 0x139f09280
Cleared BTree node at address: 0x139f09320
Calling destructor for BTree at address: 0x139f09320
Cleared BTree node at address: 0x139f09320
Cleared BTree node at address: 0x16f8eca10
Destroying BPlusTree at address: 0x139f0a5e0
Destroying BPlusTree at address: 0x139f0a518
Destroying BPlusTree at address: 0x139f0a450
Destroying BPlusTree at address: 0x139f0a388
Destroying BPlusTree at address: 0x139f0a2c0
Calling destructor for BTree at address: 0x16f8ed470
Cleared BTree node at address: 0x16f8ed470
Calling destructor for BTree at address: 0x16f8ed3d0
Cleared BTree node at address: 0x139f090a0
Calling destructor for BTree at address: 0x139f090a0
Cleared BTree node at address: 0x139f090a0
Cleared BTree node at address: 0x139f09140
Calling destructor for BTree at address: 0x139f09140
Cleared BTree node at address: 0x139f09140
Cleared BTree node at address: 0x139f0a130
Calling destructor for BTree at address: 0x139f0a130
Cleared BTree node at address: 0x139f0a130
Cleared BTree node at address: 0x16f8ed3d0
Destroying BPlusTree at address: 0x13a80a520
Destroying BPlusTree at address: 0x13a80a458
Destroying BPlusTree at address: 0x13a80a390
Destroying BPlusTree at address: 0x13a80a2c8
Destroying BPlusTree at address: 0x13a80a200
>>> Table created successfully: employee
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x139f08c50
Destroying BPlusTree at address: 0x139f09840
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b8046d0
Calling destructor for BTree at address: 0x13b8046d0
Cleared BTree node at address: 0x13b8046d0
Cleared BTree node at address: 0x13b804770
Calling destructor for BTree at address: 0x13b804770
Cleared BTree node at address: 0x13b804770
Cleared BTree node at address: 0x13b804810
Calling destructor for BTree at address: 0x13b804810
Cleared BTree node at address: 0x13b804810
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b804580
Destroying BPlusTree at address: 0x13b8044b8
Destroying BPlusTree at address: 0x13b8043f0
Destroying BPlusTree at address: 0x13b804328
Destroying BPlusTree at address: 0x13b804260

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
Destroying BPlusTree at address: 0x139f09500
Destroying BPlusTree at address: 0x139f095d0
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
Cleared BTree node at address: 0x13b904c60
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is Joe
current token is ,
current token is CS
Cleared BTree node at address: 0x13b904ee0
Cleared BTree node at address: 0x13b904f80
Cleared BTree node at address: 0x13b905020
Cleared BTree node at address: 0x13b9050c0
Cleared BTree node at address: 0x13b905160
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b904f80
Calling destructor for BTree at address: 0x13b904f80
Cleared BTree node at address: 0x13b904f80
Cleared BTree node at address: 0x13b9052a0
Calling destructor for BTree at address: 0x13b9052a0
Cleared BTree node at address: 0x13b9052a0
Cleared BTree node at address: 0x13b905020
Calling destructor for BTree at address: 0x13b905020
Cleared BTree node at address: 0x13b905020
Cleared BTree node at address: 0x13b904ee0
Calling destructor for BTree at address: 0x13b904ee0
Cleared BTree node at address: 0x13b904ee0
Cleared BTree node at address: 0x13b9050c0
Calling destructor for BTree at address: 0x13b9050c0
Cleared BTree node at address: 0x13b9050c0
Cleared BTree node at address: 0x13b905160
Calling destructor for BTree at address: 0x13b905160
Cleared BTree node at address: 0x13b905160
Cleared BTree node at address: 0x13b905200
Calling destructor for BTree at address: 0x13b905200
Cleared BTree node at address: 0x13b905200
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: employee -> Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b904a50
Destroying BPlusTree at address: 0x13b904ee0
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b906190
Calling destructor for BTree at address: 0x13b906190
Cleared BTree node at address: 0x13b906190
Cleared BTree node at address: 0x13b906230
Calling destructor for BTree at address: 0x13b906230
Cleared BTree node at address: 0x13b906230
Cleared BTree node at address: 0x13b9062d0
Calling destructor for BTree at address: 0x13b9062d0
Cleared BTree node at address: 0x13b9062d0
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b9060c0
Destroying BPlusTree at address: 0x13b905ff8
Destroying BPlusTree at address: 0x13b905f30
Destroying BPlusTree at address: 0x13b905e68
Destroying BPlusTree at address: 0x13b905da0

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
Destroying BPlusTree at address: 0x13b905340
Destroying BPlusTree at address: 0x13b905410
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
Cleared BTree node at address: 0x13b906110
current token is values
get_column: values is a keyword.
current token is Blow
current token is ,
current token is JoAnn
current token is ,
current token is Physics
Cleared BTree node at address: 0x13b906410
Cleared BTree node at address: 0x13b9064b0
Cleared BTree node at address: 0x13b906550
Cleared BTree node at address: 0x13b9065f0
Cleared BTree node at address: 0x13b906690
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b9064b0
Calling destructor for BTree at address: 0x13b9064b0
Cleared BTree node at address: 0x13b9064b0
Cleared BTree node at address: 0x13b9067d0
Calling destructor for BTree at address: 0x13b9067d0
Cleared BTree node at address: 0x13b9067d0
Cleared BTree node at address: 0x13b906550
Calling destructor for BTree at address: 0x13b906550
Cleared BTree node at address: 0x13b906550
Cleared BTree node at address: 0x13b906410
Calling destructor for BTree at address: 0x13b906410
Cleared BTree node at address: 0x13b906410
Cleared BTree node at address: 0x13b9065f0
Calling destructor for BTree at address: 0x13b9065f0
Cleared BTree node at address: 0x13b9065f0
Cleared BTree node at address: 0x13b906690
Calling destructor for BTree at address: 0x13b906690
Cleared BTree node at address: 0x13b906690
Cleared BTree node at address: 0x13b906730
Calling destructor for BTree at address: 0x13b906730
Cleared BTree node at address: 0x13b906730
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: employee -> Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b905f40
Destroying BPlusTree at address: 0x13b906410
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x139f0a270
Calling destructor for BTree at address: 0x139f0a270
Cleared BTree node at address: 0x139f0a270
Cleared BTree node at address: 0x139f0a310
Calling destructor for BTree at address: 0x139f0a310
Cleared BTree node at address: 0x139f0a310
Cleared BTree node at address: 0x139f0a3b0
Calling destructor for BTree at address: 0x139f0a3b0
Cleared BTree node at address: 0x139f0a3b0
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x139f0a1a0
Destroying BPlusTree at address: 0x139f0a0d8
Destroying BPlusTree at address: 0x139f0a010
Destroying BPlusTree at address: 0x139f09f48
Destroying BPlusTree at address: 0x139f09e80

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
Destroying BPlusTree at address: 0x13b906870
Destroying BPlusTree at address: 0x13b906940
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
Cleared BTree node at address: 0x13b804d70
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jack
current token is ,
current token is HR
Cleared BTree node at address: 0x13b804ff0
Cleared BTree node at address: 0x13b805090
Cleared BTree node at address: 0x13b805130
Cleared BTree node at address: 0x13b8051d0
Cleared BTree node at address: 0x13b805270
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b805090
Calling destructor for BTree at address: 0x13b805090
Cleared BTree node at address: 0x13b805090
Cleared BTree node at address: 0x13b8053b0
Calling destructor for BTree at address: 0x13b8053b0
Cleared BTree node at address: 0x13b8053b0
Cleared BTree node at address: 0x13b805130
Calling destructor for BTree at address: 0x13b805130
Cleared BTree node at address: 0x13b805130
Cleared BTree node at address: 0x13b804ff0
Calling destructor for BTree at address: 0x13b804ff0
Cleared BTree node at address: 0x13b804ff0
Cleared BTree node at address: 0x13b8051d0
Calling destructor for BTree at address: 0x13b8051d0
Cleared BTree node at address: 0x13b8051d0
Cleared BTree node at address: 0x13b805270
Calling destructor for BTree at address: 0x13b805270
Cleared BTree node at address: 0x13b805270
Cleared BTree node at address: 0x13b805310
Calling destructor for BTree at address: 0x13b805310
Cleared BTree node at address: 0x13b805310
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: employee -> Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
Record#        last           first          dep            salary         year           
------------------------------------------------------------------------------------------
0              Blow           Joe            CS             100000         2018           
1              Blow           JoAnn          Physics        200000         2016           

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b804ba0
Destroying BPlusTree at address: 0x13b804ff0
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b808530
Calling destructor for BTree at address: 0x13b808530
Cleared BTree node at address: 0x13b808530
Cleared BTree node at address: 0x13b8085d0
Calling destructor for BTree at address: 0x13b8085d0
Cleared BTree node at address: 0x13b8085d0
Cleared BTree node at address: 0x13b808670
Calling destructor for BTree at address: 0x13b808670
Cleared BTree node at address: 0x13b808670
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b807c50
Destroying BPlusTree at address: 0x13b8082c0
Destroying BPlusTree at address: 0x13b8083a0
Destroying BPlusTree at address: 0x13b807b88
Destroying BPlusTree at address: 0x13b8080e0
Destroying BPlusTree at address: 0x13b8081c0
Destroying BPlusTree at address: 0x13b807ac0
Destroying BPlusTree at address: 0x13b807f00
Destroying BPlusTree at address: 0x13b807fe0
Destroying BPlusTree at address: 0x13b8079f8
Destroying BPlusTree at address: 0x13b807d20
Destroying BPlusTree at address: 0x13b807e00
Destroying BPlusTree at address: 0x13b807930

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
Destroying BPlusTree at address: 0x13b805450
Destroying BPlusTree at address: 0x13b805520
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
Cleared BTree node at address: 0x13b807bc0
current token is values
get_column: values is a keyword.
current token is Johnson
current token is ,
current token is Jimmy
current token is ,
current token is Chemistry
Cleared BTree node at address: 0x13b807e40
Cleared BTree node at address: 0x13b807ee0
Cleared BTree node at address: 0x13b807f80
Cleared BTree node at address: 0x13b808020
Cleared BTree node at address: 0x13b8080c0
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b807ee0
Calling destructor for BTree at address: 0x13b807ee0
Cleared BTree node at address: 0x13b807ee0
Cleared BTree node at address: 0x13b808200
Calling destructor for BTree at address: 0x13b808200
Cleared BTree node at address: 0x13b808200
Cleared BTree node at address: 0x13b807f80
Calling destructor for BTree at address: 0x13b807f80
Cleared BTree node at address: 0x13b807f80
Cleared BTree node at address: 0x13b807e40
Calling destructor for BTree at address: 0x13b807e40
Cleared BTree node at address: 0x13b807e40
Cleared BTree node at address: 0x13b808020
Calling destructor for BTree at address: 0x13b808020
Cleared BTree node at address: 0x13b808020
Cleared BTree node at address: 0x13b8080c0
Calling destructor for BTree at address: 0x13b8080c0
Cleared BTree node at address: 0x13b8080c0
Cleared BTree node at address: 0x13b808160
Calling destructor for BTree at address: 0x13b808160
Cleared BTree node at address: 0x13b808160
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b807aa0
Destroying BPlusTree at address: 0x13b808580
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b906d40
Calling destructor for BTree at address: 0x13b906d40
Cleared BTree node at address: 0x13b906d40
Cleared BTree node at address: 0x13b906de0
Calling destructor for BTree at address: 0x13b906de0
Cleared BTree node at address: 0x13b906de0
Cleared BTree node at address: 0x13b906e80
Calling destructor for BTree at address: 0x13b906e80
Cleared BTree node at address: 0x13b906e80
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b906730
Destroying BPlusTree at address: 0x13b906ba0
Destroying BPlusTree at address: 0x13b906c70
Destroying BPlusTree at address: 0x13b906668
Destroying BPlusTree at address: 0x13b9069a0
Destroying BPlusTree at address: 0x13b906ad0
Destroying BPlusTree at address: 0x13b9065a0
Destroying BPlusTree at address: 0x13b906800
Destroying BPlusTree at address: 0x13b9068d0
Destroying BPlusTree at address: 0x13b9064d8
Destroying BPlusTree at address: 0x13b905f40
Destroying BPlusTree at address: 0x13b906010
Destroying BPlusTree at address: 0x13b906410

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
Destroying BPlusTree at address: 0x13b8082a0
Destroying BPlusTree at address: 0x13b808370
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
Cleared BTree node at address: 0x13b9069b0
current token is fields
get_column: fields is a keyword.
current token is fname
current token is ,
current token is lname
current token is ,
current token is major
Cleared BTree node at address: 0x13b906c30
Cleared BTree node at address: 0x13b906cd0
Cleared BTree node at address: 0x13b906d70
Cleared BTree node at address: 0x13b906e10
Cleared BTree node at address: 0x13b906f20
current token is ,
current token is age
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b906cd0
Calling destructor for BTree at address: 0x13b906cd0
Cleared BTree node at address: 0x13b906cd0
Cleared BTree node at address: 0x13b907060
Calling destructor for BTree at address: 0x13b907060
Cleared BTree node at address: 0x13b907060
Cleared BTree node at address: 0x13b906d70
Calling destructor for BTree at address: 0x13b906d70
Cleared BTree node at address: 0x13b906d70
Cleared BTree node at address: 0x13b906c30
Calling destructor for BTree at address: 0x13b906c30
Cleared BTree node at address: 0x13b906c30
Cleared BTree node at address: 0x13b906e10
Calling destructor for BTree at address: 0x13b906e10
Cleared BTree node at address: 0x13b906e10
Cleared BTree node at address: 0x13b906f20
Calling destructor for BTree at address: 0x13b906f20
Cleared BTree node at address: 0x13b906f20
Cleared BTree node at address: 0x13b906fc0
Calling destructor for BTree at address: 0x13b906fc0
Cleared BTree node at address: 0x13b906fc0
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ed838
Cleared BTree node at address: 0x16f8ed838
Calling destructor for BTree at address: 0x16f8ed798
Cleared BTree node at address: 0x16f8ed798
Calling destructor for BTree at address: 0x16f8ed658
Cleared BTree node at address: 0x16f8ed658
Calling destructor for BTree at address: 0x16f8ed5b8
Cleared BTree node at address: 0x16f8ed5b8
>>> Creating table: student with fields: fname lname major age 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x13b808500
Destroying BPlusTree at address: 0x16f8ec7d0
Cleared BTree node at address: 0x13b8085d0
Destroying BPlusTree at address: 0x13b807f08
Destroying BPlusTree at address: 0x13b807e40
Destroying BPlusTree at address: 0x16f8ec7d0
Destroying BPlusTree at address: 0x16f8ec7d0
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
Cleared BTree node at address: 0x16f8ee718
Cleared BTree node at address: 0x16f8ee7b8
Calling destructor for BTree at address: 0x16f8ec830
Cleared BTree node at address: 0x16f8ec830
Calling destructor for BTree at address: 0x16f8ec790
Cleared BTree node at address: 0x13b808db0
Calling destructor for BTree at address: 0x13b808db0
Cleared BTree node at address: 0x13b808db0
Cleared BTree node at address: 0x13b808e50
Calling destructor for BTree at address: 0x13b808e50
Cleared BTree node at address: 0x13b808e50
Cleared BTree node at address: 0x16f8ec790
Destroying BPlusTree at address: 0x13b808c88
Destroying BPlusTree at address: 0x13b808bc0
Destroying BPlusTree at address: 0x13b808af8
Destroying BPlusTree at address: 0x13b808a30
Calling destructor for BTree at address: 0x16f8ecab0
Cleared BTree node at address: 0x16f8ecab0
Calling destructor for BTree at address: 0x16f8eca10
Cleared BTree node at address: 0x13b807e40
Calling destructor for BTree at address: 0x13b807e40
Cleared BTree node at address: 0x13b807e40
Cleared BTree node at address: 0x13b807ee0
Calling destructor for BTree at address: 0x13b807ee0
Cleared BTree node at address: 0x13b807ee0
Cleared BTree node at address: 0x16f8eca10
Destroying BPlusTree at address: 0x13b808968
Destroying BPlusTree at address: 0x13b8088a0
Destroying BPlusTree at address: 0x13b8087d8
Destroying BPlusTree at address: 0x13b808710
Calling destructor for BTree at address: 0x16f8ed470
Cleared BTree node at address: 0x16f8ed470
Calling destructor for BTree at address: 0x16f8ed3d0
Cleared BTree node at address: 0x13b8085d0
Calling destructor for BTree at address: 0x13b8085d0
Cleared BTree node at address: 0x13b8085d0
Cleared BTree node at address: 0x13b808670
Calling destructor for BTree at address: 0x13b808670
Cleared BTree node at address: 0x13b808670
Cleared BTree node at address: 0x16f8ed3d0
Destroying BPlusTree at address: 0x13b808228
Destroying BPlusTree at address: 0x13b808160
Destroying BPlusTree at address: 0x13b808098
Destroying BPlusTree at address: 0x13b807fd0
>>> Table created successfully: student
Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b808370
Destroying BPlusTree at address: 0x13b807aa0
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b808160
Calling destructor for BTree at address: 0x13b808160
Cleared BTree node at address: 0x13b808160
Cleared BTree node at address: 0x13b808200
Calling destructor for BTree at address: 0x13b808200
Cleared BTree node at address: 0x13b808200
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b808098
Destroying BPlusTree at address: 0x13b807fd0
Destroying BPlusTree at address: 0x13b807f08
Destroying BPlusTree at address: 0x13b807e40

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
Destroying BPlusTree at address: 0x13b907100
Destroying BPlusTree at address: 0x13b9071d0
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
Cleared BTree node at address: 0x13b8084d0
current token is values
get_column: values is a keyword.
current token is Flo
current token is ,
current token is Yao
current token is ,
current token is Art
current token is ,
current token is 20
Cleared BTree node at address: 0x13b808750
Cleared BTree node at address: 0x13b8087f0
Cleared BTree node at address: 0x13b808890
Cleared BTree node at address: 0x13b808930
Cleared BTree node at address: 0x13b8089d0
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b8087f0
Calling destructor for BTree at address: 0x13b8087f0
Cleared BTree node at address: 0x13b8087f0
Cleared BTree node at address: 0x13b808890
Calling destructor for BTree at address: 0x13b808890
Cleared BTree node at address: 0x13b808890
Cleared BTree node at address: 0x13b808750
Calling destructor for BTree at address: 0x13b808750
Cleared BTree node at address: 0x13b808750
Cleared BTree node at address: 0x13b808930
Calling destructor for BTree at address: 0x13b808930
Cleared BTree node at address: 0x13b808930
Cleared BTree node at address: 0x13b8089d0
Calling destructor for BTree at address: 0x13b8089d0
Cleared BTree node at address: 0x13b8089d0
Cleared BTree node at address: 0x13b808a70
Calling destructor for BTree at address: 0x13b808a70
Cleared BTree node at address: 0x13b808a70
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: student -> Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b808cb0
Destroying BPlusTree at address: 0x13b808d80
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b809dd0
Calling destructor for BTree at address: 0x13b809dd0
Cleared BTree node at address: 0x13b809dd0
Cleared BTree node at address: 0x13b809e70
Calling destructor for BTree at address: 0x13b809e70
Cleared BTree node at address: 0x13b809e70
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b809d08
Destroying BPlusTree at address: 0x13b809c40
Destroying BPlusTree at address: 0x13b809b78
Destroying BPlusTree at address: 0x13b809ab0

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
Destroying BPlusTree at address: 0x13b808b10
Destroying BPlusTree at address: 0x13b808be0
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
Cleared BTree node at address: 0x13b809c60
current token is values
get_column: values is a keyword.
current token is Bo
current token is ,
current token is Yang
current token is ,
current token is CS
Cleared BTree node at address: 0x13b809f10
Cleared BTree node at address: 0x13b809fb0
Cleared BTree node at address: 0x13b80a050
Cleared BTree node at address: 0x13b80a0f0
Cleared BTree node at address: 0x13b80a190
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b809fb0
Calling destructor for BTree at address: 0x13b809fb0
Cleared BTree node at address: 0x13b809fb0
Cleared BTree node at address: 0x13b80a050
Calling destructor for BTree at address: 0x13b80a050
Cleared BTree node at address: 0x13b80a050
Cleared BTree node at address: 0x13b809f10
Calling destructor for BTree at address: 0x13b809f10
Cleared BTree node at address: 0x13b809f10
Cleared BTree node at address: 0x13b80a0f0
Calling destructor for BTree at address: 0x13b80a0f0
Cleared BTree node at address: 0x13b80a0f0
Cleared BTree node at address: 0x13b80a190
Calling destructor for BTree at address: 0x13b80a190
Cleared BTree node at address: 0x13b80a190
Cleared BTree node at address: 0x13b80a230
Calling destructor for BTree at address: 0x13b80a230
Cleared BTree node at address: 0x13b80a230
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: student -> Table name: student, records: 1
_last_record: 0
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b809f00
Destroying BPlusTree at address: 0x13b809fd0
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b80ba90
Calling destructor for BTree at address: 0x13b80ba90
Cleared BTree node at address: 0x13b80ba90
Cleared BTree node at address: 0x13b80bb30
Calling destructor for BTree at address: 0x13b80bb30
Cleared BTree node at address: 0x13b80bb30
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b80b9c8
Destroying BPlusTree at address: 0x13b80b900
Destroying BPlusTree at address: 0x13b80b838
Destroying BPlusTree at address: 0x13b80b770

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
Destroying BPlusTree at address: 0x13b80a2d0
Destroying BPlusTree at address: 0x13b80a3a0
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
Cleared BTree node at address: 0x13b80b7d0
current token is values
get_column: values is a keyword.
current token is Sammuel L.
current token is ,
current token is Jackson
current token is ,
current token is CS
Cleared BTree node at address: 0x13b80ba50
Cleared BTree node at address: 0x13b80baf0
Cleared BTree node at address: 0x13b80bbd0
Cleared BTree node at address: 0x13b80bc70
Cleared BTree node at address: 0x13b80bd10
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13b80baf0
Calling destructor for BTree at address: 0x13b80baf0
Cleared BTree node at address: 0x13b80baf0
Cleared BTree node at address: 0x13b80bbd0
Calling destructor for BTree at address: 0x13b80bbd0
Cleared BTree node at address: 0x13b80bbd0
Cleared BTree node at address: 0x13b80ba50
Calling destructor for BTree at address: 0x13b80ba50
Cleared BTree node at address: 0x13b80ba50
Cleared BTree node at address: 0x13b80bc70
Calling destructor for BTree at address: 0x13b80bc70
Cleared BTree node at address: 0x13b80bc70
Cleared BTree node at address: 0x13b80bd10
Calling destructor for BTree at address: 0x13b80bd10
Cleared BTree node at address: 0x13b80bd10
Cleared BTree node at address: 0x13b80bdb0
Calling destructor for BTree at address: 0x13b80bdb0
Cleared BTree node at address: 0x13b80bdb0
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
Found Pair: student -> Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
Record#        fname          lname          major          age            
---------------------------------------------------------------------------
0              Flo            Yao            Art            20             
1              Bo             Yang           CS             28             

Table default constructor fired!
Default table file created: default_table.tbl
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13b80ba50
Destroying BPlusTree at address: 0x13b80bbb0
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13b80ea30
Calling destructor for BTree at address: 0x13b80ea30
Cleared BTree node at address: 0x13b80ea30
Cleared BTree node at address: 0x13b80ead0
Calling destructor for BTree at address: 0x13b80ead0
Cleared BTree node at address: 0x13b80ead0
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13b80e428
Destroying BPlusTree at address: 0x13b80e830
Destroying BPlusTree at address: 0x13b80e900
Destroying BPlusTree at address: 0x13b80e360
Destroying BPlusTree at address: 0x13b80e298
Destroying BPlusTree at address: 0x13b80e690
Destroying BPlusTree at address: 0x13b80e760
Destroying BPlusTree at address: 0x13b80e1d0
Destroying BPlusTree at address: 0x13b80e4f0
Destroying BPlusTree at address: 0x13b80e5c0

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
Destroying BPlusTree at address: 0x13b80be50
Destroying BPlusTree at address: 0x13b80bf20
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
Cleared BTree node at address: 0x139f08b00
current token is values
get_column: values is a keyword.
current token is Billy
current token is ,
current token is Jackson
current token is ,
current token is Math
Cleared BTree node at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f0c960
Cleared BTree node at address: 0x139f0ca00
Cleared BTree node at address: 0x139f0caa0
Cleared BTree node at address: 0x139f0cb40
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
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x139f0c960
Calling destructor for BTree at address: 0x139f0c960
Cleared BTree node at address: 0x139f0c960
Cleared BTree node at address: 0x139f0ca00
Calling destructor for BTree at address: 0x139f0ca00
Cleared BTree node at address: 0x139f0ca00
Cleared BTree node at address: 0x139f0c8c0
Calling destructor for BTree at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f0caa0
Calling destructor for BTree at address: 0x139f0caa0
Cleared BTree node at address: 0x139f0caa0
Cleared BTree node at address: 0x139f0cb40
Calling destructor for BTree at address: 0x139f0cb40
Cleared BTree node at address: 0x139f0cb40
Cleared BTree node at address: 0x139f0cbe0
Calling destructor for BTree at address: 0x139f0cbe0
Cleared BTree node at address: 0x139f0cbe0
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x139f0c8c0
Destroying BPlusTree at address: 0x139f0c990
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x139f0d930
Calling destructor for BTree at address: 0x139f0d930
Cleared BTree node at address: 0x139f0d930
Cleared BTree node at address: 0x139f0d9d0
Calling destructor for BTree at address: 0x139f0d9d0
Cleared BTree node at address: 0x139f0d9d0
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x139f0d078
Destroying BPlusTree at address: 0x139f0d6d0
Destroying BPlusTree at address: 0x139f0d7c0
Destroying BPlusTree at address: 0x139f0cfb0
Destroying BPlusTree at address: 0x139f0d4f0
Destroying BPlusTree at address: 0x139f0d5d0
Destroying BPlusTree at address: 0x139f0cee8
Destroying BPlusTree at address: 0x139f0d310
Destroying BPlusTree at address: 0x139f0d3f0
Destroying BPlusTree at address: 0x139f0ce20
Destroying BPlusTree at address: 0x139f0d140
Destroying BPlusTree at address: 0x139f0d210

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
Destroying BPlusTree at address: 0x139f0cc80
Destroying BPlusTree at address: 0x139f0cd50
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
Cleared BTree node at address: 0x13bb040e0
current token is values
get_column: values is a keyword.
current token is Mary Ann
current token is ,
current token is Davis
current token is ,
current token is Math
current token is ,
current token is 30
Cleared BTree node at address: 0x13bb04360
Cleared BTree node at address: 0x13bb04400
Cleared BTree node at address: 0x13bb044a0
Cleared BTree node at address: 0x13bb04540
Cleared BTree node at address: 0x13bb045e0
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13bb04400
Calling destructor for BTree at address: 0x13bb04400
Cleared BTree node at address: 0x13bb04400
Cleared BTree node at address: 0x13bb044a0
Calling destructor for BTree at address: 0x13bb044a0
Cleared BTree node at address: 0x13bb044a0
Cleared BTree node at address: 0x13bb04360
Calling destructor for BTree at address: 0x13bb04360
Cleared BTree node at address: 0x13bb04360
Cleared BTree node at address: 0x13bb04540
Calling destructor for BTree at address: 0x13bb04540
Cleared BTree node at address: 0x13bb04540
Cleared BTree node at address: 0x13bb045e0
Calling destructor for BTree at address: 0x13bb045e0
Cleared BTree node at address: 0x13bb045e0
Cleared BTree node at address: 0x13bb04680
Calling destructor for BTree at address: 0x13bb04680
Cleared BTree node at address: 0x13bb04680
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18

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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13bb04360
Destroying BPlusTree at address: 0x13bb04430
Calling destructor for BTree at address: 0x16f8ee040
Cleared BTree node at address: 0x16f8ee040
Calling destructor for BTree at address: 0x16f8edfa0
Cleared BTree node at address: 0x13bb089f0
Calling destructor for BTree at address: 0x13bb089f0
Cleared BTree node at address: 0x13bb089f0
Cleared BTree node at address: 0x13bb08a90
Calling destructor for BTree at address: 0x13bb08a90
Cleared BTree node at address: 0x13bb08a90
Cleared BTree node at address: 0x16f8edfa0
Destroying BPlusTree at address: 0x13bb07f38
Destroying BPlusTree at address: 0x13bb086a0
Destroying BPlusTree at address: 0x13bb08790
Destroying BPlusTree at address: 0x13bb08870
Destroying BPlusTree at address: 0x13bb07e70
Destroying BPlusTree at address: 0x13bb084b0
Destroying BPlusTree at address: 0x13bb08590
Destroying BPlusTree at address: 0x13bb07da8
Destroying BPlusTree at address: 0x13bb082c0
Destroying BPlusTree at address: 0x13bb083b0
Destroying BPlusTree at address: 0x13bb07ce0
Destroying BPlusTree at address: 0x13bb08000
Destroying BPlusTree at address: 0x13bb080e0
Destroying BPlusTree at address: 0x13bb081c0

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
Destroying BPlusTree at address: 0x13bb04720
Destroying BPlusTree at address: 0x13bb04830
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
Cleared BTree node at address: 0x13bb04850
current token is employee
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13bb04850
Calling destructor for BTree at address: 0x13bb04850
Cleared BTree node at address: 0x13bb04850
Cleared BTree node at address: 0x13bb04360
Calling destructor for BTree at address: 0x13bb04360
Cleared BTree node at address: 0x13bb04360
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_3 and fields: last first dep salary year 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ebf50
Destroying BPlusTree at address: 0x13bb0a730
Destroying BPlusTree at address: 0x16f8ebf50
Cleared BTree node at address: 0x13bb08a80
Destroying BPlusTree at address: 0x13bb0a8c8
Destroying BPlusTree at address: 0x13bb0a800
Destroying BPlusTree at address: 0x16f8ebf50
Destroying BPlusTree at address: 0x16f8ebf50
Destroying BPlusTree at address: 0x13bb0ac88
Destroying BPlusTree at address: 0x13bb0abc0
Destroying BPlusTree at address: 0x13bb0aaf8
Destroying BPlusTree at address: 0x13bb0aa30
Destroying BPlusTree at address: 0x16f8ebf50
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
Cleared BTree node at address: 0x16f8edc08
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8ecea8
Cleared BTree node at address: 0x16f8ecea8
Calling destructor for BTree at address: 0x16f8ece08
Cleared BTree node at address: 0x13bb08a80
Calling destructor for BTree at address: 0x13bb08a80
Cleared BTree node at address: 0x13bb08a80
Cleared BTree node at address: 0x13bb0a990
Calling destructor for BTree at address: 0x13bb0a990
Cleared BTree node at address: 0x13bb0a990
Cleared BTree node at address: 0x13bb0a800
Calling destructor for BTree at address: 0x13bb0a800
Cleared BTree node at address: 0x13bb0a800
Cleared BTree node at address: 0x16f8ece08
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13bb07ce0
Destroying BPlusTree at address: 0x13bb07db0
Cleared BTree node at address: 0x16f8ee338
Cleared BTree node at address: 0x16f8ee3d8
Calling destructor for BTree at address: 0x16f8edca8
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8edc08
Cleared BTree node at address: 0x13bb0aa30
Calling destructor for BTree at address: 0x13bb0aa30
Cleared BTree node at address: 0x13bb0aa30
Cleared BTree node at address: 0x13bb0a730
Calling destructor for BTree at address: 0x13bb0a730
Cleared BTree node at address: 0x13bb0a730
Cleared BTree node at address: 0x13bb0bf50
Calling destructor for BTree at address: 0x13bb0bf50
Cleared BTree node at address: 0x13bb0bf50
Cleared BTree node at address: 0x16f8edc08

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
Destroying BPlusTree at address: 0x13bb04400
Destroying BPlusTree at address: 0x13bb044d0
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
Cleared BTree node at address: 0x13bb0a730
current token is first
current token is ,
current token is dep
current token is from
get_column: from is a keyword.
current token is employee
Cleared BTree node at address: 0x13bb0e690
Cleared BTree node at address: 0x13bb0e730
Cleared BTree node at address: 0x13bb0e7d0
Cleared BTree node at address: 0x13bb0e870
Cleared BTree node at address: 0x13bb0e910
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13bb0e730
Calling destructor for BTree at address: 0x13bb0e730
Cleared BTree node at address: 0x13bb0e730
Cleared BTree node at address: 0x13bb0e7d0
Calling destructor for BTree at address: 0x13bb0e7d0
Cleared BTree node at address: 0x13bb0e7d0
Cleared BTree node at address: 0x13bb0e690
Calling destructor for BTree at address: 0x13bb0e690
Cleared BTree node at address: 0x13bb0e690
Cleared BTree node at address: 0x13bb0e870
Calling destructor for BTree at address: 0x13bb0e870
Cleared BTree node at address: 0x13bb0e870
Cleared BTree node at address: 0x13bb0e910
Calling destructor for BTree at address: 0x13bb0e910
Cleared BTree node at address: 0x13bb0e910
Cleared BTree node at address: 0x13bb0e9b0
Calling destructor for BTree at address: 0x13bb0e9b0
Cleared BTree node at address: 0x13bb0e9b0
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_4 and fields: last first dep 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ebf50
Destroying BPlusTree at address: 0x13bb11480
Destroying BPlusTree at address: 0x16f8ebf50
Cleared BTree node at address: 0x13bb116e0
Destroying BPlusTree at address: 0x13bb11618
Destroying BPlusTree at address: 0x13bb11550
Destroying BPlusTree at address: 0x16f8ebf50
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
Cleared BTree node at address: 0x16f8edc08
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8ecea8
Cleared BTree node at address: 0x16f8ecea8
Calling destructor for BTree at address: 0x16f8ece08
Cleared BTree node at address: 0x13bb116e0
Calling destructor for BTree at address: 0x13bb116e0
Cleared BTree node at address: 0x13bb116e0
Cleared BTree node at address: 0x13bb11780
Calling destructor for BTree at address: 0x13bb11780
Cleared BTree node at address: 0x13bb11780
Cleared BTree node at address: 0x16f8ece08
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x13bb0e690
Destroying BPlusTree at address: 0x13bb0e760
Destroying BPlusTree at address: 0x13d00a520
Destroying BPlusTree at address: 0x13b90bc40
Destroying BPlusTree at address: 0x13b90bd30
Destroying BPlusTree at address: 0x13d00a458
Destroying BPlusTree at address: 0x13b90baa0
Destroying BPlusTree at address: 0x13b90bb70
Destroying BPlusTree at address: 0x13d00a390
Destroying BPlusTree at address: 0x13b90b900
Destroying BPlusTree at address: 0x13b90b9d0
Destroying BPlusTree at address: 0x13d00a2c8
Destroying BPlusTree at address: 0x13b90b760
Destroying BPlusTree at address: 0x13b90b830
Destroying BPlusTree at address: 0x13d00a200
Cleared BTree node at address: 0x13bb08a80
Calling destructor for BTree at address: 0x13bb08a80
Cleared BTree node at address: 0x13bb08a80
Cleared BTree node at address: 0x13bb0a7d0
Calling destructor for BTree at address: 0x13bb0a7d0
Cleared BTree node at address: 0x13bb0a7d0
Cleared BTree node at address: 0x13bb0a900
Calling destructor for BTree at address: 0x13bb0a900
Cleared BTree node at address: 0x13bb0a900
Cleared BTree node at address: 0x16f8ee338
Cleared BTree node at address: 0x16f8ee3d8
Calling destructor for BTree at address: 0x16f8edca8
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8edc08
Cleared BTree node at address: 0x139f08d50
Calling destructor for BTree at address: 0x139f08d50
Cleared BTree node at address: 0x139f08d50
Cleared BTree node at address: 0x139f0c8c0
Calling destructor for BTree at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f0c8c0
Cleared BTree node at address: 0x16f8edc08

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
Destroying BPlusTree at address: 0x13bb0ea50
Destroying BPlusTree at address: 0x13bb0eb70
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
Cleared BTree node at address: 0x139f0c8c0
current token is employee
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x139f0c8c0
Calling destructor for BTree at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f0c8c0
Cleared BTree node at address: 0x139f08d50
Calling destructor for BTree at address: 0x139f08d50
Cleared BTree node at address: 0x139f08d50
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_5 and fields: last 

-------Table ctor 3 fired!-------

Destroying BPlusTree at address: 0x16f8ebf50
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
Cleared BTree node at address: 0x16f8edc08
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8ecea8
Cleared BTree node at address: 0x16f8ecea8
Calling destructor for BTree at address: 0x16f8ece08
Cleared BTree node at address: 0x16f8ece08
Destroying BPlusTree at address: 0x16f8ed980
Destroying BPlusTree at address: 0x139f0cd30
Destroying BPlusTree at address: 0x139f0ce00
Destroying BPlusTree at address: 0x13bb119b0
Destroying BPlusTree at address: 0x13bb17630
Destroying BPlusTree at address: 0x13bb17700
Destroying BPlusTree at address: 0x13bb118e8
Destroying BPlusTree at address: 0x13bb17490
Destroying BPlusTree at address: 0x13bb17560
Destroying BPlusTree at address: 0x13bb11820
Cleared BTree node at address: 0x13be04080
Calling destructor for BTree at address: 0x13be04080
Cleared BTree node at address: 0x13be04080
Cleared BTree node at address: 0x13bd040a0
Calling destructor for BTree at address: 0x13bd040a0
Cleared BTree node at address: 0x13bd040a0
Cleared BTree node at address: 0x16f8ee338
Cleared BTree node at address: 0x16f8ee3d8
Calling destructor for BTree at address: 0x16f8edca8
Cleared BTree node at address: 0x16f8edca8
Calling destructor for BTree at address: 0x16f8edc08
Cleared BTree node at address: 0x16f8edc08

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
Destroying BPlusTree at address: 0x139f0c960
Destroying BPlusTree at address: 0x139f0cc60
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
Cleared BTree node at address: 0x13ba04b60
current token is employee
current token is where
get_column: where is a keyword.
current token is last
current token is =
Cleared BTree node at address: 0x13ba04de0
Cleared BTree node at address: 0x13ba04e80
Cleared BTree node at address: 0x13ba04f20
Cleared BTree node at address: 0x13ba04fc0
Cleared BTree node at address: 0x13ba05060
current token is Johnson
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
Calling destructor for BTree at address: 0x16f8eca50
Cleared BTree node at address: 0x13ba04e80
Calling destructor for BTree at address: 0x13ba04e80
Cleared BTree node at address: 0x13ba04e80
Cleared BTree node at address: 0x13ba04f20
Calling destructor for BTree at address: 0x13ba04f20
Cleared BTree node at address: 0x13ba04f20
Cleared BTree node at address: 0x13ba04de0
Calling destructor for BTree at address: 0x13ba04de0
Cleared BTree node at address: 0x13ba04de0
Cleared BTree node at address: 0x13ba04fc0
Calling destructor for BTree at address: 0x13ba04fc0
Cleared BTree node at address: 0x13ba04fc0
Cleared BTree node at address: 0x13ba05060
Calling destructor for BTree at address: 0x13ba05060
Cleared BTree node at address: 0x13ba05060
Cleared BTree node at address: 0x13ba05100
Calling destructor for BTree at address: 0x13ba05100
Cleared BTree node at address: 0x13ba05100
Cleared BTree node at address: 0x16f8eca50
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
Calling destructor for BTree at address: 0x16f8ecaa8
Cleared BTree node at address: 0x16f8ecaa8
Calling destructor for BTree at address: 0x16f8eca08
Cleared BTree node at address: 0x16f8eca08
Calling destructor for BTree at address: 0x16f8ec8c8
Cleared BTree node at address: 0x16f8ec8c8
Calling destructor for BTree at address: 0x16f8ec828
Cleared BTree node at address: 0x16f8ec828
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
Calling destructor for BTree at address: 0x16f8ec8d8
Cleared BTree node at address: 0x16f8ec8d8
Calling destructor for BTree at address: 0x16f8ec838
Cleared BTree node at address: 0x16f8ec838
Calling destructor for BTree at address: 0x16f8ecab8
Cleared BTree node at address: 0x16f8ecab8
Calling destructor for BTree at address: 0x16f8eca18
Cleared BTree node at address: 0x16f8eca18
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

Destroying BPlusTree at address: 0x16f8ebf30
Destroying BPlusTree at address: 0x139e07110
Destroying BPlusTree at address: 0x16f8ebf30
Cleared BTree node at address: 0x13bb0a7d0
Destroying BPlusTree at address: 0x13bb1b398
Destroying BPlusTree at address: 0x13bb1b2d0
Destroying BPlusTree at address: 0x16f8ebf30
Destroying BPlusTree at address: 0x16f8ebf30
zsh: segmentation fault  build/bin/basic_test
jwcomputer@Mac Final_Dec_20 % 