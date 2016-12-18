/********************************************************************************** 

**  Program Filename : critter.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output : A simulating program in which as many as critters(user input) can move on the grid.
************************************************************************************/
#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"



class Critter
{
    private:
        int oldX;
        int oldY;
        int x_pos;
        int y_pos;
    public:
       
       void SetOldX(int x);
       int GetOldX();
       void SetXpos(int x);
       int GetXpos();
       void SetOldY(int y);
       int GetOldY();
       void SetYpos(int y);
       int GetYpos();
       int CritterMove();

};

#endif
