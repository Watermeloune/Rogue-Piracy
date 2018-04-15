OBJDIR=obj
EXEDIR=bin
CFLAGS =-Wall -pedantic -ansi -std=c++11 -O3 -I./SFML-2.4.2/include
CC=g++

RoguePiracy: main.o Bateau.o Matelot.o Equipage.o Fonctions.o Arme.o Objet.o Ile.o Jeu.o
	g++ -o $(EXEDIR)/$@ $(OBJDIR)/main.o $(OBJDIR)/Bateau.o $(OBJDIR)/Matelot.o $(OBJDIR)/Jeu.o $(OBJDIR)/Objet.o $(OBJDIR)/Arme.o $(OBJDIR)/Fonctions.o $(OBJDIR)/Equipage.o $(OBJDIR)/Ile.o -L./SFML-2.4.2/lib -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Bateau.o: src/Bateau.cpp src/Bateau.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Matelot.o: src/Matelot.cpp src/Matelot.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Equipage.o: src/Equipage.cpp src/Equipage.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Fonctions.o: src/fonctions.cpp src/fonctions.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Arme.o: src/Arme.cpp src/Arme.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Objet.o: src/Objet.cpp src/Objet.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Ile.o: src/Ile.cpp src/Ile.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

Jeu.o: src/Jeu.cpp src/Jeu.h
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

clean:
	rm -rf obj/*.o
	rm bin/RoguePiracy
