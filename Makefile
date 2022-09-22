CXXFLAGS=-Wall -Wpedantic

main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o

main.o: main.cpp box.h checkerboard.h cross.h lower.h upper.h trapezoid.h checkerboard3x3.h
	g++ $(CXXFLAGS) -c main.cpp

box.o: box.cpp box.h 
	g++ $(CXXFLAGS) -c box.cpp 

checkerboard.o: checkerboard.cpp checkerboard.h 
	g++ $(CXXFLAGS) -c checkerboard.cpp

cross.o: cross.cpp cross.h
	g++ $(CXXFLAGS) -c cross.cpp
	
lower.o: lower.cpp lower.h
	g++ $(CXXFLAGS) -c lower.cpp
	
upper.o: upper.cpp upper.h
	g++ $(CXXFLAGS) -c upper.cpp

trapezoid.o: trapezoid.cpp trapezoid.h
	g++ $(CXXFLAGS) -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ $(CXXFLAGS) -c checkerboard3x3.cpp

clean:
	rm -f main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o

