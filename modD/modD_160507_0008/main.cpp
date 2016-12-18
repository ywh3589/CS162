/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: May. 6th. 2016

** Description: CS162 ModD

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which ants and doodlebugs fight on the grid.
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
