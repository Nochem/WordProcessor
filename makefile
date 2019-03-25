CXX = g++
CC  = $(CXX)
CPPFLAGS =  -std=c++11
CXXFLAGS =  -O2 -Wall -Wextra -pedantic-errors -Wold-style-cast
TARGET = prog

main: main.cc Node.cc Parser.cc Container.cc


all: $(TARGET)


clean:
	rm -f *.o *.h.gch *.exe