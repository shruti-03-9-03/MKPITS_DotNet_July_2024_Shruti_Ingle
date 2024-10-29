 --Select Top 3 Cities with Most Customers: Write a query to select the top 3 cities
 --with the highest number of customers using the GROUP BY, ORDER BY, and TOP
 --clauses.

Select Top 3 City, Count(ID) As [Highest Number Of Customers] from Customer Group by City Order by [Highest Number Of Customers] Desc;
