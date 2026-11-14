CXX = g++
CXXFLAGS = -Wall -Iinclude

all: demo

demo: Point.o Segment.o Triangle.o main.o
	$(CXX) $^ -o demo

Point.o: src/Point.cpp include/Point.h
	$(CXX) $(CXXFLAGS) -c $<

Segment.o: src/Segment.cpp include/Segment.h include/Point.h
	$(CXX) $(CXXFLAGS) -c $<

Triangle.o: src/Triangle.cpp include/Triangle.h include/Segment.h include/Point.h
	$(CXX) $(CXXFLAGS) -c $<

main.o: main.cpp include/Point.h include/Segment.h include/Triangle.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o demo