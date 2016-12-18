#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 10th. 2016

## Description: An makefile for CS162 module4

#************************************************************************************/



PROGS := fibo

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = FiboMain.o FibonacciR.o FibonacciNR.o

SRCS = FiboMain.cpp FibonacciR.cpp FibonacciNR.cpp

HEADERS = FibonacciR.h FibonacciNR.h

##HEADERS = mymenu.hpp


fibo: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o fibo

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

