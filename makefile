OBJDIR=obj
EXEDIR=bin
CFLAGS =-Wall -pedantic -ansi -std=c++11
CC=g++

RoguePiracy: main.o Bateau.o Matelot.o
		g++ -o $(EXEDIR)/$@ $(OBJDIR)/main.o $(OBJDIR)/Bateau.o $(OBJDIR)/Matelot.o -ISFML-2.4.2/include -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Bateau.o: src/Bateau.cpp src/Bateau.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Matelot.o: src/Matelot.cpp src/Matelot.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

clean:
	rm -rf obj/*.o
	rm bin/RoguePiracy
