#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: April. 23th. 2016

## Description: An makefile for CS162 assignment2

#************************************************************************************/



PROGS := assignment2

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o List.o Item.o 

SRCS = main.cpp List.cpp 

HEADERS = List.hpp Item.hpp


assignment2: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o assignment2

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

