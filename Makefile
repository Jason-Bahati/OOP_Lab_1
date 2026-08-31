CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: lab

lab: main.o transaction.o account.o ledger.o
	$(CXX) main.o transaction.o account.o ledger.o -o lab

main.o: main.cpp transaction.h account.h
	$(CXX) $(CXXFLAGS) -c main.cpp

transaction.o: transaction.cpp transaction.h
	$(CXX) $(CXXFLAGS) -c transaction.cpp

account.o: account.cpp account.h
	$(CXX) $(CXXFLAGS) -c account.cpp

ledger.o: ledger.cpp ledger.h
	$(CXX) $(CXXFLAGS) -c ledger.cpp

clean:
	rm -f *.o *.gch lab