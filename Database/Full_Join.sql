SELECT c.CustomerName, o.OrderID
FROM Customers c
FULL OUTER JOIN Orders o
ON c.CustomerID = o.CustomerID;
