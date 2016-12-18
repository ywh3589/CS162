#include "grid.hpp"

Grid::Grid(int x, int y)
{
    setRows(x);
    setColumns(y);
    
    int r = getRows();
    int c = getColumns();

    char **grid;
    grid = new char*[r];

    for(int n = 0; n < r; n++)
    {
        grid[n] = new char[c];
    }
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            grid[i][j] = 'd';
        }
    }


#if 0
   // int r = getRows();
   // int c = getColumns();
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
           std::cout << grid[i][j];
        }
    
           std::cout << std::endl;
    }
#endif
}


    
#if 0
    int r = getRows();
    int c = getColumns();
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
           std::cout << grid[i][j];
        }
    
           std::cout << std::endl;
    }
#endif

Grid::~Grid()
{
    int r = getRows();

  for(int i = 0; i < r; i++)
    {
        delete[] grid[i];
       // delete[] grid;
        
    }
    delete[] grid;
}

#if 0
std::cout << "showGrid before" << std::endl;
         showGrid();
#endif


void Grid::setRows(int x)
{
    rows = x;
}

int Grid::getRows()
{
    return rows;
}


void Grid::setColumns(int y)
{
    columns = y;
}

int Grid::getColumns()
{
    return columns;
}

void Grid::setGrid(char** p)
{
    grid = p;
}

char** Grid::getGrid()
{
    return grid;
}


void Grid::showGrid()
{
    setGrid(grid);
    char** grid = getGrid();
   std::cout << "1" << std::endl; 
    
    int r = getRows();
    int c = getColumns();
  
   std::cout << grid[1][1] << std::endl;   
   // Grid grid_1(r, c);

   std::cout << "1" << std::endl; 
   for(int a = 0; a < r; a++)
    {
        for(int b = 0; b < c; b++)
        {
           std::cout << grid[a][b];
        }
    
           std::cout << std::endl;
    }
#if 0
    for(int i = 0; i < r; i++)
    {   
        std::cout << r << std::endl;
        for(int j = 0; j < c; j++)
        {
           std::cout << grid[i][j];
            
        std::cout << "showGrid_j" << std::endl;
        }
    
    std::cout << "showGrid_I" << std::endl;
           std::cout << std::endl;
  
  }
#endif

}


#if 1
void Grid::updateLocation(int x, int y)
{
    int r = getRows();
    int c = getColumns();
    
    
    grid[x][y] = 'C';
    
}
#endif
