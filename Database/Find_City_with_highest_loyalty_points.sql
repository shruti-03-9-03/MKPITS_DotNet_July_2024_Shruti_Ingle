 --Find City with Maximum Loyalty Points: Write a query to find the City with the
 --highest total LoyaltyPoints using the SUM and GROUP BY functions.

select top 1 City, Sum(LoyaltyPoints)as Total_LoyaltyPoints from Customer Group by City Order by Total_LoyaltyPoints;