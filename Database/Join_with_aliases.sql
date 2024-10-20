SELECT c.CustomerName, COUNT(o.OrderID) AS OrderCount
FROM Customers c
INNER JOIN Orders o
ON c.CustomerID = o.CustomerID
GROUP BY c.CustomerName
HAVING COUNT(o.OrderID) > 3;
