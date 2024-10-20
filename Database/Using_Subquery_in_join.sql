SELECT c.CustomerName, o.OrderDate
FROM Customers c
INNER JOIN (
    SELECT CustomerID, MIN(OrderDate) AS FirstOrder
    FROM Orders
    GROUP BY CustomerID
) o
ON c.CustomerID = o.CustomerID
WHERE o.FirstOrder >= '2023-01-01';
