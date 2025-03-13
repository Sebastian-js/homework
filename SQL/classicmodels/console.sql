/*
    Esercizio 1: Selezionare il customerName di tutti i customer francesi
*/
SELECT customerName FROM classicmodels.customers
WHERE country = 'France';

/*
    Esercizio 2: Selezionare il customerName di tutti i customer che hanno come referente per gli acquisti
Castillo Pamela
*/
SELECT customerName
  FROM classicmodels.customers JOIN classicmodels.employees
       ON (employeeNumber = salesRepEmployeeNumber)
WHERE lastName = 'Castillo' && firstName = 'Pamela';

/*
    Esercizio 3: Selezionare il customerName di tutti i customer che hanno un ordine in stato ‘In Process’ con
data di spedizione nulla
*/
SELECT customerName
    FROM classicmodels.customers JOIN classicmodels.orders
        ON (customers.customerNumber = orders.customerNumber)
WHERE status = 'In Process' && shippedDate IS NULL;

/*
    Esercizio 4: Seleziona il nome dei prodotti spediti da 01/01/2004 al 10/01/2004
*/
SELECT productName
    FROM products JOIN orderdetails
        ON (products.productCode = orderdetails.productCode)
    JOIN orders ON (orderdetails.orderNumber = orders.orderNumber)
WHERE shippedDate BETWEEN '2004/01/01' AND '2004/01/10';

/*
    Esercizio 5:  Selezione il nome dei prodotti, il prezzo per unità, la quantità e il prezzo totale degli ordini
    effettuati dal customer ‘Alpha Cognac’, per i prodotti di productline ‘Ships’, ordina il risultato per prezzo totale decrescente
*/
SELECT productName, priceEach, quantityOrdered, (priceEach * quantityOrdered) AS amount
    FROM products JOIN orderdetails
        ON (products.productCode = orderdetails.productCode)
    JOIN orders ON (orderdetails.orderNumber = orders.orderNumber)
    JOIN customers ON (orders.customerNumber = customers.customerNumber)
WHERE customerName = 'Alpha Cognac' AND productLine = 'Ships'
ORDER BY amount DESC;

/*
    Esercizio 6: Selezionare il customerName e il cognome e nome del referente per gli acquisti per i clienti
Svizzeri, visualizzando anche i clienti senza referente associato
*/
SELECT customerName, firstName, lastName
    FROM customers LEFT JOIN employees
        ON (customers.salesRepEmployeeNumber = employees.employeeNumber)
WHERE country = 'Switzerland';