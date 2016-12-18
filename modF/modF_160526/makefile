#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 10th. 2016

## Description: An makefile for CS162 moduleE

#************************************************************************************/



PROGS := me

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o state.o

SRCS = main.cpp state.cpp

HEADERS = state.hpp

##HEADERS = mymenu.hpp


me: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o me

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

