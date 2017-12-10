.PHONY: clean

main: main.o
	gcc main.o -L../lib -lfuncs -o main -I../include
main.o: main.c
	gcc -c main.c -I../include
	
clean: 
	rm *.o main
