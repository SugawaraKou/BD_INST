CREATE DATABASE Sugawara;

USE Sugawara;

CREATE TABLE table1(t1 int, t2 date, t3 varchar(30))

SELECT * FROM table1;

INSERT INTO table1 VALUES (1, '21-12-2020', 'ssss');

INSERT INTO table1 VALUES (1, '21-12-2020', 'seee'), (1, '22-12-2000', 'seee');

DELETE FROM table1 WHERE t1 = 1 AND t2 = '2000-12-22';

UPDATE table1 SET t3 = 'hello' WHERE t3 = 'ssss';

ALTER TABLE table1 DROP COLUMN t;

ALTER TABLE table1 ADD t4 int identity;

ALTER TABLE table1 ALTER COLUMN t2 date NOT NULL;

INSERT INTO table1 (t1) VALUES (2), (3);

/*
Создать таблицу в котороую можно поместить инфу о блюде, опсание и дату изготовления, заполнить 3 значениями
Добавить 2 столбца с указаниями float and money ЗАПОЛНИТЬ ПРИ ПОМОЩИ UPDATE
Добавить столбец с порядковыми нумерами
*/
--

CREATE TABLE table2(i1 varchar(30), i2 varchar(30), i3 date);

INSERT INTO table2 VALUES ('Hell', 'He', '20-12-2020'), ('Hell1', 'He2', '21-12-2020'), ('Hedll2', 'He3', '22-12-2020');

ALTER TABLE table2 ADD i4 float;
ALTER TABLE table2 ADD i5 money;

UPDATE table2 SET i4 = 12;
UPDATE table2 SET i5 = 125;

ALTER TABLE table2 ADD I6 int identity;

SELECT * FROM table2;