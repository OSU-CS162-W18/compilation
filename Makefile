all: main

circle.o: circle.cpp circle.hpp
	g++ -c circle.cpp -o circle.o

square.o: square.cpp square.hpp
	g++ -c square.cpp -o square.o

main: main.cpp circle.o square.o
	g++ main.cpp circle.o square.o -o main

clean:
	rm -f main circle.o square.o
