SELECT c.CustomerName, SUM(o.OrderAmount) AS TotalSpent
FROM Customers c
INNER JOIN Orders o
ON c.CustomerID = o.CustomerID
GROUP BY c.CustomerName;
