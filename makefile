Truc: Truc.o Machin.o main.o
	g++ -o Truc Truc.o main.o Machin.o

main.o: main.cpp Truc.h
	g++ -o main.o -c main.cpp -W -Wall -ansi -pedantic

Machin.o : Machin.cpp Machin.h
	g++ -o Machin.o -c Machin.cpp -W -Wall -ansi -pedantic

Truc.o: Truc.cpp Truc.h
	g++ -o Truc.o -c Truc.cpp -W -Wall -ansi -pedantic

clean:
	rm -rf *.o
