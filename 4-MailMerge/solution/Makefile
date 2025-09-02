CC=gcc
CFLAGS=-Wall

all: payslip

payslip: main.o helpers.o
	$(CC) $(CFLAGS) -o payslip main.o helpers.o

main.o: main.c helpers.h
	$(CC) $(CFLAGS) -c main.c

helpers.o: helpers.c helpers.h
	$(CC) $(CFLAGS) -c helpers.c

clean:
	rm -f *.o payslip
