--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2606
use uri
/*
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
  (1,	'old stock'),
  (2,	'new stock'),
  (3,	'modern'),
  (4,	'commercial'),
  (5,	'recyclable'),
  (6,	'executive'),
  (7,	'superior'),
  (8,	'wood'),
  (9,	'super luxury'),
  (10,	'vintage');
  
INSERT INTO products (id , name, amount, price, id_categories)
VALUES
  (1,	'Lampshade',	100,	800,	4),
  (2,	'Table for painting',	1000,	560,	9),
  (3,	'Notebook desk',	10000,	25.50,	9),
  (4,	'Computer desk',	350,	320.50,	6),
  (5,	'Chair',	'3000',	'210.64',	9),	
  (6,	'Home alarm',	750,	460,	4);
  
  ----------------------------------- Resposta ---------------------
*/

select pro.id , pro.name from categories AS categ
inner join products AS pro ON pro.id_categories = categ.id
where categ.name like 'super%'



  /*  Execute this query to drop the tables */
  -- DROP TABLE products, categories; --