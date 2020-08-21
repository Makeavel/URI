--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2616
use uri 

CREATE TABLE tb_customers (
  id int PRIMARY KEY,
  name varchar(50),
  street varchar(50),
  city varchar(50)
);

CREATE TABLE locations (
  id int PRIMARY KEY,
  locations_date date,
  id_customers int REFERENCES tb_customers (id)
);

INSERT INTO tb_customers (id, name, street, city)
VALUES
  (1,	'Giovanna Goncalves Oliveira',	'Rua Mato Grosso',	'Canoas'),
  (2,	'Kauã Azevedo Ribeiro',	'Travessa Ibiá',	'Uberlândia'),
  (3,	'Rebeca Barbosa Santos',	'Rua Observatório Meteorológico',	'Salvador'),
  (4,	'Sarah Carvalho Correia',	'Rua Antônio Carlos da Silva',	'Apucarana'),
  (5,	'João Almeida Lima',	'Rua Rio Taiuva',	'Ponta Grossa'),
  (6,	'Diogo Melo Dias',	'Rua Duzentos e Cinqüenta',	'Várzea Grande');
  

INSERT INTO locations (id , locations_date, id_customers)
VALUES
  (1,	'09/10/2016',	3),
  (2,	'02/09/2016',	1),
  (3,	'02/08/2016',	4),
  (4,	'02/09/2015',	2),
  (5,	'02/03/2016',	6),
  (6,	'04/04/2016',	4);
  
  select * from locations 
  select * from customers

---------------------- RESPOSTA ------------------------

select cus.id , cus.name  from customers AS cus
left join locations AS loc ON loc.id_customers = cus.id
where loc.id_customers is NULL
order by cus.id asc
  /*  Execute this query to drop the tables */
  -- DROP TABLE locations ,customers; --

 