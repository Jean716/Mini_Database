jwcomputer@Mac Final_Dec_20 % >....                                             
./includes/sql/sql.cpp \
./includes/table/table.cpp \
./includes/tokenizer/ftokenize.cpp \
./includes/tokenizer/state_machine_functions.cpp \
./includes/tokenizer/stokenize.cpp \
./includes/rpn/resultset.cpp \
-I./includes -lpthread
./_tests/_test_files/basic_test.cpp:1:10: fatal error: 'gtest/gtest.h' file not found
    1 | #include "gtest/gtest.h"
      |          ^~~~~~~~~~~~~~~
1 error generated.
jwcomputer@Mac Final_Dec_20 % brew install googletest
==> Auto-updating Homebrew...
Adjust how often this is run with HOMEBREW_AUTO_UPDATE_SECS or disable with
HOMEBREW_NO_AUTO_UPDATE. Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
==> Auto-updated Homebrew!
Updated 2 taps (homebrew/core and homebrew/cask).
==> New Formulae
acronym                    leetcode-cli               repren
atac                       legba                      reveal-md
azurehound                 libesedb                   s5cmd
bender                     libkeyfinder               sendme
bruno-cli                  librime                    sentry-cli
cargo-public-api           limbo                      slepc
cargo-shuttle              macmon                     slepc-complex
codevis                    mago                       slumber
crates-tui                 malcontent                 starlark-rust
dry                        marisa                     static-web-server
fairy-stockfish            mdz                        swctl
glaze                      mmdbctl                    synchrony
go-blueprint               neverest                   talosctl
gopeed                     oranda                     tenere
graphql-inspector          parallel-disk-usage        the-way
gsan                       parca                      tomcat@10
gurk                       parlay                     tuisky
heroku                     pipelight                  typeshare
hgrep                      pixi-pack                  tzdb
humanlog                   planus                     vals
jwt-cli                    posting                    versitygw
kool                       pscale                     vo-amrwbenc
kubernetes-cli@1.31        qbec                       wails
kubetrim                   rapidyaml                  watcher
languagetool-rust          replxx
==> New Casks
bindiff                                  font-pochaevsk
bookmacster@beta                         font-ponomar
dehesselle-meld                          font-shafarik
fastdmg                                  font-tagesschrift
font-fairfax-hd                          font-triodion
font-kreative-square                     font-udev-gothic-hs
font-moralerspace                        mouseless
font-moralerspace-hw                     rode-virtual-channels
font-moralerspace-hw-jpdoc               soundsource@test
font-moralerspace-hw-nf                  stratoshark
font-moralerspace-jpdoc                  superwhisper
font-moralerspace-nf

You have 25 outdated formulae installed.

Warning: googletest 1.15.2 is already installed and up-to-date.
To reinstall 1.15.2, run:
  brew reinstall googletest
jwcomputer@Mac Final_Dec_20 % brew --prefix googletest
/opt/homebrew/opt/googletest
jwcomputer@Mac Final_Dec_20 % g++ -std=c++11 -g -o basic_test \
./_tests/_test_files/basic_test.cpp \
./includes/binary_files/file_record.cpp \
./includes/binary_files/utilities.cpp \
./includes/parser/parser.cpp \
./includes/parser/sql_parser_functions.cpp \
./includes/shunting_yard/shunting_yard.cpp \
./includes/sql/sql.cpp \
./includes/table/table.cpp \
./includes/tokenizer/ftokenize.cpp \
./includes/tokenizer/state_machine_functions.cpp \
./includes/tokenizer/stokenize.cpp \
./includes/rpn/resultset.cpp \
-I./includes \
-I/opt/homebrew/opt/googletest/include \
-L/opt/homebrew/opt/googletest/lib \
-lgtest -lgtest_main -lpthread
In file included from ./_tests/_test_files/basic_test.cpp:1:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest.h:63:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-assertion-result.h:46:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-message.h:57:
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-port.h:279:2: error: C++ versions less than C++14 are not supported.
  279 | #error C++ versions less than C++14 are not supported.
      |  ^
In file included from ./_tests/_test_files/basic_test.cpp:1:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest.h:63:
/opt/homebrew/opt/googletest/include/gtest/gtest-assertion-result.h:207:48: error: no member named 'make_unique' in namespace 'std'
  207 |     if (message_ == nullptr) message_ = ::std::make_unique<::std::string>();
      |                                         ~~~~~~~^
/opt/homebrew/opt/googletest/include/gtest/gtest-assertion-result.h:207:73: error: expected '(' for function-style cast or type construction
  207 |     if (message_ == nullptr) message_ = ::std::make_unique<::std::string>();
      |                                                            ~~~~~~~~~~~~~^
/opt/homebrew/opt/googletest/include/gtest/gtest-assertion-result.h:207:75: error: expected expression
  207 |     if (message_ == nullptr) message_ = ::std::make_unique<::std::string>();
      |                                                                           ^
In file included from ./_tests/_test_files/basic_test.cpp:1:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest.h:64:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-death-test.h:43:
In file included from /opt/homebrew/opt/googletest/include/gtest/internal/gtest-death-test-internal.h:47:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-matchers.h:49:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-printers.h:122:
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:620:54: error: too few template arguments for class template 'less'
  620 |   typedef ::std::map<std::string, CodeLocation, std::less<>> RegisteredTestsMap;
      |                                                      ^
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/__functional/operations.h:355:29: note: template is declared here
  353 | template <class _Tp>
      | ~~~~~~~~~~~~~~~~~~~~
  354 | #endif
  355 | struct _LIBCPP_TEMPLATE_VIS less : __binary_function<_Tp, _Tp, bool> {
      |                             ^
In file included from ./_tests/_test_files/basic_test.cpp:1:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest.h:64:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-death-test.h:43:
In file included from /opt/homebrew/opt/googletest/include/gtest/internal/gtest-death-test-internal.h:47:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-matchers.h:49:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-printers.h:122:
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:598:22: error: member reference base type 'RegisteredTestsMap' (aka 'int') is not a structure or union
  598 |     registered_tests_.emplace(test_name, CodeLocation(file, line));
      |     ~~~~~~~~~~~~~~~~~^~~~~~~~
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:603:29: error: member reference base type 'const RegisteredTestsMap' (aka 'const int') is not a structure or union
  603 |     return registered_tests_.count(test_name) > 0;
      |            ~~~~~~~~~~~~~~~~~^~~~~~
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:607:5: error: 'testing::internal::TypedTestSuitePState::RegisteredTestsMap' (aka 'int') is not a class, namespace, or enumeration
  607 |     RegisteredTestsMap::const_iterator it = registered_tests_.find(test_name);
      |     ^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:607:62: error: member reference base type 'const RegisteredTestsMap' (aka 'const int') is not a structure or union
  607 |     RegisteredTestsMap::const_iterator it = registered_tests_.find(test_name);
      |                                             ~~~~~~~~~~~~~~~~~^~~~~
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:608:41: error: member reference base type 'const RegisteredTestsMap' (aka 'const int') is not a structure or union
  608 |     GTEST_CHECK_(it != registered_tests_.end());
      |                        ~~~~~~~~~~~~~~~~~^~~~
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-port.h:1120:35: note: expanded from macro 'GTEST_CHECK_'
 1120 |   if (::testing::internal::IsTrue(condition)) \
      |                                   ^~~~~~~~~
In file included from ./_tests/_test_files/basic_test.cpp:1:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest.h:64:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-death-test.h:43:
In file included from /opt/homebrew/opt/googletest/include/gtest/internal/gtest-death-test-internal.h:47:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-matchers.h:49:
In file included from /opt/homebrew/opt/googletest/include/gtest/gtest-printers.h:122:
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1148:30: error: no member named 'index_sequence' in namespace 'std'
 1148 | struct ElemFromListImpl<std::index_sequence<I...>> {
      |                         ~~~~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1148:50: error: expected unqualified-id
 1148 | struct ElemFromListImpl<std::index_sequence<I...>> {
      |                                                  ^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1159:47: error: no member named 'make_index_sequence' in namespace 'std'
 1159 |   using type = decltype(ElemFromListImpl<std::make_index_sequence<N>>::Apply(
      |                                          ~~~~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1159:69: error: expected '(' for function-style cast or type construction
 1159 |   using type = decltype(ElemFromListImpl<std::make_index_sequence<N>>::Apply(
      |                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1159:72: error: no member named 'Apply' in the global namespace
 1159 |   using type = decltype(ElemFromListImpl<std::make_index_sequence<N>>::Apply(
      |                                                                      ~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1185:44: error: no member named 'index_sequence' in namespace 'std'
 1185 | struct FlatTupleBase<FlatTuple<T...>, std::index_sequence<Idx...>>
      |                                       ~~~~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1185:66: error: expected unqualified-id
 1185 | struct FlatTupleBase<FlatTuple<T...>, std::index_sequence<Idx...>>
      |                                                                  ^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1227:34: error: no member named 'make_index_sequence' in namespace 'std'
 1227 |                             std::make_index_sequence<sizeof...(T)>> {
      |                             ~~~~~^
/opt/homebrew/opt/googletest/include/gtest/internal/gtest-internal.h:1230:35: error: no member named 'make_index_sequence' in namespace 'std'
 1230 |                              std::make_index_sequence<sizeof...(T)>>::Indices;
      |                              ~~~~~^
fatal error: too many errors emitted, stopping now [-ferror-limit=]
20 errors generated.
jwcomputer@Mac Final_Dec_20 % g++ --version
Apple clang version 16.0.0 (clang-1600.0.26.3)
Target: arm64-apple-darwin24.2.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
jwcomputer@Mac Final_Dec_20 % g++ -std=c++14 -g -o basic_test \
./_tests/_test_files/basic_test.cpp \
./includes/binary_files/file_record.cpp \
./includes/binary_files/utilities.cpp \
./includes/parser/parser.cpp \
./includes/parser/sql_parser_functions.cpp \
./includes/shunting_yard/shunting_yard.cpp \
./includes/sql/sql.cpp \
./includes/table/table.cpp \
./includes/tokenizer/ftokenize.cpp \
./includes/tokenizer/state_machine_functions.cpp \
./includes/tokenizer/stokenize.cpp \
./includes/rpn/resultset.cpp \
-I./includes \
-I/opt/homebrew/opt/googletest/include \
-L/opt/homebrew/opt/googletest/lib \
-lgtest -lgtest_main -lpthread
jwcomputer@Mac Final_Dec_20 % ./basic_test


----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from SQL_BASIC
[ RUN      ] SQL_BASIC.SQLBasic
----- SQL sql; --------
Table default constructor called at address: 0x16f08daa8
Default table file created: default_table.tbl
Table default constructor called at address: 0x16f08daa8
Default table file created: default_table.tbl
Table default constructor called at address: 0x16f08daa8
Default table file created: default_table.tbl
Build Keyword List Function Fired!
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
Keyword list built successfully!
Parser Default Constructor Fired!
SQL constructor fired!
set_string Function Fired!
Empty input, skipping set_string.

----- SQL object initialized. -----

----- Table t; --------
Table default constructor called at address: 0x16f08e5f8
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
----- Map:: insert() Fired! -----
current token is table
get_column: table is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is fields
get_column: fields is a keyword.
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is first
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is dep
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is salary
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is year
----- Map:: insert() Fired! -----
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
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
----- Map:: insert() Fired! -----
>>> Table created successfully: employee
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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
----- Map:: insert() Fired! -----
current token is table
get_column: table is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is fields
get_column: fields is a keyword.
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is first
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is dep
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is salary
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is year
----- Map:: insert() Fired! -----
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
>>> Creating table: employee with fields: last first dep salary year 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 5
Index 0 initialized for field: last
Index 1 initialized for field: first
Index 2 initialized for field: dep
Index 3 initialized for field: salary
Index 4 initialized for field: year
-----------------------------------------------
----- Map:: insert() Fired! -----
>>> Table created successfully: employee
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Blow
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Joe
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is CS
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 100000
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 2018
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Blow
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is JoAnn
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Physics
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 200000
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 2016
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Johnson
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Jack
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is HR
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 150000
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 2014
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Johnson
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Jimmy
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Chemistry
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 140000
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 2018
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is table
get_column: table is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is fields
get_column: fields is a keyword.
----- Map:: insert() Fired! -----
current token is fname
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is lname
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is major
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is age
----- Map:: insert() Fired! -----
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
>>> Creating table: student with fields: fname lname major age 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
-------------------Table ctor 3 Done!----------------------------
Current state of _indices:
_indices size: 4
Index 0 initialized for field: fname
Index 1 initialized for field: lname
Index 2 initialized for field: major
Index 3 initialized for field: age
-----------------------------------------------
----- Map:: insert() Fired! -----
>>> Table created successfully: student
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
set string : Input string: insert into student values Flo,            Yao,     Art,     20
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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Flo
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Yao
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Art
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 20
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

----- Table contents after command [insert into student values Flo,            Yao,     Art,    20]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

>insert into student values Bo,                      Yang,      CS,            28

=====Command Function Fired!=====
 insert into student values Bo,                      Yang,      CS,            28
set_string Function Fired!
set string : Input string: insert into student values Bo,                    Yang,      CS,             28
Tokenize Function Fired!
Input string: insert into student values Bo,                 Yang,      CS,    28
STokenizer::set_string called with input: insert into student values Bo,            Yang,       CS,             28
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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Bo
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Yang
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is CS
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 28
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

----- Table contents after command [insert into student values Bo,                  Yang,       CS,             28]: -----
Table name: default_table, records: 0
_last_record: -1
---------------
Record#        
---------------

>insert into student values "Sammuel L.", Jackson,      CS,             40

=====Command Function Fired!=====
 insert into student values "Sammuel L.", Jackson,      CS,             40
set_string Function Fired!
set string : Input string: insert into student values "Sammuel L.", Jackson,   CS,              40
Tokenize Function Fired!
Input string: insert into student values "Sammuel L.", Jackson,         CS,    40
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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Sammuel L.
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Jackson
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is CS
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 40
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
set string : Input string: insert into student values "Billy",       Jackson,  Math,    27
Tokenize Function Fired!
Input string: insert into student values "Billy",            Jackson,   Math,  27
STokenizer::set_string called with input: insert into student values "Billy",       Jackson,    Math,   27
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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Billy
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Jackson
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Math
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 27
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
set string : Input string: insert into student values "Mary Ann",   Davis,     Math,    30
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
----- Map:: insert() Fired! -----
current token is into
get_column: into is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is values
get_column: values is a keyword.
----- Map:: insert() Fired! -----
current token is Mary Ann
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Davis
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is Math
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is 30
----- Map:: insert() Fired! -----
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
command is insert!
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl

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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
command is select!
command is select!
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_3 and fields: last first dep salary year 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is first
----- Map:: insert() Fired! -----
current token is ,
----- Map:: insert() Fired! -----
current token is dep
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
command is select!
command is select!
command is select!
command is select!
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_4 and fields: last first dep 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
command is select!
command is select!
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 
-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_5 and fields: last 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is where
get_column: where is a keyword.
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is Johnson
----- Map:: insert() Fired! -----
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is employee
----- Map:: insert() Fired! -----
current token is where
get_column: where is a keyword.
----- Map:: insert() Fired! -----
current token is last
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is Blow
----- Map:: insert() Fired! -----
current token is and
----- Map:: insert() Fired! -----
current token is first
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is JoAnn
----- Map:: insert() Fired! -----
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: employee
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
command is select!
command is select!
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: student
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
-------Table::select_all fired!-------
select_all()::recnos: 0 1 2 3 4 
-------Table::vector_to_table fired!-------
vector_to_table :: check vector_of_recnos: 0 1 2 3 4 '*' detected. Expanding to all fields.

-[01]----------------------------------------DEBUG HERE!
Creating new table with name: _selected_table_8 and fields: fname lname major age 

-------Table ctor 3 fired!-------

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is where
get_column: where is a keyword.
----- Map:: insert() Fired! -----
current token is (
----- Map:: insert() Fired! -----
current token is major
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is CS
----- Map:: insert() Fired! -----
current token is or
----- Map:: insert() Fired! -----
current token is major
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is Art
----- Map:: insert() Fired! -----
current token is )
----- Map:: insert() Fired! -----
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: student
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is where
get_column: where is a keyword.
----- Map:: insert() Fired! -----
current token is lname
----- Map:: insert() Fired! -----
current token is >
----- Map:: insert() Fired! -----
current token is J
----- Map:: insert() Fired! -----
command is select!
command is select!
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: student
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
----- Map:: insert() Fired! -----
current token is *
----- Map:: insert() Fired! -----
current token is from
get_column: from is a keyword.
----- Map:: insert() Fired! -----
current token is student
----- Map:: insert() Fired! -----
current token is where
get_column: where is a keyword.
----- Map:: insert() Fired! -----
current token is lname
----- Map:: insert() Fired! -----
current token is >
----- Map:: insert() Fired! -----
current token is J
----- Map:: insert() Fired! -----
current token is and
----- Map:: insert() Fired! -----
current token is (
----- Map:: insert() Fired! -----
current token is major
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is CS
----- Map:: insert() Fired! -----
current token is or
----- Map:: insert() Fired! -----
current token is major
----- Map:: insert() Fired! -----
current token is =
----- Map:: insert() Fired! -----
current token is Art
----- Map:: insert() Fired! -----
current token is )
----- Map:: insert() Fired! -----
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
Table default constructor called at address: 0x16f08dec8
Default table file created: default_table.tbl
Finding key: student
Table default constructor called at address: 0x16f08cef8
Default table file created: default_table.tbl
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
Table default constructor called at address: 0x16f08cf08
Default table file created: default_table.tbl
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

----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
----- Map:: insert() Fired! -----
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
[       OK ] SQL_BASIC.SQLBasic (52 ms)
[----------] 1 test from SQL_BASIC (52 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (52 ms total)
[  PASSED  ] 1 test.
jwcomputer@Mac Final_Dec_20 % 