#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"
#include <cstdlib>
#include <ctime>


class Critter
{
    private:
        int countMove;
        int XCoord;     //initial xcoord
        int YCoord;     //initial ycoord
        int moveStep;  // the user input
        int antHeading; /* people pic 1: up
                                      2: right 
                                      3: down 
                                      4: left
                        */
     //  int currentColor; // current color                 
    public:
        Critter(Grid *pGrid);
        void MoveCritter(Grid *pGrid);
        void StartPoint(Grid *pGrid);
        int AntHeadDecide();
        int ValidMoveCheck(Grid *pGrid, int x, int y, int c, char **p);
};
#endif
