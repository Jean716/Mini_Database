-- Mini_Database demo script. Run from the build directory:
--   ./bin/main < ../examples/demo.sql
make table employee fields last, first, dep, salary, year
insert into employee values Blow, Joe, CS, 100000, 2018
insert into employee values Blow, JoAnn, Physics, 200000, 2016
insert into employee values Johnson, Jack, HR, 150000, 2014
insert into employee values Johnson, "Jimmy", Chemistry, 140000, 2018
insert into employee values Yang, Bo, CS, 160000, 2012

select * from employee
select first, last from employee where dep = CS
select * from employee where last = Johnson and year = 2018
select * from employee where (dep = CS or dep = HR) and year < 2016
select last, dep from employee where last >= J
