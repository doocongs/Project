.PHONY: clean

main: main.o Roulette.o RSP.o bbopgi.o
	gcc -o main main.o Roulette.o RSP.o bbopgi.o
main.o: main.c 
	gcc -c main.c 
Roulette.o: Roulette.c Roulette.h
	gcc -c Roulette.c
RSP.o:RSP.c RSP.h
	gcc -c RSP.c
bbopgi.o:bbopgi.c bbopgi.h
	gcc -c bbopgi.c
clean: 
	rm *.o main
