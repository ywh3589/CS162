#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: April. 16th. 2016

## Description: An makefile for CS162 moduleB

#************************************************************************************/



PROGS := ModC

all: ${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o ant.o critter.o mymenu.o

SRCS = main.cpp grid.cpp ant.cpp critter.cpp mymenu.cpp

HEADERS = grid.hpp critter.hpp ant.hpp mymenu.hpp


ModC: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o ModC

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

