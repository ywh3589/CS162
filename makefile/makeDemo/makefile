CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = -lboost_date_time

OBJS = main.o grid_1.o critter_1.o

SRCS = main.cpp grid_1.cpp critter_1.cpp

HEADERS = grid.hpp critter.hpp

#target: dependencies
#	rule to build
#

moduleA: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o moduleA

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

