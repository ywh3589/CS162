/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which as many as critters(user input) can move on the grid.
************************************************************************************/

#include "grid.hpp"
#include "mymenu.hpp"

int main()
{
   int r = RowInput();
   int c = ColumnInput();
   int n = NumOfCritterInput(r,c);
   int m = NumOfStepsInput();

    Grid grid(r, c, n);
    

    grid.InitialPositionSet();

    grid.PlayStart(m);
 

    return 0;
}
