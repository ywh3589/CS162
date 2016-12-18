/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: April. 3rd. 2016

** Description: CS162 ModuleA_Critter simulator

** Input : grid size(rows, columns)

** Output : A simulator in which a critter moves on the grid till it gets squashed.
************************************************************************************/

#include "critter.hpp"



int main()
{
    int a, b;

 /* Allowing an user to input valid size of rows and columns respectively */ 
    cout << "enter integer for rows of the grid" << endl;
    cin >> a;
	while( a <= 0 )
	{
		cout << " invalid size, enter integer for rows of the grid " << endl;
		cin >> a;
	}
    
	cout << "enter integer for columns of the grid" << endl;
    cin >> b;
	while( b <= 0 )
	{
		cout << " invalid size, enter integer for columns of the grid " << endl;
		cin >> b;
	}

    cin.get(); 


    Grid grid(a, b);					/* creating a grid */
    Critter critter(&grid);				/* creating a critter */

    critter.MoveCritter(&grid);			/* starting the simulation */


    return 0;
}
