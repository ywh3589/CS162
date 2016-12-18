#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 6th. 2016

## Description: An makefile for CS162 moduleD

#************************************************************************************/



PROGS := ModD

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o ant.o critter.o mymenu.o doodlebug.o

SRCS = main.cpp grid.cpp ant.cpp critter.cpp mymenu.cpp doodlebug.cpp

HEADERS = grid.hpp critter.hpp ant.hpp mymenu.hpp doodlebug.hpp


ModD: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o ModD

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

