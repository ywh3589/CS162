/********************************************************************************** 

**  Program Filename : critter.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :   A simulating program in which a critter moves on the grid making another critter after moving 3 times
************************************************************************************/
#ifndef CRITTER_HPP
#define CRITTER_HPP

#include <cstdlib>
#include <ctime>
#include <unistd.h>


class Critter
{
    private:

    protected:
        int oldX;
        int oldY;
        int x_pos;
        int y_pos;
     //   int counnt;
    public:
       
       void SetOldX(int x);
       int GetOldX();
       void SetXpos(int x);
       int GetXpos();
       void SetOldY(int y);
       int GetOldY();
       void SetYpos(int y);
       int GetYpos();
     //  void SetCount();
     //  int GetCount();
       int CritterMove(int n);

};

#endif
