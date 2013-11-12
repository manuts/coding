prog : main.o stack.o
	gcc -o prog main.o stack.o

main.o : main.c
	gcc -c -g main.c

stack.o : stack.c
	gcc -c -g stack.c

clean :
	rm *.o
