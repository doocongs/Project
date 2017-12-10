.PHONY: clean

libfuncs.a: B31.o RSP.o Roulette.o bbopgi.o getch.o
	ar rv libfuncs.a B31.o RSP.o Roulette.o bbopgi.o getch.o 
B31.o: B31.c
	gcc -c B31.c -I../include
RSP.o: RSP.c
	gcc -c RSP.c -I../include -pthread
Roulette.o: Roulette.c
	gcc -c Roulette.c -I../include
bbopgi.o: bbopgi.c
	gcc -c bbopgi.c -I../include
getch.o: getch.c
	gcc -c getch.c -I../include

clean:
	rm libfuncs.a *.o
