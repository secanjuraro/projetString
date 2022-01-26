test: string_tests.o ClassString.o
	g++ -o test string_tests.o ClassString.o

string_tests.o: string_tests.cpp ClassString.h
	g++ -o string_tests.o -c string_tests.cpp

ClassString.o: ClassString.cpp ClassString.h
	g++ -o ClassString.o -c ClassString.cpp

clean:
	rm test string_tests.o ClassString.o