matrix: main.o matrix.o
	g++ main.o matrix.o -o matrix

main.o: main.cpp matrix.h
	g++ -c main.cpp

matrix.o: matrix.cpp matrix.h
	g++ -c matrix.cpp

clean: 
	rm -f *.o matrix

leakcheck: matrix
	valgrind --leak-check=yes ./matrix

run: matrix
	./matrix
