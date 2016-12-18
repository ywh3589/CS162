#include "grid.hpp"
/********************************************************************* 
** Function : Grid Constructor
** Description : A constructor for a Grid class
** Parameters : int x, int y (size of rows and columns)
** Pre-Conditions : getting the size of rows and columns from the user
** Post-Conditions : making a grid where a critter would move on,
                     and print out the grid made
*********************************************************************/
Grid::Grid(int x, int y)
{
    SetRows(x);
    SetColumns(y);

    grid = MakeGrid();
    ResetGrid(grid); 
   
    cout << endl << endl;
    cout << "The grid made" << endl; 
    ShowGrid(grid);
   
    cout << endl; 
}


/********************************************************************* 
** Function : SetRows
** Description : setting the size of rows input by the user to "rows" variable
** Parameters : int x (size of rows )
** Pre-Conditions : getting the size of rows and columns from the user
** Post-Conditions : setting the size of rows input by the user to x
*********************************************************************/
void Grid::SetRows(int x)
{
    rows = x;
}

/********************************************************************* 
** Function : GetRows
** Description : returning the size of rows
** Parameters : n/a
** Pre-Conditions : SetRows function
** Post-Conditions : this function returns "rows" variable
*********************************************************************/
int Grid::GetRows()
{
    return rows;
}

/********************************************************************* 
** Function : SetColumns
** Description : setting the size of columns input by the user to "columns" variable
** Parameters : int y (size of columns)
** Pre-Conditions : getting the size of rows and columns from the user
** Post-Conditions : setting the size of columns input by the user to y
*********************************************************************/
void Grid::SetColumns(int y)
{
    columns = y;
}

/********************************************************************* 
** Function : GetColumns
** Description : returning the size of columns
** Parameters : n/a
** Pre-Conditions : SetColumns function
** Post-Conditions : this function returns "columns" variable
*********************************************************************/
int Grid::GetColumns()
{
    return columns;
}

/********************************************************************* 
** Function : MakeGrid
** Description : making a new grid
** Parameters : n/a
** Pre-Conditions : SetRows, SetColumns function
** Post-Conditions : this function returns a pointer variable pointing an address newly assigned 2D array.
*********************************************************************/
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
/********************************************************************* 
** Function : ResetGrid
** Description : setting every elements of a new grid to ' '
** Parameters : a pointer variable pointinting an address of the assigned 2D array
** Pre-Conditions : MakeGrid function
** Post-Conditions : this function sets every elements of the 2D array to ' '.
*********************************************************************/
void Grid::ResetGrid(char **p, int x, int y)
{
#if 0
    for(int a = 0; a < rows; a++)
    {
        for(int b = 0; b < columns; b++)
            {
                p[a][b] = ' ';
            }
    
    }
#endif

    p[x][y] = ' ';



}
/********************************************************************* 
** Function : ShowGrid
** Description : printing a grid
** Parameters :  a pointer variable pointinting an address of the assigned 2D array to print out
** Pre-Conditions : MakeGrid, ResetGrid function (sometimes UpdateLocation function)
** Post-Conditions : this function prints out the grid newly made or upgraded.
*********************************************************************/
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

/********************************************************************* 
** Function : UpdateLocation
** Description : updating a new position for a critter
** Parameters : the size of grid
** Pre-Conditions : MakeGrid, ResetGrid, MoveCritter function
** Post-Conditions : this function changes '' to 'C' where the critter is newly located and returns a pointer variable which points the 2D array grid.*********************************************************************/
char** Grid::UpdateLocation(int x, int y)
{
    grid[x][y] = '*';

    

    return grid;
}

/********************************************************************* 
** Function : Delete
** Description : deleting a grid 
** Parameters : a pointer variable indicating a already-made grid
** Pre-Conditions : MakeGrid function
** Post-Conditions : this function deallocates the grid made to prevent memory leak.
*********************************************************************/
void Grid::Delete(char **p)
{
    for(int i = 0; i < rows; i++) 
        delete(grid[i]);

    delete(grid);
}


/********************************************************************* 
** Function : Changing the color of specific element
** Description : changing the color of the grid
** Parameters : a positon(X coord, Y coord)
** Pre-Conditions : MakeGrid function
** Post-Conditions : this function changes the color of the grid.
*********************************************************************/
void Grid::ColorChange(int x, int y)
{
    
    
    if(grid[x][y] == 32)
        grid[x][y] = '#';
    else if( grid[x][y] == '#' )
        grid[x][y] = ' ';
}













