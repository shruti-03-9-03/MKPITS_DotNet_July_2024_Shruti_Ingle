CREATE TABLE EmployeeDetail (
    EmpId int NOT NULL PRIMARY KEY Identity(1,1),
    FirstName nvarchar(50),
    LastName nvarchar(50),
    Contact nvarchar(50),
	Salary decimal(18,2),
	deptID int Not null,
);   --create a table using crate command 