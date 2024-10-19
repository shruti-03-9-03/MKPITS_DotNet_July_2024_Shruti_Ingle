SELECT e.EmployeeName, m.EmployeeName AS Manager
FROM Employees e
INNER JOIN Employees m
ON e.ManagerID = m.EmployeeID;
