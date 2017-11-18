.PHONY : clean

main: main.o 
	gcc -o main main.o

main.o: main.c RSP.c bbopgi.c
	gcc -c main.c RSP.c bbopgi.c
	

clean:
	rm *.o main
