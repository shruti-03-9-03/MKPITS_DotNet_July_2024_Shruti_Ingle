create table Emp(EmployeeID bigint,Name varchar(55),ManagerID bigint);
insert into Emp(EmployeeID,Name,ManagerID)values(1,'John Doe',null);
insert into Emp(EmployeeID,Name,ManagerID)values(2,'Jane Smith',1);
insert into Emp(EmployeeID,Name,ManagerID)values(3,'Alex Brown',1);
insert into Emp(EmployeeID,Name,ManagerID)values(4,'Emma White',2);
insert into Emp(EmployeeID,Name,ManagerID)values(5,'Mark black',3);
select*from Emp;
