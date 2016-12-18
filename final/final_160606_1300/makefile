
#********************************************************************************** 

##  Program Filename : makefile

##	Author: Woohyuk Yang

##  Date: May. 21st. 2016

## Description: An makefile for CS162 final project

#************************************************************************************/



PROGS := val

all:${PROGS}
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o valkyrie.o creature.o stauffenberg.o hittlerdog.o sssagent.o hittler.o space.o room.o entrance.o lobby.o dyncharqueue.o

SRCS = main.cpp valkyrie.cpp creature.cpp stauffenberg.cpp hittlerdog.cpp sssagent.cpp hittler.cpp space.cpp room.cpp entrance.cpp lobby.cpp dyncharqueue.cpp

HEADERS = valkyrie.hpp creature.hpp stauffenberg.hpp hittlerdog.hpp sssagent.hpp hittler.hpp space.hpp room.hpp entrance.hpp lobby.hpp dyncharqueue.hpp

val: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o val

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

