--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2618
use uri

CREATE TABLE tb_providers (
  id numeric PRIMARY KEY,
  name varchar(255),
  street varchar(255),
  city varchar(255),
  state char(2)
);

CREATE TABLE tb_categories (
  id numeric PRIMARY KEY,
  name varchar(255)
);

CREATE TABLE tb_products (
  id numeric PRIMARY KEY,
  name varchar (255),
  amount numeric,
  price numeric,
  id_providers numeric REFERENCES tb_providers (id),
  id_categories numeric REFERENCES tb_categories (id)
);

INSERT INTO tb_providers (id, name, street, city, state)
VALUES
  (1,	'Ajax SA',	'Rua Presidente Castelo Branco',	'Porto Alegre',	'RS'),
  (2,	'Sansul SA',	'Av Brasil',	'Rio de Janeiro',	'RJ'),
  (3,	'South Chairs',	'Rua do Moinho',	'Santa Maria',	'RS'),
  (4,	'Elon Electro',	'Rua Apolo',	'São Paulo',	'SP'),
  (5,	'Mike Electro',	'Rua Pedro da Cunha',	'Curitiba',	'PR');

INSERT INTO tb_categories (id, name)
VALUES
  (1,	'Super Luxury'),
  (2,	'Imported'),
  (3,	'Tech'),
  (4,	'Vintage'),
  (5,	'Supreme');
  
INSERT INTO tb_products (id, name, amount, price, id_providers, id_categories)
VALUES
  (1,	'Blue Chair',	30,	300.00,	5,	5),
  (2,	'Red Chair',	50,	2150.00,	2,	1),
  (3,	'Disney Wardrobe',	400,	829.50,	4,	1),
  (4,	'Blue Toaster',	20,	9.90,	3,	1),
  (5,	'TV',	30,	3000.25,	2,	2);
  
  
------------------------ RESPOSTA  ------------------------------------

select prod.name , prov.name , cate.name from tb_categories AS cate
inner join tb_products AS prod ON prod.id_categories = cate.id
inner join tb_providers AS prov ON prov.id = prod.id_providers
where prov.name like 'Sansul SA' and cate.name like 'Imported'

/*  Execute this query to drop the tables */
-- DROP TABLE tb_products, tb_categories, tb_providers; --