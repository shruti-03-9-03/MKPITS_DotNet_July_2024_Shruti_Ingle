 --Select Customers Grouped by Registration Year: Group customers by the year
 --they registered and count the number of customers in each group using the GROUP
 --BY and YEAR functions.

 select Count(ID) As Customer_Count, YEAR(Registration_Date) As Registred_Year From Customer group by YEAR(Registration_Date);