--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2609
use uri
CREATE TABLE categories (
  id int PRIMARY KEY,
  name varchar(50)
);

CREATE TABLE products (
  id int PRIMARY KEY,
  name varchar(50),
  amount int,
  price float,
  id_categories int REFERENCES categories (id)
);

INSERT INTO categories (id, name)
VALUES 
  (1,	'wood'),
  (2,	'luxury'),
  (3,	'vintage'),
  (4,	'modern'),
  (5,	'super luxury');
  
INSERT INTO products (id, name, amount, price, id_categories)
VALUES 
  (1,	'Two-doors wardrobe', 100,	800,	1),
  (2,	'Dining table',	1000,	560,	3),
  (3,	'Towel holder',	10000,	25.50,	4),
  (4,	'Computer desk',	350,	320.50,	2),
  (5,	'Chair',	3000,	210.64,	4),
  (6,	'Single bed',	750,	460,	1);
  
--------------------- Resposta ----------------------

select categ.name , sum(amount) as sum from categories AS categ
inner join products AS pro ON pro.id_categories = categ.id
group by categ.name
order by categ.name asc

  /*  Execute this query to drop the tables */
  -- DROP TABLE categories,products; --