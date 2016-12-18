/********************************************************************************** 

**  Program Filename : grid.cpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/

#include "grid.hpp"
/********************************************************************* 
** Function : Grid Constructor
** Description : A constructor for a Grid class
** Parameters : int x, int y (size of rows and columns)
** Pre-Conditions : getting the size of rows and columns from the user
** Post-Conditions : making three grids; the first one is whre an ant would move on,
                                     and the second one is where the color information will be store,
									 and the third one is the grid to be used to display.
                     and print out the grid made
*********************************************************************/
Grid::Grid(int x, int y)
{
    SetRows(x);
    SetColumns(y);

    grid = MakeGrid();
    colorGrid = MakeGrid();
    printGrid = MakeGrid();

    ResetGrid(grid); 
    ResetGrid(colorGrid);
    ResetGrid(printGrid);

    cout << endl << endl;
    cout << "The grid made" << endl; 
    ShowGrid(grid);
    

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
void Grid::ResetGrid(char **p)
{
#if 1
    for(int a = 0; a < rows; a++)
    {
        for(int b = 0; b < columns; b++)
            {
                p[a][b] = ' ';
            }
    
    }
#endif

    



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
** Description : updating a new position for a ant
** Parameters : the size of grid
** Pre-Conditions : MakeGrid, ResetGrid, MoveAnt function
** Post-Conditions : this function changes '' to '*' where the ant is newly located and returns a pointer variable which points the 2D array grid.*********************************************************************/
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
** Function : ColorChange
** Description : changing the color of the grid
** Parameters : a positon(X coord, Y coord)
** Pre-Conditions : MakeGrid function
** Post-Conditions : this function changes the color of the grid.
*********************************************************************/
char** Grid::ColorChange(int x, int y)
{
    
    
    if(colorGrid[x][y] == ' ')
        colorGrid[x][y] = '#';
    else if( colorGrid[x][y] == '#' )
        colorGrid[x][y] = ' ';

    return colorGrid;
}

/********************************************************************* 
** Function : FinalUpdate
** Description : setting the last position of the ant to copied color grid to display the ant.
** Parameters : a positon(X coord, Y coord)
** Pre-Conditions : MakeGrid function
** Post-Conditions : this function update the last position of the ant to the color grid.
*********************************************************************/
char** Grid::FinalUpdate(int x, int y)
{
    
    for(int i = 0; i < rows; i ++)
    {
        for(int j = 0; j < columns; j++)
        {
            printGrid[i][j] = colorGrid[i][j];
        
        }
    
    
    }
    
    printGrid[x][y] = '*';

    

    return printGrid;
}






