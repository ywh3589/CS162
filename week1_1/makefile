CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o grid.o critter.o

SRCS = main.cpp grid.cpp critter.cpp

HEADERS = grid.hpp critter.hpp


moduleA: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o moduleA

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

