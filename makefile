CC=gcc


CFLAGS=-c -Wall

all: hanoi

hanoi: main.o hanoi_function.o print.o input.o
	$(CC) main.o hanoi_function.o print.o input.o -o hanoi

main.o: main.c
	$(CC) $(CFLAGS) main.c

hanoi_function.o: hanoi_function.c
	$(CC) $(CFLAGS) hanoi_function.c

print.o: print.c
	$(CC) $(CFLAGS) print.c

input.o : input.c
	$(CC) $(CFLAGS) input.c

clean:

	rm *.o hanoi

