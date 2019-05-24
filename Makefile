all:*.cpp 
	g++ *.cpp -o exe
clean:
	rm -f *.o main

run:
	./exe