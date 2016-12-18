/********************************************************************************** 

**  Program Filename : critter.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/
#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"



class Critter
{
    private:

    protected:
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
