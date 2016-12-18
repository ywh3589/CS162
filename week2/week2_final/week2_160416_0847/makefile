#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: April. 16th. 2016

## Description: An makefile for CS162 moduleB

#************************************************************************************/



PROGS := ModB

all: ${PROGS}

CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o critter.o mymenu.o

SRCS = main.cpp grid.cpp critter.cpp mymenu.cpp

HEADERS = grid.hpp critter.hpp mymenu.hpp


ModB: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o ModB

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

