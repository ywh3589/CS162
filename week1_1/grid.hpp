#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
using namespace std;

class Grid
{
    private:
        char **grid;
        int rows;
        int columns;

    public:
        Grid(int x, int y);
        void SetRows(int x);
        int GetRows();
        void SetColumns(int y);
        int GetColumns();

        char** UpdateLocation(int x, int y);
        char **MakeGrid();
        void ShowGrid(char **p);
        void ResetGrid(char **p);
        void Delete(char **p);
};

#endif
