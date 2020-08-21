--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2623
use uri
CREATE TABLE categories (
  id int PRIMARY KEY,
  name varchar(255)
);

CREATE TABLE products (
  id int PRIMARY KEY,
  name varchar (255),
  amount int,
  price int,
  id_categories int REFERENCES categories (id)
);


INSERT INTO categories (id, name)
VALUES
  (1,	'Superior'),
  (2,	'Super Luxury'),
  (3,	'Modern'),
  (4,	'Nerd'),
  (5,	'Infantile'),
  (6,	'Robust'),
  (9,	'Wood');

INSERT INTO products (id, name, amount, price, id_categories)
VALUES
  (1,	'Blue Chair',	30, 300.00,	9),
  (2,	'Red Chair',	200,	2150.00, 2),
  (3,	'Disney Wardrobe',	400,	829.50,	4),
  (4,	'Blue Toaster',	20,	9.90,	3),
  (5,	'Solar Panel',	30,	3000.25,	4);

------------------  RESPOSTA -------------------------

select products.name , categories.name from products 
inner join categories ON categories.id = products.id_categories
where categories.id in (1,2,3,6,9) and amount > 100
order by id_categories


/*  Execute this query to drop the tables */
-- DROP TABLE products, categories; --
