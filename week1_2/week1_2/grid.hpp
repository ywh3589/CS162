#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include <unistd.h>
using namespace std;

class Grid
{
    private:
        char **grid; // grid making pointer
        int rows;   
        int columns;


    public:
        Grid(int x, int y);
        
		void SetRows(int x);
        int GetRows();
        void SetColumns(int y);
        int GetColumns();

        char **MakeGrid();
        void ResetGrid(char **p, int x, int y);
        void ShowGrid(char **p);
        char** UpdateLocation(int x, int y);
        void Delete(char **p);



        #if 1
        void ColorChange(int x, int y);

        #endif



};

#endif
