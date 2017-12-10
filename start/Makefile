.PHONY: clean

start: main.o
	gcc main.o -L../lib -lfuncs -o start -I../include
main.o: main.c
	gcc -c main.c -I../include
	
clean: 
	rm *.o main
