#include "grid.hpp"

Grid::Grid(int x, int y)
{
    SetRows(x);
    SetColumns(y);

    grid = MakeGrid();
    ResetGrid(grid); 
   
    cout << endl << endl;
    cout << "The grid made" << endl; 
    ShowGrid(grid);
  //  sleep(2);
  //  system("clear");
    
    cout << endl; 
}




void Grid::SetRows(int x)
{
    rows = x;
}

int Grid::GetRows()
{
    return rows;
}

void Grid::SetColumns(int y)
{
    columns = y;
}

int Grid::GetColumns()
{
    return columns;
}

char** Grid::MakeGrid()
{
    grid = new char*[rows];
    for(int i = 0; i < rows; i++)
    {
        grid[i] = new char[columns];
    }
    
    ResetGrid(grid);

    return grid;
}

void Grid::ResetGrid(char** p)
{

    for(int a = 0; a < rows; a++)
    {
        for(int b = 0; b < columns; b++)
            {
                p[a][b] = ' ';
            }
    
    }

}

void Grid::ShowGrid(char **p)
{
    for(int a = 0; a < rows + 2; a++)
        cout << "#";
    cout << endl;

    for(int i = 0; i < rows; i++)
      {
            cout << "|";

            for(int j = 0; j < columns; j++)
                {
                   cout << p[i][j];
                }   
   
            cout << "|" << endl;
   
   }
    
    for(int a = 0; a < rows + 2; a++)
        cout << "#";
    cout << endl;
}

char** Grid::UpdateLocation(int x, int y)
{
    grid[x][y] = 'C';

    return grid;
}


void Grid::Delete(char** p)
{
    for(int i = 0; i < rows; i++) 
        delete(grid[i]);

    delete(grid);
}















