/********************************************************************************** 

**  Program Filename : ant.hpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/

#ifndef ANT_HPP
#define ANT_HPP
#include "grid.hpp"
#include <cstdlib>
#include <ctime>


class Ant
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
    public:
        Ant(Grid *pGrid);
        void MoveAnt(Grid *pGrid);
        void StartPoint(Grid *pGrid);
        int AntHeadDecide();
        int ValidMoveCheck(Grid *pGrid, int x, int y, int c, char **p);
        int InputMoveStep();


};
#endif
