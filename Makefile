CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: labexe

labexe: main.o transaction.o
	$(CXX) main.o transaction.o -o labexe

main.o: main.cpp transaction.h
	$(CXX) $(CXXFLAGS) -c main.cpp

transaction.o: transaction.cpp transaction.h
	$(CXX) $(CXXFLAGS) -c transaction.cpp

clean:
	rm -f *.o *.gch labexe