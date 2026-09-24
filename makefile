out: horse.o main.o
	g++ -g horse.o main.o -o out
horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp
main.o: main.cpp horse.h
	g++ -g -c main.cpp
run: out
	./out
clean: 
	rm *.o
	rm out
debug: out
	gdb out

