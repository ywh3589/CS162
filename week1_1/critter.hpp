#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"
#include <cstdlib>
#include <ctime>


class Critter
{
    private:
        int countMove;
        int XCoord;
        int YCoord;
    public:
        Critter(Grid *pGrid);
        void MoveCritter(Grid *pGrid);

        void SetCountMove(int x);
        void SetXCoord(int x);
        void SetYCoord(int x);
        int GetCountMove();
        int GetXCoord();
        int GetYCoord();

};
#endif
