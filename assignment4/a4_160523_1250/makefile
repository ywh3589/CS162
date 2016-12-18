
#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 21st. 2016

## Description: An makefile for CS162 assignment4

#************************************************************************************/



PROGS := a4

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o stadium.o medusa.o bluemen.o harrypotter.o babayaga.o barbarian.o creature.o dyncharstack.o dyncharqueue.o

SRCS = main.cpp stadium.cpp medusa.cpp bluemen.cpp harrypotter.cpp babayaga.cpp barbarian.cpp creature.cpp dyncharstack.cpp dyncharqueue.cpp

HEADERS = stadium.hpp medusa.hpp bluemen.hpp harrypotter.hpp babayaga.hpp barbarian.hpp creature.hpp dyncharstack.hpp dyncharqueue.hpp

a4: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o a4

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

