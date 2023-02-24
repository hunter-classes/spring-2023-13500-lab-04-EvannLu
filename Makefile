main: main.o shapes.o
	g++ -o main main.o shapes.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

box.o: shapes.cpp funcs.h
	g++ -c shapes.cpp

clean:
	rm -f main main.o funcs.o shapes.o