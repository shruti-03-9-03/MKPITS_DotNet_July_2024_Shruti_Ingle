UPDATE c
SET c.Status = 'Inactive'
FROM Customers c
LEFT JOIN Orders o
ON c.CustomerID = o.CustomerID
WHERE o.OrderID IS NULL OR o.OrderDate < DATEADD(YEAR, -1, GETDATE());
