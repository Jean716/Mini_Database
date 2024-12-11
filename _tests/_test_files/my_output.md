jwcomputer@Mac 99_99_final % build/bin/main
Build Keyword List Function Fired!
Keyword list built successfully!
Parser Default Constructor Fired!
Table default constructor fired!
SQL default constructor fired!
Command Function Fired! make table students fields id, name, grade
set_string Function Fired!
set string : Input string: make table students fields id, name, grade
Tokenize Function Fired!
Input string: make table students fields id, name, grade
STokenizer::set_string called with input: make table students fields id, name, grade



















Tokens: 
[ALFA: make]
[ALFA: table]
[ALFA: students]
[ALFA: fields]
[ALFA: id]
[Comma: ,]
[ALFA: name]
[Comma: ,]
[ALFA: grade]
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
current token is students
current token is fields
get_column: fields is a keyword.
current token is id
current token is ,
current token is name
current token is ,
current token is grade
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
This token is: students
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
This token is: id
State = 4
last_state = :4
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: name
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
This token is: ,
State = 5
last_state = :5
This token is: grade
State = 5
last_state = :5
Column Number: 11
State from table: 5
command is make!
Parse Tree Function Fired!
make
    ⎴
    table_name: [students]
    command: [make]
    ⎵
^
⎴
command: [make]
⎵
    ^
    ⎴
    col : [id, name, grade]
    ⎵


zsh: segmentation fault  build/bin/main
jwcomputer@Mac 99_99_final % build/bin/main