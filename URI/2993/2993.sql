use URI

create table value_table(
    amount int
);

insert into value_table(amount) values(1)
insert into value_table(amount) values(9)
insert into value_table(amount) values(5)
insert into value_table(amount) values(1)
insert into value_table(amount) values(2)
insert into value_table(amount) values(4)
insert into value_table(amount) values(7)
insert into value_table(amount) values(2)
insert into value_table(amount) values(1)
insert into value_table(amount) values(1)
insert into value_table(amount) values(6)
insert into value_table(amount) values(8)
insert into value_table(amount) values(1)
insert into value_table(amount) values(5)
insert into value_table(amount) values(9)


--------------- Resposta ----------------------------

select top 1 amount from value_table
group by amount
order by count(amount) desc