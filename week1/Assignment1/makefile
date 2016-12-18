#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: April. 10th. 2016

## Description: An makefile for CS162 Assignment1

#************************************************************************************/








PROGS := Assignment1

all: ${PROGS}

CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o ant.o mymenu.o

SRCS = main.cpp grid.cpp ant.cpp mymenu.cpp

HEADERS = grid.hpp ant.hpp mymenu.hpp


Assignment1: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o Assignment1

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

