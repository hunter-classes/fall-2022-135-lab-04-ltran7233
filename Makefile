main: main.o box.o 
	g++ -o main main.o box.o 

main.o: main.cpp box.h 
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

#reverseorder.o: reverseorder.cpp reverseorder.h
	#g++ -c reverseorder.cpp

clean:
	rm -f main.o box.o

