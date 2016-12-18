#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>

class Grid
{
    private:
        char **grid;
        int rows;
        int columns;
        // friend class Critter;
    public:
        Grid(int x, int y);//이렇게 사이즈를 인자로 받아서 constructor에서 2d array를 만들자.
        ~Grid();
        void setRows(int x);
        int getRows();
        void setColumns(int y);
        int getColumns();
        void setGrid(char** p);
        char** getGrid();



        void showGrid();
        void updateLocation(int x, int y);
        
};







#endif
