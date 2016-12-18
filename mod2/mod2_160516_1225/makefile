#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 13th. 2016

## Description: An makefile for CS162 module2

#************************************************************************************/



PROGS := Mod2

all: ${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o dyncharstack.o dyncharqueue.o

SRCS = main.cpp dyncharstack.cpp dyncharqueue.cpp 

HEADERS = dyncharstack.hpp dyncharqueue.hpp

Mod2: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o Mod2

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

