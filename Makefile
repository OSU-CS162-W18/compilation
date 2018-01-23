all: main

main: main.cpp circle.cpp square.cpp circle.hpp square.hpp
	g++ main.cpp circle.cpp square.cpp -o main

clean:
	rm -f main
