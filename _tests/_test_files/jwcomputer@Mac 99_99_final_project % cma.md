jwcomputer@Mac 99_99_final_project % cmake --build build   
[ 28%] Built target main
[ 32%] Built target gtest
[ 60%] Built target basic_test
[ 88%] Built target testB
[ 92%] Built target gmock
[ 96%] Built target gmock_main
[100%] Built target gtest_main
jwcomputer@Mac 99_99_final_project % cmake --build build   
[ 28%] Built target main
[ 32%] Built target gtest
[ 60%] Built target basic_test
[ 88%] Built target testB
[ 92%] Built target gmock
[ 96%] Built target gmock_main
[100%] Built target gtest_main
jwcomputer@Mac 99_99_final_project % ./build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
Parser Default Constructor Fired!
Error: Token list is empty.
Build Keyword List Function Fired!
Keyword list built successfully!
Set String Function Fired!
set string : Input string: 
Tokenize Function Fired!
Input string: 
STokenizer::set_string called with input: 
















Tokenization done!
Error: Token list is empty.
Get Parse Tree Function Fired!
Error: Token list is empty.
Failed to parse the input string.
-------------Table ctor 1 Done!-----
-------------Table ctor 1 Done!-----
create table >make table employee fields  last,       first,         dep,      salary, year
>>> Received command: make table employee fields  last,       first,         dep,      salary, year
Set String Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
create table basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
>>> Received command: make table employee fields  last,       first,         dep,      salary, year
Set String Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       Joe,           CS,       100000, 2018
>>> Received command: insert into employee values Blow,       Joe,           CS,       100000, 2018
Set String Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
STokenizer::set_string called with input: insert into employee values Blow,       Joe,           CS,       100000, 2018
















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
[Number: 100000]
[Comma: ,]
[Number: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 
-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x13ee096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
>>> Received command: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Set String Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
STokenizer::set_string called with input: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
















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
[Number: 200000]
[Comma: ,]
[Number: 2016]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 
-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x13ee096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    Jack,          HR,       150000, 2014
>>> Received command: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Set String Function Fired!
set string : Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson,    Jack,          HR,       150000, 2014
















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
[Number: 150000]
[Comma: ,]
[Number: 2014]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x13ee096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
>>> Received command: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Set String Function Fired!
set string : Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
















[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Johnson]
[Comma: ,]
[String: Jimmy]
[Comma: ,]
[ALFA: Chemistry]
[Comma: ,]
[Number: 140000]
[Comma: ,]
[Number: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x13ee096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>make table student fields  fname,          lname,    major,    age
>>> Received command: make table student fields  fname,          lname,    major,    age
Set String Function Fired!
set string : Input string: make table student fields  fname,          lname,    major,    age
Tokenize Function Fired!
Input string: make table student fields  fname,          lname,    major,    age
STokenizer::set_string called with input: make table student fields  fname,          lname,    major,    age
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Flo,            Yao,        Art,    20
>>> Received command: insert into student values Flo,            Yao,   Art,    20
Set String Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
STokenizer::set_string called with input: insert into student values Flo,            Yao,       Art,    20
















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
[Number: 20]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Flo Yao Art 20 
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x13ee157c0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 1
_last_record: 0
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Bo,                      Yang,      CS,             28
>>> Received command: insert into student values Bo,                 Yang,      CS,             28
Set String Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
STokenizer::set_string called with input: insert into student values Bo,                     Yang,      CS,             28
















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
[Number: 28]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Bo Yang CS 28 
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x13ee157c0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Sammuel L.", Jackson,      CS,             40
>>> Received command: insert into student values "Sammuel L.", Jackson,         CS,             40
Set String Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,    CS,             40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Sammuel L.]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: CS]
[Comma: ,]
[Number: 40]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x13ee157c0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Billy",         Jackson,   Math,   27
>>> Received command: insert into student values "Billy",            Jackson,   Math,   27
Set String Function Fired!
set string : Input string: insert into student values "Billy",       Jackson,   Math,   27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Billy]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[Number: 27]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Billy Jackson Math 27 
-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x13ee157c0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
              3          Billy        Jackson           Math             27

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Mary Ann",   Davis,        Math,   30
>>> Received command: insert into student values "Mary Ann",   Davis,   Math,   30
Set String Function Fired!
set string : Input string: insert into student values "Mary Ann",   Davis,      Math,   30
Tokenize Function Fired!
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Mary Ann]
[Comma: ,]
[ALFA: Davis]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[Number: 30]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Mary Ann Davis Math 30 
-------Table::insert_into fired!-------
Fields to insert : Mary Ann Davis Math 30
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x13ee157c0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
              3          Billy        Jackson           Math             27
              4       Mary Ann          Davis           Math             30

>>> Command executed successfully.
-------------Table ctor 1 Done!-----



>select * from employee
>>> Received command: select * from employee
Set String Function Fired!
set string : Input string: select * from employee
Tokenize Function Fired!
Input string: select * from employee
STokenizer::set_string called with input: select * from employee
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select last, first, age from employee
>>> Received command: select last, first, age from employee
Set String Function Fired!
set string : Input string: select last, first, age from employee
Tokenize Function Fired!
Input string: select last, first, age from employee
STokenizer::set_string called with input: select last, first, age from employee
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: last first age 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select last from employee
>>> Received command: select last from employee
Set String Function Fired!
set string : Input string: select last from employee
Tokenize Function Fired!
Input string: select last from employee
STokenizer::set_string called with input: select last from employee
















[ALFA: select]
[ALFA: last]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: last 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select * from employee where last = Johnson
>>> Received command: select * from employee where last = Johnson
Set String Function Fired!
set string : Input string: select * from employee where last = Johnson
Tokenize Function Fired!
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Johnson
>>> Condition string: last = Johnson 
Tokenize Function Fired!
Input string: last = Johnson 
STokenizer::set_string called with input: last = Johnson 
















[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: last
Operator Stack: 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Current Token: Johnson
Operator Stack: = 
Output Queue: last Johnson 
Postfix expression generated: last Johnson = 
Postfix Expression: last Johnson = 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_24, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
>>> Selected record numbers: 2 3 
basic_test: records selected: 2 3

>select * from employee where last=Blow and major="JoAnn"
>>> Received command: select * from employee where last=Blow and major="JoAnn"
Set String Function Fired!
set string : Input string: select * from employee where last=Blow and major="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and major="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and major="JoAnn"
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Blow and major = JoAnn
>>> Condition string: last = Blow and major = JoAnn 
Tokenize Function Fired!
Input string: last = Blow and major = JoAnn 
STokenizer::set_string called with input: last = Blow and major = JoAnn 
















[ALFA: last]
[RelationalOperator: =]
[ALFA: Blow]
[LogicalOperator: and]
[ALFA: major]
[RelationalOperator: =]
[ALFA: JoAnn]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Blow]]-> [[LogicalOperator: and]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: JoAnn]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: last
Operator Stack: 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Current Token: Blow
Operator Stack: = 
Output Queue: last Blow 
Current Token: and
Popping operator: = from stack.
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: last Blow = 
Current Token: major
Operator Stack: and 
Output Queue: last Blow = major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = and 
Output Queue: last Blow = major 
Current Token: JoAnn
Operator Stack: = and 
Output Queue: last Blow = major JoAnn 
Postfix expression generated: last Blow = major JoAnn = and 
Postfix Expression: last Blow = major JoAnn = and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
Field not found: major. Returning -3.
Field not found: major. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_26, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
>>> Selected record numbers: 
basic_test: records selected: 

>select * from student
>>> Received command: select * from student
Set String Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 4 
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
>>> Received command: select * from student where (major=CS or major=Art)
Set String Function Fired!
set string : Input string: select * from student where (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where (major=CS or major=Art)
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: ( major = CS or major = Art )
>>> Condition string: ( major = CS or major = Art ) 
Tokenize Function Fired!
Input string: ( major = CS or major = Art ) 
STokenizer::set_string called with input: ( major = CS or major = Art ) 
















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
Infix Queue  Queue: head->[[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: (
Operator Stack: ( 
Output Queue: 
Current Token: major
Operator Stack: ( 
Output Queue: major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = ( 
Output Queue: major 
Current Token: CS
Operator Stack: = ( 
Output Queue: major CS 
Current Token: or
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( 
Output Queue: major CS = 
Current Token: major
Operator Stack: or ( 
Output Queue: major CS = major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = or ( 
Output Queue: major CS = major 
Current Token: Art
Operator Stack: = or ( 
Output Queue: major CS = major Art 
Current Token: )
Operator Stack: 
Output Queue: major CS = major Art = or 
Postfix expression generated: major CS = major Art = or 
Postfix Expression: major CS = major Art = or 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_30, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
>>> Selected record numbers: 0 1 2 
basic_test: records selected: 0 1 2

>select * from student where lname>J
>>> Received command: select * from student where lname>J
Set String Function Fired!
set string : Input string: select * from student where lname>J
Tokenize Function Fired!
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J
>>> Condition string: lname > J 
Tokenize Function Fired!
Input string: lname > J 
STokenizer::set_string called with input: lname > J 
















[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: lname
Operator Stack: 
Output Queue: lname 
Current Token: >
Pushing operator: > to stack.
Operator Stack: > 
Output Queue: lname 
Current Token: J
Operator Stack: > 
Output Queue: lname J 
Postfix expression generated: lname J > 
Postfix Expression: lname J > 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
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
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_32, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0     Sammuel L.        Jackson             CS             40
              1          Billy        Jackson           Math             27
              2             Bo           Yang             CS             28
              3            Flo            Yao            Art             20
>>> Selected record numbers: 2 3 1 0 
basic_test: records selected: 2 3 1 0

>select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
>>> Received command: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
Set String Function Fired!
set string : Input string: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
Tokenize Function Fired!
Input string: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
STokenizer::set_string called with input: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
[ALFA: where]
[LeftParen: (]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
[LogicalOperator: or]
[ALFA: dep]
[RelationalOperator: =]
[ALFA: Physices]
[RightParen: )]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: salary]
[RelationalOperator: <]
[Number: 200000]
[LogicalOperator: or]
[ALFA: year]
[RelationalOperator: >]
[Number: 2014]
[RightParen: )]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 )
>>> Condition string: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
Tokenize Function Fired!
Input string: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
STokenizer::set_string called with input: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
















[LeftParen: (]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
[LogicalOperator: or]
[ALFA: dep]
[RelationalOperator: =]
[ALFA: Physices]
[RightParen: )]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: salary]
[RelationalOperator: <]
[Number: 200000]
[LogicalOperator: or]
[ALFA: year]
[RelationalOperator: >]
[Number: 2014]
[RightParen: )]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[LeftParen: (]]-> [[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> [[LogicalOperator: or]]-> [[ALFA: dep]]-> [[RelationalOperator: =]]-> [[ALFA: Physices]]-> [[RightParen: )]]-> [[LogicalOperator: and]]-> [[LeftParen: (]]-> [[ALFA: salary]]-> [[RelationalOperator: <]]-> [[Number: 200000]]-> [[LogicalOperator: or]]-> [[ALFA: year]]-> [[RelationalOperator: >]]-> [[Number: 2014]]-> [[RightParen: )]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: (
Operator Stack: ( 
Output Queue: 
Current Token: last
Operator Stack: ( 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = ( 
Output Queue: last 
Current Token: Johnson
Operator Stack: = ( 
Output Queue: last Johnson 
Current Token: or
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( 
Output Queue: last Johnson = 
Current Token: dep
Operator Stack: or ( 
Output Queue: last Johnson = dep 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = or ( 
Output Queue: last Johnson = dep 
Current Token: Physices
Operator Stack: = or ( 
Output Queue: last Johnson = dep Physices 
Current Token: )
Operator Stack: 
Output Queue: last Johnson = dep Physices = or 
Current Token: and
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: last Johnson = dep Physices = or 
Current Token: (
Operator Stack: ( and 
Output Queue: last Johnson = dep Physices = or 
Current Token: salary
Operator Stack: ( and 
Output Queue: last Johnson = dep Physices = or salary 
Current Token: <
Pushing operator: < to stack.
Operator Stack: < ( and 
Output Queue: last Johnson = dep Physices = or salary 
Current Token: 200000
Operator Stack: < ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 
Current Token: or
Popping operator: < from stack.
Pushing operator: or to stack.
Operator Stack: or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < 
Current Token: year
Operator Stack: or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 
Current Token: >
Pushing operator: > to stack.
Operator Stack: > or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 
Current Token: 2014
Operator Stack: > or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 2014 
Current Token: )
Operator Stack: and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 2014 > or 
Postfix expression generated: last Johnson = dep Physices = or salary 200000 < year 2014 > or and 
Postfix Expression: last Johnson = dep Physices = or salary 200000 < year 2014 > or and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------ResultSet::or_with fired!-------
_recnos:2 3 
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
Processing '>': field_value = 2014
Matching record: Key = 2014, Record = 2
Matching record: Key = 2016, Record = 1
Matching record: Key = 2018, Record = 0
Matching record: Key = 2018, Record = 3
-------ResultSet::or_with fired!-------
_recnos:0 1 2 3 
-------ResultSet::and_with fired!-------
_recnos:2 3 
Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16d7ce0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_34, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
>>> Selected record numbers: 2 3 
basic_test: records selected: 2 3
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (27 ms)
[----------] 1 test from SQL_BASIC (27 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (27 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac 99_99_final_project % cmake --build build   
[  1%] Building CXX object CMakeFiles/main.dir/includes/rpn/resultset.cpp.o
[  3%] Building CXX object CMakeFiles/main.dir/includes/table/table.cpp.o
[  5%] Linking CXX executable bin/main
[ 28%] Built target main
[ 32%] Built target gtest
[ 33%] Building CXX object CMakeFiles/basic_test.dir/includes/rpn/resultset.cpp.o
[ 35%] Building CXX object CMakeFiles/basic_test.dir/includes/table/table.cpp.o
[ 37%] Linking CXX executable bin/basic_test
[ 60%] Built target basic_test
[ 62%] Building CXX object CMakeFiles/testB.dir/includes/rpn/resultset.cpp.o
[ 64%] Building CXX object CMakeFiles/testB.dir/includes/table/table.cpp.o
[ 66%] Linking CXX executable bin/testB
[ 88%] Built target testB
[ 92%] Built target gmock
[ 96%] Built target gmock_main
[100%] Built target gtest_main
jwcomputer@Mac 99_99_final_project % ./build/bin/basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
Parser Default Constructor Fired!
Error: Token list is empty.
Build Keyword List Function Fired!
Keyword list built successfully!
Set String Function Fired!
set string : Input string: 
Tokenize Function Fired!
Input string: 
STokenizer::set_string called with input: 
















Tokenization done!
Error: Token list is empty.
Get Parse Tree Function Fired!
Error: Token list is empty.
Failed to parse the input string.
-------------Table ctor 1 Done!-----
-------------Table ctor 1 Done!-----
create table >make table employee fields  last,       first,         dep,      salary, year
>>> Received command: make table employee fields  last,       first,         dep,      salary, year
Set String Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
create table basic_test: table created.

>make table employee fields  last,       first,         dep,      salary, year
>>> Received command: make table employee fields  last,       first,         dep,      salary, year
Set String Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
STokenizer::set_string called with input: make table employee fields  last,       first,         dep,      salary, year
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       Joe,           CS,       100000, 2018
>>> Received command: insert into employee values Blow,       Joe,           CS,       100000, 2018
Set String Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
STokenizer::set_string called with input: insert into employee values Blow,       Joe,           CS,       100000, 2018
















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
[Number: 100000]
[Comma: ,]
[Number: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Blow Joe CS 100000 2018 
-------Table::insert_into fired!-------
Fields to insert : Blow Joe CS 100000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x157e096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
>>> Received command: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Set String Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
STokenizer::set_string called with input: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
















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
[Number: 200000]
[Comma: ,]
[Number: 2016]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Blow JoAnn Physics 200000 2016 
-------Table::insert_into fired!-------
Fields to insert : Blow JoAnn Physics 200000 2016
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x157e096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    Jack,          HR,       150000, 2014
>>> Received command: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Set String Function Fired!
set string : Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
Tokenize Function Fired!
Input string: insert into employee values Johnson,    Jack,          HR,       150000, 2014
STokenizer::set_string called with input: insert into employee values Johnson,    Jack,          HR,       150000, 2014
















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
[Number: 150000]
[Comma: ,]
[Number: 2014]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Johnson Jack HR 150000 2014 
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x157e096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
>>> Received command: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Set String Function Fired!
set string : Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
Tokenize Function Fired!
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
















[ALFA: insert]
[ALFA: into]
[ALFA: employee]
[ALFA: values]
[ALFA: Johnson]
[Comma: ,]
[String: Jimmy]
[Comma: ,]
[ALFA: Chemistry]
[Comma: ,]
[Number: 140000]
[Comma: ,]
[Number: 2018]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: employee values: Johnson Jimmy Chemistry 140000 2018 
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x157e096a0
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>make table student fields  fname,          lname,    major,    age
>>> Received command: make table student fields  fname,          lname,    major,    age
Set String Function Fired!
set string : Input string: make table student fields  fname,          lname,    major,    age
Tokenize Function Fired!
Input string: make table student fields  fname,          lname,    major,    age
STokenizer::set_string called with input: make table student fields  fname,          lname,    major,    age
















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
Parse Tree Function Fired!
>>> Parsed command: make
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
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 0
_last_record: -1
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Flo,            Yao,        Art,    20
>>> Received command: insert into student values Flo,            Yao,   Art,    20
Set String Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
STokenizer::set_string called with input: insert into student values Flo,            Yao,       Art,    20
















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
[Number: 20]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Flo Yao Art 20 
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x157e09560
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 1
_last_record: 0
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Bo,                      Yang,      CS,             28
>>> Received command: insert into student values Bo,                 Yang,      CS,             28
Set String Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
STokenizer::set_string called with input: insert into student values Bo,                     Yang,      CS,             28
















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
[Number: 28]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Bo Yang CS 28 
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x157e09560
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 2
_last_record: 1
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Sammuel L.", Jackson,      CS,             40
>>> Received command: insert into student values "Sammuel L.", Jackson,         CS,             40
Set String Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,    CS,             40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Sammuel L.]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: CS]
[Comma: ,]
[Number: 40]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Sammuel L. Jackson CS 40 
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x157e09560
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Billy",         Jackson,   Math,   27
>>> Received command: insert into student values "Billy",            Jackson,   Math,   27
Set String Function Fired!
set string : Input string: insert into student values "Billy",       Jackson,   Math,   27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Billy]
[Comma: ,]
[ALFA: Jackson]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[Number: 27]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Billy Jackson Math 27 
-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x157e09560
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
              3          Billy        Jackson           Math             27

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values "Mary Ann",   Davis,        Math,   30
>>> Received command: insert into student values "Mary Ann",   Davis,   Math,   30
Set String Function Fired!
set string : Input string: insert into student values "Mary Ann",   Davis,      Math,   30
Tokenize Function Fired!
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30
















[ALFA: insert]
[ALFA: into]
[ALFA: student]
[ALFA: values]
[String: Mary Ann]
[Comma: ,]
[ALFA: Davis]
[Comma: ,]
[ALFA: Math]
[Comma: ,]
[Number: 30]
Tokenization done!
This is insert table!








Get Parse Tree Function Fired!
This is insert table!








Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: insert
>>> Inserting into table: student values: Mary Ann Davis Math 30 
-------Table::insert_into fired!-------
Fields to insert : Mary Ann Davis Math 30
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x157e09560
FileRecord::write fired!
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0           Blow            Joe             CS         100000           2018
              1           Blow          JoAnn        Physics         200000           2016
              2        Johnson           Jack             HR         150000           2014
              3        Johnson          Jimmy      Chemistry         140000           2018

Current state of table: student
Table name: student, records: 5
_last_record: 4
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
              3          Billy        Jackson           Math             27
              4       Mary Ann          Davis           Math             30

>>> Command executed successfully.
-------------Table ctor 1 Done!-----



>select * from employee
>>> Received command: select * from employee
Set String Function Fired!
set string : Input string: select * from employee
Tokenize Function Fired!
Input string: select * from employee
STokenizer::set_string called with input: select * from employee
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select last, first, age from employee
>>> Received command: select last, first, age from employee
Set String Function Fired!
set string : Input string: select last, first, age from employee
Tokenize Function Fired!
Input string: select last, first, age from employee
STokenizer::set_string called with input: select last, first, age from employee
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: last first age 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select last from employee
>>> Received command: select last from employee
Set String Function Fired!
set string : Input string: select last from employee
Tokenize Function Fired!
Input string: select last from employee
STokenizer::set_string called with input: select last from employee
















[ALFA: select]
[ALFA: last]
[ALFA: from]
[ALFA: employee]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: last 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select * from employee where last = Johnson
>>> Received command: select * from employee where last = Johnson
Set String Function Fired!
set string : Input string: select * from employee where last = Johnson
Tokenize Function Fired!
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Johnson
>>> Condition string: last = Johnson 
Tokenize Function Fired!
Input string: last = Johnson 
STokenizer::set_string called with input: last = Johnson 
















[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: last
Operator Stack: 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Current Token: Johnson
Operator Stack: = 
Output Queue: last Johnson 
Postfix expression generated: last Johnson = 
Postfix Expression: last Johnson = 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_24, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
>>> Selected record numbers: 2 3 
basic_test: records selected: 2 3

>select * from employee where last=Blow and major="JoAnn"
>>> Received command: select * from employee where last=Blow and major="JoAnn"
Set String Function Fired!
set string : Input string: select * from employee where last=Blow and major="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and major="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and major="JoAnn"
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: last = Blow and major = JoAnn
>>> Condition string: last = Blow and major = JoAnn 
Tokenize Function Fired!
Input string: last = Blow and major = JoAnn 
STokenizer::set_string called with input: last = Blow and major = JoAnn 
















[ALFA: last]
[RelationalOperator: =]
[ALFA: Blow]
[LogicalOperator: and]
[ALFA: major]
[RelationalOperator: =]
[ALFA: JoAnn]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Blow]]-> [[LogicalOperator: and]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: JoAnn]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: last
Operator Stack: 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Current Token: Blow
Operator Stack: = 
Output Queue: last Blow 
Current Token: and
Popping operator: = from stack.
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: last Blow = 
Current Token: major
Operator Stack: and 
Output Queue: last Blow = major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = and 
Output Queue: last Blow = major 
Current Token: JoAnn
Operator Stack: = and 
Output Queue: last Blow = major JoAnn 
Postfix expression generated: last Blow = major JoAnn = and 
Postfix Expression: last Blow = major JoAnn = and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
Field not found: major. Returning -3.
Field not found: major. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_26, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
>>> Selected record numbers: 
basic_test: records selected: 

>select * from student
>>> Received command: select * from student
Set String Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
STokenizer::set_string called with input: select * from student
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> No WHERE condition found. Selecting all records.
-------------Table ctor 1 Done!-----
>>> Selected record numbers: 0 1 2 3 4 
basic_test: records selected: 0 1 2 3 4

>select * from student where (major=CS or major=Art)
>>> Received command: select * from student where (major=CS or major=Art)
Set String Function Fired!
set string : Input string: select * from student where (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where (major=CS or major=Art)
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: ( major = CS or major = Art )
>>> Condition string: ( major = CS or major = Art ) 
Tokenize Function Fired!
Input string: ( major = CS or major = Art ) 
STokenizer::set_string called with input: ( major = CS or major = Art ) 
















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
Infix Queue  Queue: head->[[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: (
Operator Stack: ( 
Output Queue: 
Current Token: major
Operator Stack: ( 
Output Queue: major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = ( 
Output Queue: major 
Current Token: CS
Operator Stack: = ( 
Output Queue: major CS 
Current Token: or
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( 
Output Queue: major CS = 
Current Token: major
Operator Stack: or ( 
Output Queue: major CS = major 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = or ( 
Output Queue: major CS = major 
Current Token: Art
Operator Stack: = or ( 
Output Queue: major CS = major Art 
Current Token: )
Operator Stack: 
Output Queue: major CS = major Art = or 
Postfix expression generated: major CS = major Art = or 
Postfix Expression: major CS = major Art = or 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
Result set after OR operation: 0 1 2 Final record numbers after cond evaluation:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_30, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
>>> Selected record numbers: 0 1 2 
basic_test: records selected: 0 1 2

>select * from student where lname>J
>>> Received command: select * from student where lname>J
Set String Function Fired!
set string : Input string: select * from student where lname>J
Tokenize Function Fired!
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J
















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
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J
>>> Condition string: lname > J 
Tokenize Function Fired!
Input string: lname > J 
STokenizer::set_string called with input: lname > J 
















[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: lname
Operator Stack: 
Output Queue: lname 
Current Token: >
Pushing operator: > to stack.
Operator Stack: > 
Output Queue: lname 
Current Token: J
Operator Stack: > 
Output Queue: lname J 
Postfix expression generated: lname J > 
Postfix Expression: lname J > 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
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
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_32, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
              0     Sammuel L.        Jackson             CS             40
              1          Billy        Jackson           Math             27
              2             Bo           Yang             CS             28
              3            Flo            Yao            Art             20
>>> Selected record numbers: 2 3 1 0 
basic_test: records selected: 2 3 1 0

>select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
>>> Received command: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
Set String Function Fired!
set string : Input string: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
Tokenize Function Fired!
Input string: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
STokenizer::set_string called with input: select * from employee where (last = Johnson or dep = Physices) and (salary < 200000 or year > 2014)
















[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
[ALFA: where]
[LeftParen: (]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
[LogicalOperator: or]
[ALFA: dep]
[RelationalOperator: =]
[ALFA: Physices]
[RightParen: )]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: salary]
[RelationalOperator: <]
[Number: 200000]
[LogicalOperator: or]
[ALFA: year]
[RelationalOperator: >]
[Number: 2014]
[RightParen: )]
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: employee fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 )
>>> Condition string: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
Tokenize Function Fired!
Input string: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
STokenizer::set_string called with input: ( last = Johnson or dep = Physices ) and ( salary < 200000 or year > 2014 ) 
















[LeftParen: (]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
[LogicalOperator: or]
[ALFA: dep]
[RelationalOperator: =]
[ALFA: Physices]
[RightParen: )]
[LogicalOperator: and]
[LeftParen: (]
[ALFA: salary]
[RelationalOperator: <]
[Number: 200000]
[LogicalOperator: or]
[ALFA: year]
[RelationalOperator: >]
[Number: 2014]
[RightParen: )]
Tokenization done!
Converting Infix to Postfix...
Infix Queue  Queue: head->[[LeftParen: (]]-> [[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> [[LogicalOperator: or]]-> [[ALFA: dep]]-> [[RelationalOperator: =]]-> [[ALFA: Physices]]-> [[RightParen: )]]-> [[LogicalOperator: and]]-> [[LeftParen: (]]-> [[ALFA: salary]]-> [[RelationalOperator: <]]-> [[Number: 200000]]-> [[LogicalOperator: or]]-> [[ALFA: year]]-> [[RelationalOperator: >]]-> [[Number: 2014]]-> [[RightParen: )]]-> |||
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Current Token: (
Operator Stack: ( 
Output Queue: 
Current Token: last
Operator Stack: ( 
Output Queue: last 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = ( 
Output Queue: last 
Current Token: Johnson
Operator Stack: = ( 
Output Queue: last Johnson 
Current Token: or
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( 
Output Queue: last Johnson = 
Current Token: dep
Operator Stack: or ( 
Output Queue: last Johnson = dep 
Current Token: =
Pushing operator: = to stack.
Operator Stack: = or ( 
Output Queue: last Johnson = dep 
Current Token: Physices
Operator Stack: = or ( 
Output Queue: last Johnson = dep Physices 
Current Token: )
Operator Stack: 
Output Queue: last Johnson = dep Physices = or 
Current Token: and
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: last Johnson = dep Physices = or 
Current Token: (
Operator Stack: ( and 
Output Queue: last Johnson = dep Physices = or 
Current Token: salary
Operator Stack: ( and 
Output Queue: last Johnson = dep Physices = or salary 
Current Token: <
Pushing operator: < to stack.
Operator Stack: < ( and 
Output Queue: last Johnson = dep Physices = or salary 
Current Token: 200000
Operator Stack: < ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 
Current Token: or
Popping operator: < from stack.
Pushing operator: or to stack.
Operator Stack: or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < 
Current Token: year
Operator Stack: or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 
Current Token: >
Pushing operator: > to stack.
Operator Stack: > or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 
Current Token: 2014
Operator Stack: > or ( and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 2014 
Current Token: )
Operator Stack: and 
Output Queue: last Johnson = dep Physices = or salary 200000 < year 2014 > or 
Postfix expression generated: last Johnson = dep Physices = or salary 200000 < year 2014 > or and 
Postfix Expression: last Johnson = dep Physices = or salary 200000 < year 2014 > or and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------ResultSet::or_with fired!-------
_recnos:2 3 
Result set after OR operation: 2 3 -------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
Processing '>': field_value = 2014
Matching record: Key = 2014, Record = 2
Matching record: Key = 2016, Record = 1
Matching record: Key = 2018, Record = 0
Matching record: Key = 2018, Record = 3
-------ResultSet::or_with fired!-------
_recnos:0 1 2 3 
Result set after OR operation: 0 1 2 3 -------ResultSet::and_with fired!-------
_recnos:2 3 
Final record numbers after cond evaluation:2 3 
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
-------Table::field_col_no fired!-------
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16fd8a0f8
FileRecord::write fired!
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_34, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
>>> Selected record numbers: 2 3 
basic_test: records selected: 2 3
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (65 ms)
[----------] 1 test from SQL_BASIC (65 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (65 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac 99_99_final_project % 