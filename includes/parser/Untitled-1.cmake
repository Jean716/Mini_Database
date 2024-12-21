

----------running basic_test.cpp---------


[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from TEST_TEMPLATE
[ RUN      ] TEST_TEMPLATE.TestTemplate



------------------------


Parser Constructor Fired!
Input string: make table student fields last, first, age, major, class
Build Keyword List Function Fired!
Keyword list built successfully!
set_string Function Fired!
set string : Input string: make table student fields last, first, age, major, class
Tokenize Function Fired!
Input string: make table student fields last, first, age, major, class
STokenizer::make_table Fired!









STokenizer::set_string called with input: make table student fields last, first, age, major, class
unknown file: Failure
C++ exception with description "Unrecognized token: mak" thrown in the test body.
[  FAILED  ] TEST_TEMPLATE.TestTemplate (1 ms)
[----------] 1 test from TEST_TEMPLATE (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (1 ms total)
[  PASSED  ] 0 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] TEST_TEMPLATE.TestTemplate

 1 FAILED TEST
jwcomputer@Mac 99_99_final % 