/********************************************************************************** 

**  Program Filename : grid.hpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/


#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include <unistd.h>
using namespace std;

class Grid
{
    private:
        char **grid; // grid making pointer
        char **colorGrid;  //grid storing color
        char **printGrid;  //grid for print out
        int rows;   
        int columns;


    public:
        Grid(int x, int y);
        
		void SetRows(int x);
        int GetRows();
        void SetColumns(int y);
        int GetColumns();

        char **MakeGrid();
        void ResetGrid(char **p);
        void ShowGrid(char **p);
        char** UpdateLocation(int x, int y);
        void Delete(char **p);



        #if 1
        char** ColorChange(int x, int y);

        char** FinalUpdate(int x, int y);

        //void BackToWhite(int x, int y);
        //void BackToBlack(int x, int y);
        #endif



};

#endif
