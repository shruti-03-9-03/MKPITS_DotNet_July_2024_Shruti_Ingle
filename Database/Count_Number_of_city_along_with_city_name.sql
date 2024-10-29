--Group Customers by City: Retrieve the count of customers in each City using the
-- GROUP BY and COUNT functions

select count(Id)As [Number OF City],City from Customer group by City;