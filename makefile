out: horse.o race.o main.o
	g++ -g horse.o race.o main.o -o out
horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp
race.o: race.cpp race.h horse.h
	g++ -g -c race.cpp
main.o: main.cpp horse.h race.h
	g++ -g -c main.cpp
run: out
	./out
clean: 
	rm *.o
	rm out
debug: out
	gdb out

