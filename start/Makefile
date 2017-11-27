.PHONY: clean

main: main.o
	gcc -o main main.c ../bbopgi ../RSP
main.o: main.c 
	gcc -c main.c -I../include -I../include
clean: 
	rm *.o main
