--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2737
use uri
/*
CREATE TABLE lawyers(
  register int PRIMARY KEY,
  name VARCHAR(255),
  customers_number INT
 );
  
  
 INSERT INTO lawyers(register, name, customers_number)
 VALUES (1648, 'Marty M. Harrison', 5),
	(2427, 'Jonathan J. Blevins', 15),
	(3365, 'Chelsey D. Sanders', 20),
	(4153, 'Dorothy W. Ford', 16),
	(5525, 'Penny J. Cormier', 6);
*/
 
select * from lawyers;
------------------ RESPOSTA ----------------------------

-- os cara usam limit 1 no lugar do top 1

(
  select top 1 name ,customers_number from lawyers
  order by customers_number desc
)
UNION ALL
(
  select top 1  name ,customers_number from lawyers
  order by customers_number asc
  
)
UNION ALL
(
  select 'Averege' , round(avg(customers_number),0)from lawyers
)
-----------------------------------------------------------------
(
    select name, customers_number from lawyers
    order by customers_number desc
    LIMIT 1
)
UNION ALL
(
    select name, customers_number from lawyers
    order by customers_number asc
    LIMIT 1
)
UNION ALL
(
    select 'Average', round(AVG(customers_number), 0) from lawyers
)


select top 1 name ,customers_number from lawyers
order by customers_number desc
select top 1  name ,customers_number from lawyers
order by customers_number asc
select 'Averege' , round(avg(customers_number),0)from lawyers



  /*  Execute this query to drop the tables */
  -- DROP TABLE lawyers; --