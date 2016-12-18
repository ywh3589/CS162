/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times.
************************************************************************************/

#include "grid.hpp"
#include "mymenu.hpp"

int main()
{
   int r = RowInput();
   int c = ColumnInput();
   int n = NumOfAntsInput(r,c);
   int d = NumOfDoodleBugsInput(r,c,n);
   int m = NumOfStepsInput();

    Grid grid(r, c, n, d);
    

    grid.InitialPositionSet();

    grid.PlayStart(m);
 

    return 0;
}
