CC = gcc
flags = -ggdb -Wall

prog : main.o gstack.o
	$(CC) $(flags) -o prog main.o gstack.o

main.o : main.c
	$(CC) $(flags) -c -g main.c

stack.o : gstack.c
	$(CC) $(flags) -c -g gstack.c

clean :
	rm *.o
