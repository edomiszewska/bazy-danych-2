-------------------------8 GRUDNIA--------------------------
zad 16
SELECT last_name, first_name, customer_id from customer where store_id=2 and active=0; 

zlicza
SELECT count(customer_id) from customer where store_id=2 and active=0; 


zad 17
SELECT title from film 
where replacement_cost between 25 and 30  order by rental_rate limit 100;

zad 18
SELECT * from country where country_id=76; 
update country set country="Polska" where country_id=76;

sprawdzamy:
SELECT country_id, country from country where country_id=76; 

zad 19
insert into city(city.city_id, city.country_id, city.city) values('601', '76', 'Knurów');


CREATE DATABASE liczone; 

CREATE table liczby(
    a INT,
    b INT,
    c FLOAT,
    d FLOAT,
    e DOUBLE,
    f DOUBLE,
    g DECIMAL(4,2),
    h DECIMAL(4,2));

   insert into liczby VALUES (1, 2, 1.1, 2.2, 1.1, 2.2, 1.1, 2.2);

   select a+b, c+d, e+f, g+h, a+b<3, c+d=3.30, e+f=3.3, g+h=3.3 from liczby;
