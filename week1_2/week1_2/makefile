PROGS := moduleA

all: ${PROGS}

CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o critter.o mymenu.o

SRCS = main.cpp grid.cpp critter.cpp mymenu.cpp

HEADERS = grid.hpp critter.hpp mymenu.hpp


moduleA: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o moduleA

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -f ${PROGS} *.o *~

