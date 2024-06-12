# Makefile
CXX = g++
CXXFLAGS = -Wall -O2
BUILD_SYSTEM = build_system

SRC = main.cpp parser.cpp compiler.cpp
OBJ = $(SRC:.cpp=.o)

all: $(BUILD_SYSTEM)

$(BUILD_SYSTEM): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(BUILD_SYSTEM)
