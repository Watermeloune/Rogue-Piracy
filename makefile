OBJDIR=obj
EXEDIR=bin
CFLAGS =-Wall -pedantic -ansi
CC=g++

RoguePiracy: main.o bateau.o
		g++ -o $(EXEDIR)/$@ $(OBJDIR)/main.o $(OBJDIR)/bateau.o -ISFML-2.4.2/include -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

bateau.o: src/Bateau.cpp src/Bateau.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

clean:
	rm -rf obj/*.o
	rm bin/RoguePiracy
