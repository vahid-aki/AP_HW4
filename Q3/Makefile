CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = q3.o shape.o twodimensionalshape.o threedimensionalshape.o circle.o square.o sphere.o cube.o point.o
TARGET = q3


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q3.o: q3.cpp
	$(CXX) $(CXXFLAGS) q3.cpp
shape.o: shape.cpp shape.h
	$(CXX) $(CXXFLAGS) shape.cpp
twodimensionalshape.o: twodimensionalshape.cpp twodimensionalshape.h
	$(CXX) $(CXXFLAGS) twodimensionalshape.cpp
threedimensionalshape.o: threedimensionalshape.cpp threedimensionalshape.h
	$(CXX) $(CXXFLAGS) threedimensionalshape.cpp
circle.o: circle.cpp circle.h
	$(CXX) $(CXXFLAGS) circle.cpp
square.o: square.cpp square.h
	$(CXX) $(CXXFLAGS) square.cpp
sphere.o: sphere.cpp sphere.h
	$(CXX) $(CXXFLAGS) sphere.cpp
cube.o: cube.cpp cube.h
	$(CXX) $(CXXFLAGS) cube.cpp
point.o: point.cpp point.h
	$(CXX) $(CXXFLAGS) point.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
