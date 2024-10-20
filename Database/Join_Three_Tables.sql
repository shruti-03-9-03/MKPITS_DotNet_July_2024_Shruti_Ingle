SELECT o.OrderID, c.CustomerName, p.ProductName
FROM Orders o
INNER JOIN Customers c
ON o.CustomerID = c.CustomerID
INNER JOIN Products p
ON o.ProductID = p.ProductID;
