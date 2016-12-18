/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/

#include "ant.hpp"
#include "mymenu.hpp" 

int main()
{
    int a = RowInput();
   
    int b = ColumnInput();

    Grid grid(a, b);					/* creating a grid */
    Ant ant(&grid);				/* creating a critter */

    ant.MoveAnt(&grid);			/* starting the simulation */


    return 0;
}
