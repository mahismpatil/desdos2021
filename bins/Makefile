CC=gcc

main: main.o add.o
	$(CC) -o main main.o add.o

main.o: main.c
	$(CC) -c -o main.o main.c

add.o: add.c
	$(CC) -c -o add.o add.c

clean:
	rm -rf *.o main