SELECT c.CustomerName, o.OrderCount
FROM Customers c
INNER JOIN (
    SELECT CustomerID, COUNT(OrderID) AS OrderCount
    FROM Orders
    WHERE YEAR(OrderDate) = 2024
    GROUP BY CustomerID
) o
ON c.CustomerID = o.CustomerID;
