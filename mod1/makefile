#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: April. 29th. 2016

## Description: An makefile for CS162 module1

#************************************************************************************/



PROGS := Mod1

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o mymenu.o

SRCS = main.cpp mymenu.cpp

HEADERS = mymenu.hpp


Mod1: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o Mod1

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

