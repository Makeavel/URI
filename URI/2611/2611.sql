--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2611
use uri
CREATE TABLE genres (
  id int PRIMARY KEY,
  description varchar(50)
);

CREATE TABLE movies (
  id int PRIMARY KEY,
  name varchar(50),
  id_genres int REFERENCES genres (id)
);

INSERT INTO genres (id, description)
VALUES
  (1,	'Animation'),
  (2,	'Horror'),
  (3,	'Action'),
  (4,	'Drama'),
  (5,	'Comedy');
  
INSERT INTO movies (id, name, id_genres)
VALUES
  (1,	'Batman',	3),
  (2,	'The Battle of the Dark River',	3),
  (3,	'White Duck',	1),
  (4,	'Breaking Barriers',	4),
  (5,	'The Two Hours',	2);

--------------------- RESPOSTA -----------------------------

select movies.id , movies.name from movies
inner join genres AS gen ON gen.id = movies.id_genres
where gen.[description] like 'Action'
order by movies.id asc




/*  Execute this query to drop the tables */
-- DROP TABLE movies, genres; --

