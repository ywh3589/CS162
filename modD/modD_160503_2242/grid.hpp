/********************************************************************************** 

**  Program Filename : grid.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/

#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
//#include "critter.hpp"
#include "ant.hpp"
#include "doodlebug.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;


class Critter;
class Ant;


class Grid
{
    private:
        Critter ***pCritter;
        //Ant ***pAnt;
        char **tempGrid;
        char **grid;
        
        int rows;
        int columns;
        int numOfAnt;
        int numOfDoodleBug;
        int moves;
        
        friend class Ant;
        friend class Criter;
    public:
        Grid(int a, int b, int c, int d);
        ~Grid();
        Critter ***MakeGrid();
        void ResetGrid(Critter ***p);
        void SetGrid(int x, int y);
        char** MakeTempGrid();
        char ** MakeShowGrid();
        void ResetShowGrid(char **p);
        void ResetTempGrid(char **p);
         void InitialPositionSet();
        void PlayStart(int n);
        void ShowGrid(char **p);
       int ValidMoveCheck(int x, int y);
        int ValidStartCheck(int x, int y);

        



};

#endif
