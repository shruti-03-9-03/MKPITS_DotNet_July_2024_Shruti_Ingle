SELECT c.CustomerName, o.OrderID, o.OrderDate
FROM Customers c
INNER JOIN Orders o
ON c.CustomerID = o.CustomerID
WHERE o.OrderDate BETWEEN '2024-01-01' AND '2024-12-31';
