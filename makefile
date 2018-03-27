OBJDIR=obj
EXEDIR=bin
CFLAGS =-Wall -pedantic -ansi
CC=g++

RoguePiracy: main.o
		g++ -o $(EXEDIR)/$@ $(OBJDIR)/$< -ISFML-2.4.2/include -lsfml-graphics -lsfml-window -lsfml-system

main.o: src/main.cpp
	$(CC) $(CFLAGS) -c $< -o $(OBJDIR)/$@

clean:
	rm -rf obj/*.o
	rm bin/RoguePiracy
