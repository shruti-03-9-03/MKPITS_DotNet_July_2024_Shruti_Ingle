create table Employees(EmployeeID varchar(55),Name varchar(55),DepartmentID varchar(55));
insert into Employees(EmployeeID,Name,DepartmentID)values(1,'John Doe',101);
insert into Employees(EmployeeID,Name,DepartmentID)values(2,'Jane Smith',102);
insert into Employees(EmployeeID,Name,DepartmentID)values(3,'Alex Brown',103);
select*from Employees;


---------------------------------------------------------------------------------------------
create table Department(DepartmentID varchar (55),DepartmentName varchar(55));

insert into Department(DepartmentID,DepartmentName)values(101,'HR');
insert into Department(DepartmentID,DepartmentName)values(102,'IT');
insert into Department(DepartmentID,DepartmentName)values(103,'Marketing');
select*from Department;
---------------------------------------------------------------------------------------------
create table Customers(CustomerID Bigint,CustomerName varchar(55),Email varchar(55));

insert into Customers(CustomerID,CustomerName,Email)values(1,'John','John@Example.com');
insert into Customers(CustomerID,CustomerName,Email)values(2,'jane smith','jane@example.com');
select*from Customers;
------------------------------------------------------------------------------------------------
create table NewOrders(OrderID bigint,CustomerID bigint,OrderDate Date);

insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-12');
insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-13');
insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-14');
select  * from NewOrders;
--------------------------------------------------------------------------------------------------
create table OrderItems(OrderItemID bigint,orderID bigint,ProductID bigint,Quantity bigint);

insert into OrderItems values(1001,101,201,2);
insert into OrderItems values(1002,101,202,1);
insert into OrderItems values(1003,102,203,3);
select * from OrderItems
------------------------------------------------------------------------------------------------------
create table Products(ProductID bigint,ProductName varchar(55),Price bigint);

insert into Products values(201,'Laptop',1000);
insert into Products values(202,'Mouse',50);
insert into Products values(203,'Keyboard',75);

select*from Products;
---------------------------------------------------------------------------------------------------
create table Emp(EmployeeID bigint,Name varchar(55),ManagerID bigint);
insert into Emp(EmployeeID,Name,ManagerID)values(1,'John Doe',null);
insert into Emp(EmployeeID,Name,ManagerID)values(2,'Jane Smith',1);
insert into Emp(EmployeeID,Name,ManagerID)values(3,'Alex Brown',1);
insert into Emp(EmployeeID,Name,ManagerID)values(4,'Emma White',2);
insert into Emp(EmployeeID,Name,ManagerID)values(5,'Mark black',3);
select*from Emp;


-------------------------------------------------------------------------------------------------------------------------

select e.Name,d.DepartmentName from Employees e join Department d
on e.DepartmentID=e.DepartmentID


select e2.Name,Manager.Name as ManagerName from Employees e2 join EmployeesManager on ManagerID = emp.EmployeeID



select Customers
