SELECT o.OrderID, c.CustomerName
FROM Orders o
RIGHT JOIN Customers c
ON o.CustomerID = c.CustomerID;
