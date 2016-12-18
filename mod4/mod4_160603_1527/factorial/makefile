#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 10th. 2016

## Description: An makefile for CS162 module4

#************************************************************************************/



PROGS := facto

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = Factorial.o

SRCS = Factorial.cpp

#HEADERS = state.hpp dyncharqueue.hpp

##HEADERS = mymenu.hpp


facto: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o facto -O3

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

