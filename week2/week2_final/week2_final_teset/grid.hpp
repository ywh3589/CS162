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
        Critter *cCritter;
        char **grid;
        int rows;
        int columns;
        int numOfCritters;
    public:
        Grid(int a, int b, int c);
        ~Grid();
        Critter*** MakeGrid();
        void ResetGrid(Critter ***p);
        char** MakeShowGrid();
        void ResetShowGrid(char **p);
        void StartPosition();
        void Move();
        void ShowGrid();
        int ValidMoveCheck(int x, int y);
        int ValidStartCheck(int x, int y);
};

#endif
