
#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 6th. 2016

## Description: An makefile for CS162 moduleE

#************************************************************************************/



PROGS := a3

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o stadium.o medusa.o bluemen.o harrypotter.o babayaga.o barbarian.o creature.o

SRCS = main.cpp stadium.cpp medusa.cpp bluemen.cpp harrypotter.cpp babayaga.cpp barbarian.cpp creature.cpp

HEADERS = stadium.hpp medusa.hpp bluemen.hpp harrypotter.hpp babayaga.hpp barbarian.hpp creature.hpp

a3: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o a3

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

