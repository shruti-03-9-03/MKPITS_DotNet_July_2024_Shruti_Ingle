create  or alter trigger MySelectTrigger
on Customer
For Insert
As 
insert into Orders(OrdersDate,CustomerId,TotalAmount,OrdersNumber)Values('2012-07-05 00:00:00.000',(select max(Customer.Id)from Customer),1863.40,542379)