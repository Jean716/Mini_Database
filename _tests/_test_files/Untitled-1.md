

----------running basic_test.cpp---------



>make table employee fields  last,       first,         dep,      salary, year
>>> Received command: make table employee fields  last,       first,         dep,      salary, year
Set String Function Fired!
set string : Input string: make table employee fields  last,       first,         dep,      salary, year
Tokenize Function Fired!
Input string: make table employee fields  last,       first,         dep,      salary, year
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: make]]-> [[ALFA: table]]-> [[ALFA: employee]]-> [[ALFA: fields]]-> [[ALFA: last]]-> [[Comma: ,]]-> [[ALFA: first]]-> [[Comma: ,]]-> [[ALFA: dep]]-> [[Comma: ,]]-> [[ALFA: salary]]-> [[Comma: ,]]-> [[ALFA: year]]-> |||
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
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       Joe,           CS,       100000, 2018
>>> Received command: insert into employee values Blow,       Joe,           CS,       100000, 2018
Set String Function Fired!
set string : Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
Tokenize Function Fired!
Input string: insert into employee values Blow,       Joe,           CS,       100000, 2018
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
[Number: 100000]
[Comma: ,]
[Number: 2018]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: employee]]-> [[ALFA: values]]-> [[ALFA: Blow]]-> [[Comma: ,]]-> [[ALFA: Joe]]-> [[Comma: ,]]-> [[ALFA: CS]]-> [[Comma: ,]]-> [[Number: 100000]]-> [[Comma: ,]]-> [[Number: 2018]]-> |||
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
Address of _field_map: 0x11ee09650
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
Current state of table: employee
Table name: employee, records: 1
_last_record: 0
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
              0           Blow            Joe             CS         100000           2018

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
>>> Received command: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Set String Function Fired!
set string : Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
Tokenize Function Fired!
Input string: insert into employee values Blow,       JoAnn,         Physics,  200000, 2016
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
[Number: 200000]
[Comma: ,]
[Number: 2016]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: employee]]-> [[ALFA: values]]-> [[ALFA: Blow]]-> [[Comma: ,]]-> [[ALFA: JoAnn]]-> [[Comma: ,]]-> [[ALFA: Physics]]-> [[Comma: ,]]-> [[Number: 200000]]-> [[Comma: ,]]-> [[Number: 2016]]-> |||
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
Address of _field_map: 0x11ee09650
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
Current state of table: employee
Table name: employee, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
[Number: 150000]
[Comma: ,]
[Number: 2014]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: employee]]-> [[ALFA: values]]-> [[ALFA: Johnson]]-> [[Comma: ,]]-> [[ALFA: Jack]]-> [[Comma: ,]]-> [[ALFA: HR]]-> [[Comma: ,]]-> [[Number: 150000]]-> [[Comma: ,]]-> [[Number: 2014]]-> |||
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
Address of _field_map: 0x11ee09650
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 2
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
Current state of table: employee
Table name: employee, records: 3
_last_record: 2
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
Input string: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
STokenizer::set_string called with input: insert into employee values Johnson,    "Jimmy",     Chemistry,140000, 2018
















Tokens:
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: employee]]-> [[ALFA: values]]-> [[ALFA: Johnson]]-> [[Comma: ,]]-> [[String: Jimmy]]-> [[Comma: ,]]-> [[ALFA: Chemistry]]-> [[Comma: ,]]-> [[Number: 140000]]-> [[Comma: ,]]-> [[Number: 2018]]-> |||
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
Address of _field_map: 0x11ee09650
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
FileRecord::write fired!
Record written successfully with record number: 3
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: make]]-> [[ALFA: table]]-> [[ALFA: student]]-> [[ALFA: fields]]-> [[ALFA: fname]]-> [[Comma: ,]]-> [[ALFA: lname]]-> [[Comma: ,]]-> [[ALFA: major]]-> [[Comma: ,]]-> [[ALFA: age]]-> |||
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
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Flo,            Yao,        Art,    20
>>> Received command: insert into student values Flo,            Yao,   Art,    20
Set String Function Fired!
set string : Input string: insert into student values Flo,            Yao,      Art,    20
Tokenize Function Fired!
Input string: insert into student values Flo,            Yao,   Art,    20
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
[Number: 20]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: student]]-> [[ALFA: values]]-> [[ALFA: Flo]]-> [[Comma: ,]]-> [[ALFA: Yao]]-> [[Comma: ,]]-> [[ALFA: Art]]-> [[Comma: ,]]-> [[Number: 20]]-> |||
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
Address of _field_map: 0x11fa077a0
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
              0            Flo            Yao            Art             20

>>> Command executed successfully.
-------------Table ctor 1 Done!-----
>insert into student values Bo,                      Yang,      CS,             28
>>> Received command: insert into student values Bo,                 Yang,      CS,             28
Set String Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,             28
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
[Number: 28]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: student]]-> [[ALFA: values]]-> [[ALFA: Bo]]-> [[Comma: ,]]-> [[ALFA: Yang]]-> [[Comma: ,]]-> [[ALFA: CS]]-> [[Comma: ,]]-> [[Number: 28]]-> |||
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
Address of _field_map: 0x11fa077a0
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
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
Input string: insert into student values "Sammuel L.", Jackson,         CS,             40
STokenizer::set_string called with input: insert into student values "Sammuel L.", Jackson,     CS,             40
















Tokens:
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: student]]-> [[ALFA: values]]-> [[String: Sammuel L.]]-> [[Comma: ,]]-> [[ALFA: Jackson]]-> [[Comma: ,]]-> [[ALFA: CS]]-> [[Comma: ,]]-> [[Number: 40]]-> |||
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
Address of _field_map: 0x11fa077a0
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 2
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
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
Input string: insert into student values "Billy",            Jackson,   Math,   27
STokenizer::set_string called with input: insert into student values "Billy",        Jackson,   Math,   27
















Tokens:
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: student]]-> [[ALFA: values]]-> [[String: Billy]]-> [[Comma: ,]]-> [[ALFA: Jackson]]-> [[Comma: ,]]-> [[ALFA: Math]]-> [[Comma: ,]]-> [[Number: 27]]-> |||
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
Address of _field_map: 0x11fa077a0
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 3
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
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
Input string: insert into student values "Mary Ann",   Davis,   Math,   30
STokenizer::set_string called with input: insert into student values "Mary Ann",   Davis,       Math,   30
















Tokens:
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: insert]]-> [[ALFA: into]]-> [[ALFA: student]]-> [[ALFA: values]]-> [[String: Mary Ann]]-> [[Comma: ,]]-> [[ALFA: Davis]]-> [[Comma: ,]]-> [[ALFA: Math]]-> [[Comma: ,]]-> [[Number: 30]]-> |||
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
Address of _field_map: 0x11fa077a0
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
FileRecord::write fired!
Record written successfully with record number: 4
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
Current state of table: employee
Table name: employee, records: 4
_last_record: 3
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
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
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
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
Input string: select * from employee
STokenizer::set_string called with input: select * from employee
















Tokens:
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: employee]]-> |||
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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[ALFA: last]]-> [[Comma: ,]]-> [[ALFA: first]]-> [[Comma: ,]]-> [[ALFA: age]]-> [[ALFA: from]]-> [[ALFA: employee]]-> |||
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
Input string: select last from employee
STokenizer::set_string called with input: select last from employee
















Tokens:
[ALFA: select]
[ALFA: last]
[ALFA: from]
[ALFA: employee]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[ALFA: last]]-> [[ALFA: from]]-> [[ALFA: employee]]-> |||
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
Input string: select * from employee where last = Johnson
STokenizer::set_string called with input: select * from employee where last = Johnson
















Tokens:
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: employee]
[ALFA: where]
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: employee]]-> [[ALFA: where]]-> [[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> |||
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
Input string: last = Johnson 
STokenizer::set_string called with input: last = Johnson 
















Tokens:
[ALFA: last]
[RelationalOperator: =]
[ALFA: Johnson]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> |||
Tokenization done!
Converting Infix to Postfix...
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Input Queue: Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Johnson]]-> |||
Operator Stack: 
Output Queue: last 
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Operator Stack: = 
Output Queue: last Johnson 
Postfix expression generated: last Johnson = 
Postfix Expression: last Johnson = 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field found: last at index 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::cond done!-------
Matching record numbers:
  2   3 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------Table::field_col_no fired!-------
Field found: last at index 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: first at index 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: dep at index 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: salary at index 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: year at index 4
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jack HR 150000 2014
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_24.tbl
Checking file: _select_table_24.tbl
File successfully opened: _select_table_24.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
-------Table::field_col_no fired!-------
Field found: last at index 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: first at index 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: dep at index 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: salary at index 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field found: year at index 4
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Johnson Jimmy Chemistry 140000 2018
Field names last first dep salary year
Field_names size: 5
map size: 5
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_24.tbl
Checking file: _select_table_24.tbl
File successfully opened: _select_table_24.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: last
Field index for last: 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: first
Field index for first: 1
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: dep
Field index for dep: 2
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: salary
Field index for salary: 3
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
Field name: year
Field index for year: 4
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_24, records: 2
_last_record: 1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
              0        Johnson           Jack             HR         150000           2014
              1        Johnson          Jimmy      Chemistry         140000           2018
>>> Selected record numbers: 0 1 
basic_test: records selected: 0 1

>select * from employee where last=Blow and major="JoAnn"
>>> Received command: select * from employee where last=Blow and major="JoAnn"
Set String Function Fired!
set string : Input string: select * from employee where last=Blow and major="JoAnn"
Tokenize Function Fired!
Input string: select * from employee where last=Blow and major="JoAnn"
Input string: select * from employee where last=Blow and major="JoAnn"
STokenizer::set_string called with input: select * from employee where last=Blow and major="JoAnn"
















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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: employee]]-> [[ALFA: where]]-> [[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Blow]]-> [[LogicalOperator: and]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[String: JoAnn]]-> |||
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
Input string: last = Blow and major = JoAnn 
STokenizer::set_string called with input: last = Blow and major = JoAnn 
















Tokens:
[ALFA: last]
[RelationalOperator: =]
[ALFA: Blow]
[LogicalOperator: and]
[ALFA: major]
[RelationalOperator: =]
[ALFA: JoAnn]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Blow]]-> [[LogicalOperator: and]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: JoAnn]]-> |||
Tokenization done!
Converting Infix to Postfix...
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Input Queue: Queue: head->[[ALFA: last]]-> [[RelationalOperator: =]]-> [[ALFA: Blow]]-> [[LogicalOperator: and]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: JoAnn]]-> |||
Operator Stack: 
Output Queue: last 
Pushing operator: = to stack.
Operator Stack: = 
Output Queue: last 
Operator Stack: = 
Output Queue: last Blow 
Popping operator: = from stack.
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: last Blow = 
Operator Stack: and 
Output Queue: last Blow = major 
Pushing operator: = to stack.
Operator Stack: = and 
Output Queue: last Blow = major 
Operator Stack: = and 
Output Queue: last Blow = major JoAnn 
Postfix expression generated: last Blow = major JoAnn = and 
Postfix Expression: last Blow = major JoAnn = and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field found: last at index 0
Field map contents:
dep -> 2
first -> 1
last -> 0
salary -> 3
year -> 4
-------Table::field_col_no fired!-------
Field not found: major. Returning -3.
Field not found: major. Returning empty results.
Matching record numbers:

-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----: employee.tbl
Checking file: employee.tbl
File successfully opened: employee.tbl
File opened for reading: employee.tbl
Opening file for writing: employee_updated.tbl
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_26, records: 0
_last_record: -1
------------------------------------------------------------------------------------------
        Record#           last          first            dep         salary           year
------------------------------------------------------------------------------------------
-----Open_fileRW Fired!-----: employee_updated.tbl
Checking file: employee_updated.tbl
File successfully opened: employee_updated.tbl
>>> Selected record numbers: 
basic_test: records selected: 

>select * from student
>>> Received command: select * from student
Set String Function Fired!
set string : Input string: select * from student
Tokenize Function Fired!
Input string: select * from student
Input string: select * from student
STokenizer::set_string called with input: select * from student
















Tokens:
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: student]]-> |||
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
Input string: select * from student where (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where (major=CS or major=Art)
















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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: student]]-> [[ALFA: where]]-> [[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
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
Input string: ( major = CS or major = Art ) 
STokenizer::set_string called with input: ( major = CS or major = Art ) 
















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
!!!!Tokenize()::Infix:
Queue: head->[[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
Tokenization done!
Converting Infix to Postfix...
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Input Queue: Queue: head->[[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
Operator Stack: ( 
Output Queue: 
Operator Stack: ( 
Output Queue: major 
Pushing operator: = to stack.
Operator Stack: = ( 
Output Queue: major 
Operator Stack: = ( 
Output Queue: major CS 
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( 
Output Queue: major CS = 
Operator Stack: or ( 
Output Queue: major CS = major 
Pushing operator: = to stack.
Operator Stack: = or ( 
Output Queue: major CS = major 
Operator Stack: = or ( 
Output Queue: major CS = major Art 
Operator Stack: 
Output Queue: major CS = major Art = or 
Postfix expression generated: major CS = major Art = or 
Postfix Expression: major CS = major Art = or 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_30.tbl
Checking file: _select_table_30.tbl
File successfully opened: _select_table_30.tbl
FileRecord::write fired!
Record written successfully with record number: 2
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_30, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----: student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
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
Input string: select * from student where lname>J
STokenizer::set_string called with input: select * from student where lname>J
















Tokens:
[ALFA: select]
[Asterisk: *]
[ALFA: from]
[ALFA: student]
[ALFA: where]
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: student]]-> [[ALFA: where]]-> [[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> |||
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
Input string: lname > J 
STokenizer::set_string called with input: lname > J 
















Tokens:
[ALFA: lname]
[RelationalOperator: >]
[ALFA: J]
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> |||
Tokenization done!
Converting Infix to Postfix...
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Input Queue: Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> |||
Operator Stack: 
Output Queue: lname 
Pushing operator: > to stack.
Operator Stack: > 
Output Queue: lname 
Operator Stack: > 
Output Queue: lname J 
Postfix expression generated: lname J > 
Postfix Expression: lname J > 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::cond done!-------
Matching record numbers:
  2   3   1   0 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Billy Jackson Math 27
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 2
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_32.tbl
Checking file: _select_table_32.tbl
File successfully opened: _select_table_32.tbl
FileRecord::write fired!
Record written successfully with record number: 3
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_32, records: 4
_last_record: 3
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----: student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0     Sammuel L.        Jackson             CS             40
              1          Billy        Jackson           Math             27
              2             Bo           Yang             CS             28
              3            Flo            Yao            Art             20
>>> Selected record numbers: 0 1 2 3 
basic_test: records selected: 0 1 2 3

>select * from student where lname>J and (major=CS or major=Art)
>>> Received command: select * from student where lname>J and (major=CS or major=Art)
Set String Function Fired!
set string : Input string: select * from student where lname>J and (major=CS or major=Art)
Tokenize Function Fired!
Input string: select * from student where lname>J and (major=CS or major=Art)
Input string: select * from student where lname>J and (major=CS or major=Art)
STokenizer::set_string called with input: select * from student where lname>J and (major=CS or major=Art)
















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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: select]]-> [[Asterisk: *]]-> [[ALFA: from]]-> [[ALFA: student]]-> [[ALFA: where]]-> [[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> [[LogicalOperator: and]]-> [[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
Tokenization done!
























Get Parse Tree Function Fired!
























Get Column Function Fired!
Parse Tree Function Fired!
>>> Parsed command: select
>>> Select command detected.
-------------Table ctor 1 Done!-----
>>> Selecting from table: student fields: * 
>>> Applying WHERE condition.
>>> Condition from parse tree: lname > J and ( major = CS or major = Art )
>>> Condition string: lname > J and ( major = CS or major = Art ) 
Tokenize Function Fired!
Input string: lname > J and ( major = CS or major = Art ) 
Input string: lname > J and ( major = CS or major = Art ) 
STokenizer::set_string called with input: lname > J and ( major = CS or major = Art ) 
















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
!!!!Tokenize()::Infix:
Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> [[LogicalOperator: and]]-> [[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
Tokenization done!
Converting Infix to Postfix...
-------ShuntingYard constructor FIred!-------
-------ShuntingYard::to_postfix Fired!-------
Input Queue: Queue: head->[[ALFA: lname]]-> [[RelationalOperator: >]]-> [[ALFA: J]]-> [[LogicalOperator: and]]-> [[LeftParen: (]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: CS]]-> [[LogicalOperator: or]]-> [[ALFA: major]]-> [[RelationalOperator: =]]-> [[ALFA: Art]]-> [[RightParen: )]]-> |||
Operator Stack: 
Output Queue: lname 
Pushing operator: > to stack.
Operator Stack: > 
Output Queue: lname 
Operator Stack: > 
Output Queue: lname J 
Popping operator: > from stack.
Pushing operator: and to stack.
Operator Stack: and 
Output Queue: lname J > 
Operator Stack: ( and 
Output Queue: lname J > 
Operator Stack: ( and 
Output Queue: lname J > major 
Pushing operator: = to stack.
Operator Stack: = ( and 
Output Queue: lname J > major 
Operator Stack: = ( and 
Output Queue: lname J > major CS 
Popping operator: = from stack.
Pushing operator: or to stack.
Operator Stack: or ( and 
Output Queue: lname J > major CS = 
Operator Stack: or ( and 
Output Queue: lname J > major CS = major 
Pushing operator: = to stack.
Operator Stack: = or ( and 
Output Queue: lname J > major CS = major 
Operator Stack: = or ( and 
Output Queue: lname J > major CS = major Art 
Operator Stack: and 
Output Queue: lname J > major CS = major Art = or 
Postfix expression generated: lname J > major CS = major Art = or and 
Postfix Expression: lname J > major CS = major Art = or and 
-------Table::select fired!-------
-------Table::cond fired!-------
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------ResultSet::or_with fired!-------
_recnos:0 1 2 
-------ResultSet::and_with fired!-------
_recnos:0 1 2 
-------Table::cond done!-------
Matching record numbers:
  0   1   2 
-------Table::vector_to_table fired!-------
'*' detected. Expanding to all fields.
-------------Table ctor 1 Done!-----
-----Open_fileRW Fired!-----: student.tbl
Checking file: student.tbl
File successfully opened: student.tbl
File opened for reading: student.tbl
Opening file for writing: student_updated.tbl
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Flo Yao Art 20
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 0
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Bo Yang CS 28
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 1
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------Table::field_col_no fired!-------
Field found: fname at index 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: lname at index 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: major at index 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
-------Table::field_col_no fired!-------
Field found: age at index 3
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
FileRecord::write fired!
-------Table::insert_into fired!-------
Fields to insert : Sammuel L. Jackson CS 40
Field names fname lname major age
Field_names size: 4
map size: 4
Address of _field_map: 0x16db41d58
-----Open_fileRW Fired!-----: _select_table_34.tbl
Checking file: _select_table_34.tbl
File successfully opened: _select_table_34.tbl
FileRecord::write fired!
Record written successfully with record number: 2
Updating _indices with field values:
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: fname
Field index for fname: 0
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: lname
Field index for lname: 1
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: major
Field index for major: 2
Field map contents:
age -> 3
fname -> 0
lname -> 1
major -> 2
Field name: age
Field index for age: 3
-------------------Table::vector_to_table done!----------------------------
Selected table:
Table name: _select_table_34, records: 3
_last_record: 2
---------------------------------------------------------------------------
        Record#          fname          lname          major            age
---------------------------------------------------------------------------
-----Open_fileRW Fired!-----: student_updated.tbl
Checking file: student_updated.tbl
File successfully opened: student_updated.tbl
              0            Flo            Yao            Art             20
              1             Bo           Yang             CS             28
              2     Sammuel L.        Jackson             CS             40
>>> Selected record numbers: 0 1 2 
basic_test: records selected: 0 1 2
----- END TEST --------
[       OK ] SQL_BASIC.SQLBasic (33 ms)
[----------] 1 test from SQL_BASIC (33 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (33 ms total)
[  PASSED  ] 1 test.
jwcomputer@JWs-MacBook-Pro 99_99_final_project % 