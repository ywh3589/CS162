/********************************************************************************** 

**  Program Filename : critter.hpp

**	Author: Woohyuk Yang

**  Date: May. 6th. 2016

** Description: CS162 ModD

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which ants and doodlebugs fight on the grid.
************************************************************************************/
#ifndef CRITTER_HPP
#define CRITTER_HPP

#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iostream>

using namespace std;

class Critter
{
    private:

    protected:
        int oldX;
        int oldY;
        int x_pos;
        int y_pos;
        int count;
        int starveCount;
    public:
       void SetOldX(int x);
       int GetOldX();
       void SetXpos(int x);
       int GetXpos();
       void SetOldY(int y);
       int GetOldY();
       void SetYpos(int y);
       int GetYpos();
       virtual void SetCount(int x)=0;
       virtual int GetCount()=0;
      // virtual void SetStarveCount(int x)=0;
      // virtual int GetStarveCount()=0;
       int CritterMove(int n);
       virtual Critter* Breed()=0;
       virtual Critter* Eat()=0;

};

#endif
