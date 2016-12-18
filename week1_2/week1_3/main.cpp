/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: April. 3rd. 2016

** Description: CS162 ModuleA_Critter simulator

** Input : grid size(rows, columns)

** Output : A simulator in which a critter moves on the grid till it gets squashed.
************************************************************************************/

#include "critter.hpp"
#include "mymenu.hpp" 

int main()
{
    int a = RowInput();
    int b = ColumnInput();

//    InputMenu();

    Grid grid(a, b);					/* creating a grid */
    Critter critter(&grid);				/* creating a critter */

    critter.MoveCritter(&grid);			/* starting the simulation */


    return 0;
}
