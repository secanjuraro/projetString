test: test.o ClassString.o
	g++ -o test test.o ClassString.o

test.o: test.cpp ClassString.h
	g++ -o test.o -c test.cpp

ClassString.o: ClassString.cpp ClassString.h
	g++ -o ClassString.o -c ClassString.cpp

clean:
	rm test test.o ClassString.o
