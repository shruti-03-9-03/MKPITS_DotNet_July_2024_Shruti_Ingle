create table OrderItems(OrderItemID bigint,orderID bigint,ProductID bigint,Quantity bigint);

insert into OrderItems values(1001,101,201,2);
insert into OrderItems values(1002,101,202,1);
insert into OrderItems values(1003,102,203,3);
select * from OrderItems