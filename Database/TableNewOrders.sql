create table NewOrders(OrderID bigint,CustomerID bigint,OrderDate Date);

insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-12');
insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-13');
insert into NewOrders(OrderID, CustomerID, OrderDate)values(101,1,'2024-01-14');
select  * from NewOrders;