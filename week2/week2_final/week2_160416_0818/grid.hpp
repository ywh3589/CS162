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
       // Critter *cCritter;
        //char **showGrid;
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
        //void ResetExtraGrid(char **p);
        void ResetShowGrid(char **p);
        void ResetTempGrid(char **p);
        void StartPosition();
        void UpdateLocation(int n);
        void ShowGrid();
        int ValidMoveCheck(int x, int y);
        int ValidStartCheck(int x, int y);

        
       void SetRows(int r);
       int GetRows();
       void SetColumns(int c);
       int GetColumns();



};

#endif
