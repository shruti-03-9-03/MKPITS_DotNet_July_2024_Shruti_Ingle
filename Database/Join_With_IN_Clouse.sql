SELECT c.CustomerName
FROM Customers c
INNER JOIN Orders o
ON c.CustomerID = o.CustomerID
WHERE o.ProductID IN (1, 2, 3);
