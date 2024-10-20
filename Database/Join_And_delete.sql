DELETE o
FROM Orders o
INNER JOIN Customers c
ON o.CustomerID = c.CustomerID
WHERE c.Status = 'Inactive';
