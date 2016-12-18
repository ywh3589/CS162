#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include "critter.hpp"

using namespace std;

class Grid
{
    private:
        char **grid;
        int rows;
        int columns;
      //  Critter **pcritter;
    public:
        Grid(int rows, int columns);

       // Criter **critter;
};

#endif
