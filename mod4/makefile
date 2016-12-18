#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 10th. 2016

## Description: An makefile for CS162 module3

#************************************************************************************/



PROGS := mod3

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o state.o dyncharqueue.o

SRCS = main.cpp state.cpp dyncharqueue.cpp

HEADERS = state.hpp dyncharqueue.hpp

##HEADERS = mymenu.hpp


mod3: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o mod3

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

