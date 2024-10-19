create table InfoEmployees(EmployeeID int primary key,FirstName nvarchar(50),LastName nvarchar(50),Department int);
create table Departments(DepartmentID int primary key ,DepartmentName nvarchar(50));
create table salaries (EmployeeID int ,SalaryAmount decimal(10, 2),PayDate date);


select e.FirstName,e.LastName,d.DepatmentName
from Employee e 
inner join Department d
on e.Department=d.Department;