CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = q5.o ctext.o
TARGET = q5


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q5.o: q5.cpp stack.hpp ctext.h
	$(CXX) $(CXXFLAGS) q5.cpp
ctext.o: ctext.h
	$(CXX) $(CXXFLAGS) ctext.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
