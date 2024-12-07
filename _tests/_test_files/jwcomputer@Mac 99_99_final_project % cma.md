const vector<string> command_list = {

    /*00*/ "make table employee fields  last,       first,         dep,      salary, year",
    /*01*/ "insert into employee values Blow,       Joe,           CS,       100000, 2018",
    /*02*/ "insert into employee values Blow,       JoAnn,         Physics,  200000, 2016",
    /*03*/ "insert into employee values Johnson,    Jack,          HR,       150000, 2014",
    /*04*/ "insert into employee values Johnson,    \"Jimmy\",     Chemistry,140000, 2018",
    /*05*/ "insert into employee values Smith,      \"Anna\",      Biology,  110000, 2020",
    /*06*/ "insert into employee values Brown,      \"Chris\",     HR,       180000, 2021",
    /*07*/ "insert into employee values Johnson,    \"Peter\",     Chemistry,130000, 2022",
    /*08*/ "insert into employee values Null,       Null,          Null,     Null,   Null", // Edge case for null values
    /*09*/ "insert into employee values Smith,      \"Robert\",    CS,       90000,  2015", // Salary below 100k

    /*10*/ "make table student fields  fname,          lname,    major,    age",
    /*11*/ "insert into student values Flo,            Yao, 	Art, 	20",
    /*12*/ "insert into student values Bo, 		     Yang, 	CS, 		28",
    /*13*/ "insert into student values \"Sammuel L.\", Jackson, 	CS, 		40",
    /*14*/ "insert into student values \"Billy\",	     Jackson, 	Math,	27",
    /*15*/ "insert into student values \"Mary Ann\",   Davis,	Math,	30",
    /*16*/ "insert into student values Null,           Null,     Null,     Null",   // Edge case for null values
    /*17*/ "insert into student values John,           \"Doe\",   Art,     21",
    /*18*/ "insert into student values Alice,          \"Wong\",  Physics, 24",
    /*19*/ "insert into student values Bob,            \"Smith\", Chemistry,19",

    // Basic select
    /*20*/ "select * from employee",
    /*21*/ "select last, first, dep from employee where dep = CS",
    /*22*/ "select last, salary from employee where salary > 100000",
    /*23*/ "select last, year from employee where year >= 2020",
    /*24*/ "select last, first from employee where salary < 150000",

    // Logical operators
    /*25*/ "select * from employee where (salary >= 100000 and dep = HR)",
    /*26*/ "select * from employee where (dep = Chemistry or dep = Biology)",
    /*27*/ "select * from employee where (dep = CS or salary > 150000) and year < 2020",
    /*28*/ "select * from employee where (last = Johnson or salary < 110000) and year >= 2015",

    // Relational operators
    /*29*/ "select * from student where age > 25",
    /*30*/ "select * from student where lname < 'J'",
    /*31*/ "select * from student where fname >= 'Bo'",
    /*32*/ "select * from student where age <= 30 and major = CS",
    /*33*/ "select * from student where lname != 'Smith'",

    // Parentheses and combinations
    /*34*/ "select * from employee where (last = Smith and year >= 2020) or (dep = HR and salary < 200000)",
    /*35*/ "select * from student where (lname > 'J' and major = Math) or (age < 25 and fname != 'Billy')",
    /*36*/ "select * from employee where (dep = CS or dep = Physics) and (salary >= 90000 and year > 2010)",
    /*37*/ "select last, first from employee where ((salary > 100000 and year < 2018) or (dep = Chemistry))",

    // Edge cases
    /*38*/ "select * from employee where dep = Null",
    /*39*/ "select * from student where age < 20",
    /*40*/ "select * from student where major = Null or lname = Null",
    /*41*/ "select * from student where age > 100", // Invalid case: age > 100
};

const int MAKE_TABLE_COMMANDS = 19;
const int SELECT_COMMANDS = 42;