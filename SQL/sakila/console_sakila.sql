/* Esercizio 1:
    Selezionare il film_id ed il titolo dei film noleggiati il '2005-08-16'
*/
SELECT film.film_id, film.title FROM film
    JOIN inventory ON (inventory.film_id = film.film_id )
    JOIN rental ON (rental.inventory_id = inventory.inventory_id)
WHERE rental.rental_date >= '2005-08-16' AND  rental.rental_date < '2005-08-17';

/* Esercizio 2:
    Trovare nome e cognome dei clienti del distretto ‘California’
*/
SELECT customer.first_name, customer.last_name FROM customer
    JOIN address ON (customer.address_id = address.address_id)
WHERE address.district = 'California';

/* Esercizio 3:
     Trovare nome, cognome e distretto in cui lavorano i dipendenti
*/
SELECT staff.first_name, staff.last_name, address.district FROM staff
    JOIN store ON (staff.store_id = store.store_id)
    JOIN address ON (store.address_id = address.address_id);

/* Esercizio 4:
    Trovare nome e cognome dei degli attori che hanno partecipato a un film in lingua giapponese,
ordina il risultato per cognome e nome
*/
SELECT actor.first_name, actor.last_name FROM actor
    JOIN film_actor ON (actor.actor_id = film_actor.actor_id)
    JOIN film ON (film_actor.film_id = film.film_id)
    JOIN language ON (film.language_id = language.language_id)
WHERE language.name = 'Japanese'
ORDER BY actor.last_name;

/* Esercizio 5:
    Trovare titolo e film_id dei film che non sono mai stati noleggiati con lunghezza superiore a
150
*/
SELECT film.title, film.film_id FROM film
    LEFT JOIN inventory ON (film.film_id = inventory.film_id)
    LEFT JOIN rental ON (inventory.inventory_id = rental.inventory_id)
WHERE rental.rental_date IS NULL AND film.length >= 150;
