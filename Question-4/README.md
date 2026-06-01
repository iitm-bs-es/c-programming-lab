
# Movie Ticket Generator (Cinema Booking System)

## Problem Description
A cinema wants to automatically generate movie tickets for customers using a template file.

You are given:

### 1. Input File: `bookings.txt`
Each line contains:

```text
BookingID Name Movie Seat Price
````

Example:

```text
501 Arjun Inception A5 250
502 Diya Avatar B2 300
503 Rahul Interstellar C1 280
```

Each booking contains:

* Booking ID
* Customer Name
* Movie Name
* Seat Number
* Ticket Price

---

### 2. Template File: `template.txt`

```text
================================
       MOVIE TICKET
================================
Booking ID : {{id}}
Name       : {{name}}
Movie      : {{movie}}
Seat       : {{seat}}
Price      : ₹{{price}}
--------------------------------
Enjoy your movie!
================================
```

The placeholders:

* `{{id}}`
* `{{name}}`
* `{{movie}}`
* `{{seat}}`
* `{{price}}`

must be replaced with actual booking details.

---

## Task

For each booking in `bookings.txt`:

1. Read booking details.
2. Read template file line by line.
3. Replace placeholders.
4. Generate output file:

```text
ticket_<id>.txt
```

Example:

```text
ticket_501.txt
```

---

## Instructions

* Write all logic inside `main.c`
* Use functions from `helpers.h`
* Use `Makefile` for compilation

---

## Sample Output 

- Input `bookings.txt`:

'''text
501 Arjun Inception A5 250
502 Diya Avatar B2 300
503 Rahul Interstellar C1 280
'''


- Output files:

`ticket_501.txt`

```text
================================
       MOVIE TICKET
================================
Booking ID : 501
Name       : Arjun
Movie      : Inception
Seat       : A5
Price      : ₹250
--------------------------------
Enjoy your movie!
================================
```

`ticket_502.txt`

```text
================================
       MOVIE TICKET
================================
Booking ID : 502
Name       : Diya
Movie      : Avatar
Seat       : B2
Price      : ₹300
--------------------------------
Enjoy your movie!
================================
```

`ticket_503.txt`

```text
================================
       MOVIE TICKET
================================
Booking ID : 503
Name       : Rahul
Movie      : Interstellar
Seat       : C1
Price      : ₹280
--------------------------------
Enjoy your movie!
================================
```

---

## Evaluation

1. Implement `open_file()` with error handling.
2. Implement `generate_output_filename()`.
3. Read template file correctly.
4. Replace placeholders properly.
5. Implement `process_booking()`.
6. Implement `process_all_bookings()`.
7. Use helper functions correctly.
8. Generate one file per booking.
9. Print success message.

---

## Help

Navigate to directory:

```bash
cd /workspaces/c-programming-lab/Question-4/
```

Compile:

```bash
make
```

Run:

```bash
./ticket
```

````
