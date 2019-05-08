CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = q6.o
TARGET = q6


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q6.o: q6.cpp
	$(CXX) $(CXXFLAGS) q6.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
