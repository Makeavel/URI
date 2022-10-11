use uri
/*
create table records(
    id int PRIMARY KEY,
    temperature int,
    mark int
);
*/

insert into records (id , temperature , mark) values(1, 30 , 1 )
insert into records (id , temperature , mark) values(2, 30 , 1 )
insert into records (id , temperature , mark) values(3, 30 , 1 )
insert into records (id , temperature , mark) values(4, 32 , 2 )
insert into records (id , temperature , mark) values(5, 32 , 2 )
insert into records (id , temperature , mark) values(6, 32 , 2 )
insert into records (id , temperature , mark) values(7, 32 , 2 )
insert into records (id , temperature , mark) values(8, 30 , 3 )
insert into records (id , temperature , mark) values(9, 30 , 3 )
insert into records (id , temperature , mark) values(10, 30 , 3 )
insert into records (id , temperature , mark) values(11, 31 , 4 )
insert into records (id , temperature , mark) values(12, 31 , 4 )
insert into records (id , temperature , mark) values(13, 33 , 5 )
insert into records (id , temperature , mark) values(14, 33 , 5 )
insert into records (id , temperature , mark) values(15, 33 , 5 )

select * from records;

--------------- RESPOSTA ------------------------------------------------

-- URI só aceita desse jeito, não é a melhor forma de se fazer mas ok
select temperature, count(temperature) as number_of_records 
    from records 
    group by mark , temperature
    order by mark