/********************************************************************************** 

**  Program Filename : grid.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/

#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include "ant.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;


class Critter;

class Grid
{
    private:
        //Critter ***pCritter;
        Ant ***pAnt;
        char **tempGrid;
        char **grid;
        int rows;
        int columns;
        int numOfCritters;
        int moves;
    public:
        Grid(int a, int b, int c);
        ~Grid();
        Ant ***MakeGrid();
        void ResetGrid(Ant ***p);
        void SetGrid(int x, int y);
        char** MakeTempGrid();
        char ** MakeShowGrid();
        void ResetShowGrid(char **p);
        void ResetTempGrid(char **p);
        void InitialPositionSet();
        void PlayStart(int n);
        void ShowGrid();
        int ValidMoveCheck(int x, int y);
        int ValidStartCheck(int x, int y);

        



};

#endif
