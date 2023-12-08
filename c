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
    g DECIMAL(4,2),     --> 4 liczby, 2 miejsca po przecinku
    h DECIMAL(4,2));

   insert into liczby VALUES (1, 2, 1.1, 2.2, 1.1, 2.2, 1.1, 2.2);

   select a+b, c+d, e+f, g+h, a+b<3, c+d=3.30, e+f=3.3, g+h=3.3 from liczby;


    ------------------TYPY DANYCH ------------------
        typy:   długość:
        int       4
        float     4
        double    8
        decimal   M+2

        typy daty i czasu
        typ danych    przyklad                dane
        date          2015-03-15              data w formacie: RRRR-MM-DD
        datetime      2015-03-15 14:15:25     data i czas w formacie: RRRR-MM-DD HH:MM:SS
        timestamp     2015-03-15 14:15:25     automatyczne odnowienie daty i czasu z systemu
        time          14:15:25                czas HH:MM:SS
        year          2015                    RRRR

        char i varchar
        co to typ znakomy text
        typ znakowy enum i set 


        create table zapas(
        id SERIAL,
        nazwa varchar(100),
        stan enum('wysoki','sredni','niski')
        );

        insert into zapas (nazwa, stan) values ('Mleko', 'wysoki')
        insert into zapas (nazwa, stan) values ('Ser', 'sredni');
        insert into zapas (nazwa, stan) values ('Jogurt', 'niski'); 
        insert into zapas (nazwa, stan) values ('kefir', 'wysoki'); 
        insert into zapas (nazwa, stan) values ('kefir', 'wysoka'); 
        insert into zapas (nazwa, stan) values ('kefir', '3');
        delete from zapas where id='6';
        delete from zapas where id='5';


        zadanie stworz tabele z enum bardziej rozbudowana wiecej stanow na enum
        

       create table arabski_targ(
        id SERIAL,
        nazwa varchar(100),
        rodzaj enum('perfumy','dywany','inne', 'przyprawy', 'owoce'),
    	firma enum('salam', 'alladyn', 'inna')
        );

insert into arabski_targ (rodzaj, firma) values ('', ''); 
insert into arabski_targ (rodzaj, firma, nazwa) values ('dywany', 'alladyn', 'niebieski dywan');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('dywany', 'alladyn', 'zielony dywan', '3');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('dywany', 'alladyn', 'fioletowy dywan', '4');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('perfumy', 'salam', 'waniliowy perfum', '5');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('perfumy', 'salam', 'różany perfum', '6');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('perfumy', 'salam', 'fiołkowyy perfum', '7');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('przyprawy', 'inna', 'pieprz', '8');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('przyprawy', 'inna', 'papryka', '9');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('przyprawy', 'inna', 'sól', '10');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('owoce', 'inna', 'mandarynki', '11');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('owoce', 'inna', 'banany', '12');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('owoce', 'inna', 'jabłka', '13');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('owoce', 'inna', 'winogrona', '14');
insert into arabski_targ (rodzaj, firma, nazwa, id) values ('owoce', 'inna', 'kiwi', '15');
