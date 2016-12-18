#ifndef CRITTER_HPP
#define CRITTER_HPP

#include "grid.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class Grid;

class Critter
{
    private:
        int moveCount;
        int XCoord;
        int YCoord;
        Grid *pgrid;
    public:
        Critter();
        void moveCritter();
        Grid* getGrid();  
};



#endif
