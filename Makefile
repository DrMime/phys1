CXX = g++
CXXFLAGS = -g -Wall -std=c++11

OBJS = body.o vect.o

all: sim

sim: $(OBJS) sim.cpp
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) sim.cpp

body.o: body.h body.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c body.cpp

vect.o: vect.h vect.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c vect.cpp

