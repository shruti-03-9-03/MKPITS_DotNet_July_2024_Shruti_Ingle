--Select Top 5 Customers by Loyalty Points: Retrieve the top 5 customers with the
-- highest LoyaltyPoints using the ORDER BY and TOP clauses

select top 5 ID, LoyaltyPoints
FROM Customer
ORDER BY LoyaltyPoints DESC;