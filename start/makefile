.PHONY : clean

main: main.o 
	gcc -o main main.o

main.o: main.c RSP.c
	gcc -c main.c RSP.c
	

clean:
	rm *.o main
