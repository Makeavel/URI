--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2744
use uri

/*
CREATE TABLE account(
  id INTEGER PRIMARY KEY,
  name VARCHAR(255),
  login VARCHAR(255),
  password VARCHAR(255)
  );
  
  
INSERT INTO account(id, name, login, password)
VALUES (1, 'Joyce P. Parry', 'Promeraw', 'noh1Oozei'),
       (2, 'Michael T. Gonzalez', 'Phers1942', 'Iath3see9bi'),
       (3, 'Heather W. Lawless', 'Hankicht', 'diShono4'),
       (4, 'Otis C. Hitt', 'Conalothe', 'zooFohH7w'),
       (5, 'Roger N. Brownfield', 'Worseente', 'fah7ohNg');

*/
  
select id , 
      password , 
      convert(varchar(32) , HASHBYTES('MD5' , password),2) as MD5 
from account

  /*  Execute this query to drop the tables */
  -- DROP TABLE account; --
