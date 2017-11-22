.PHONY: clean
main: main.o
	gcc -o main main.c ../bbopgi/bbopgi.o ../Rockscisorspaper/RSP.o
main.o: main.c 
	gcc -c main.c -I../include/bbopgi.h -I../include/RSP.h

clean: 
	rm *.o main
