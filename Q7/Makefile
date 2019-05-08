CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = q7.o
TARGET = q7


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q7.o: q7.cpp
	$(CXX) $(CXXFLAGS) q7.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
