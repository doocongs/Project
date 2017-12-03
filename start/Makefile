.PHONY: clean

<<<<<<< HEAD
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
=======
main: main.o
	gcc -o main main.c ../bbopgi ../RSP ../B31
main.o: main.c 
	gcc -c main.c -I../include -I../include -I../include
>>>>>>> 048a76cf0a48129fe463db100f03ffdd6e9e7b95
clean: 
	rm *.o main
