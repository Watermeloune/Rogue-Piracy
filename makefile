


RoguePiracy: obj/main.o
		g++ -o $@ $< -ISFML-2.4.2/include -lsfml-graphics -lsfml-window -lsfml-system

obj/main.o: src/main.cpp
	g++ -c $<
clean:
	rm -rf bin/*.o
