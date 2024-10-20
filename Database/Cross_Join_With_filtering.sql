SELECT c.CustomerName, p.ProductName
FROM Customers c
CROSS JOIN Products p
WHERE c.Region = 'North';
