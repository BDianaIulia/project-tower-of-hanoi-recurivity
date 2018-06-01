CC=gcc


CFLAGS=-c -Wall

all: hanoi

hanoi: main.o hanoifunc.o print.o
	$(CC) main.o hanoifunc.o print.o -o hanoi

main.o: main.c
	$(CC) $(CFLAGS) main.c

hanoifunc.o: hanoifunc.c
	$(CC) $(CFLAGS) hanoifunc.c

print.o: print.c
	$(CC) $(CFLAGS) print.c

clean:

	rm *.o hanoi

