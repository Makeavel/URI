--                       URI 3001

--     --Criando tabela
--create table tb_products(
--	id INT PRIMARY KEY,
--	name varchar(50) NOT NULL,
--	type char ,
--	price numeric
--	);

---- Inserindo valores (tuplas)
--insert into tb_products(id,name,type,price) values(1,'Monitor' , 'B' , 0);
--insert into tb_products(id,name,type,price) values(2,'Headset' , 'A' , 0);
--insert into tb_products(id,name,type,price) values(3,'PC Case' , 'A' , 0);
--insert into tb_products(id,name,type,price) values(4,'Computer Desk' , 'C' , 0);
--insert into tb_products(id,name,type,price) values(5,'Gaming Chair' , 'C' , 0);
--insert into tb_products(id,name,type,price) values(6,'Mouse' , 'A' , 0)

--select * from uri..tb_products;

-- Fazendo update dos dados 
	update tb_products set price = 20.0 where type = 'A'
	update tb_products set price = 70.0 where type = 'B'
	update tb_products set price = 530.5 where type = 'C'
		
		select name ,CASE WHEN type = 'A' THEN 20.0 WHEN type = 'B' THEN 70.0 ELSE 530.5 END as price from products
		order by price asc , id desc



	
-- COMANDO PARA DROPAR TABELA
	--drop table uri..tb_products