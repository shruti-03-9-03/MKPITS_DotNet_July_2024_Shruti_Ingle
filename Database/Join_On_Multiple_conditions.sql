SELECT o.OrderID, c.CustomerName, o.OrderAmount
FROM Orders o
INNER JOIN Customers c
ON o.CustomerID = c.CustomerID
WHERE o.OrderAmount > 100 AND c.Status = 'Active';
