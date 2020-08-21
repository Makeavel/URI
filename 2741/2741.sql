--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2741
use uri
CREATE TABLE students(
  id INT PRIMARY KEY,
  name VARCHAR(255),
  grade float
);


INSERT INTO students(id, name, grade)
VALUES (1, 'Terry B. Padilla',7.3),
       (2, 'William S. Ray',0.6),
       (3, 'Barbara A. Gongora',5.2),
       (4, 'Julie B. Manzer', 6.7),
       (5, 'Teresa J. Axtell', 4.6),
       (6, 'Ben M. Dantzler', 9.6),
       (7, 'Laura Coelho' , 9.9),
       (8, 'Mayte Piragibe', 6.9),
       (9, 'Enzo Ferrari',4.0),
       (10, 'Makeavel',7.1);

  select * from students

  ------------- RESPOSTA ----------------------

  select concat('Approved: ', name) as name , grade from students
  where grade >= 7
  order by grade desc

  /*  Execute this query to drop the tables */
  -- DROP TABLE students; --
