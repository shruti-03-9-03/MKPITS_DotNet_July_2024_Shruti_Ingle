SELECT c.CustomerName, o.OrderDate
FROM Customers c
INNER JOIN Orders o
ON c.CustomerID = o.CustomerID
WHERE o.OrderDate >= DATEADD(DAY, -30, GETDATE());
