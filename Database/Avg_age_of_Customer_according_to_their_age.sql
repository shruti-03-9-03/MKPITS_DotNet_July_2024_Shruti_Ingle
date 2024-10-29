--Calculate Average Age by City: Write a query to calculate the average age of
-- customers in each City using the GROUP BY and AVG functions.

Select AVG(Age) as age, City from Customer Group by City;