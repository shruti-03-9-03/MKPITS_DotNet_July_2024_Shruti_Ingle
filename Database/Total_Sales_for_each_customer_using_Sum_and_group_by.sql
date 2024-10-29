--Calculate Total Sales Per Customer: Write a query to calculate the total sales
-- (OrderAmount) for each customer using the SUM function and grouping by
-- CustomerID.

select CustomerId, Sum(TotalAmount) as [Total Sales] from Orders Group by CustomerId;