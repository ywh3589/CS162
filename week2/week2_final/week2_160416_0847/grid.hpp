/********************************************************************************** 

**  Program Filename : grid.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output : A simulating program in which as many as critters(user input) can move on the grid.
************************************************************************************/

#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include "critter.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;


class Critter;

class Grid
{
    private:
        Critter ***pCritter;
        char **tempGrid;
        char **grid;
        int rows;
        int columns;
        int numOfCritters;
        int moves;
    public:
        Grid(int a, int b, int c);
        ~Grid();
        Critter*** MakeGrid();
        void ResetGrid(Critter ***p);
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
