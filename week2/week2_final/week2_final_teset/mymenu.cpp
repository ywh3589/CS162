/********************************************************************************** 

**  Program Filename : mymenu.cpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1_menu function source file

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/
#include "mymenu.hpp"

/********************************************************************* 
** Function : RowInput()
** Description : A function validating the input value for row size
** Parameters : none
** Pre-Conditions : getting the size of rows from the user
** Post-Conditions : validating the row size input by the user is available.
*********************************************************************/
int RowInput()
{
    int row_size;
    cout << "enter integer for rows of the grid" << endl;
    cin >> row_size;
     while((cin.fail()) || row_size == 0 || row_size < 0)
    {
        cin.clear();
        cin.ignore(100000,'\n');
        cout << "invalid! enter integer for rows of the grid" << endl;
      cin >> row_size;
    }
    while( row_size > ROW_MAX )
    {
         cout << "too big value, make it at most " << ROW_MAX  << endl;
        cin >> row_size;
    }

    return row_size;
}
/********************************************************************* 
** Function : ColumnInput()
** Description : A function validating the input value for column size
** Parameters : none
** Pre-Conditions : getting the size of columns from the user
** Post-Conditions : validating the column size input by the user is available.
*********************************************************************/
int ColumnInput()
{
    int column_size;
    cout << "enter integer for columns of the grid" << endl;
    cin >> column_size;
    
    while((cin.fail()) || column_size == 0 || column_size < 0)
    {
        cin.clear();
        cin.ignore(100000,'\n');
        cout << "invalid! enter integer for columns of the grid" << endl;
        cin >> column_size;
    }
    while( column_size > COLUMN_MAX )
    {
         cout << "too big value, make it at most " << COLUMN_MAX  << endl;
         cin >> column_size;
    }

    return column_size;
}


/********************************************************************* 
** Function : ColumnInput()
** Description : A function validating the input value for column size
** Parameters : none
** Pre-Conditions : getting the size of columns from the user
** Post-Conditions : validating the column size input by the user is available.
*********************************************************************/
int NumOfCritterInput(int x, int y)
{
    int rows = x;
    int columns = y;
    
    int numOfCritters;
    cout << "enter integer for the numbers of critters" << endl;
    cin >> numOfCritters;
    
    while((cin.fail()) || numOfCritters == 0 || columns < 0)
    {
        cin.clear();
        cin.ignore(100000,'\n');
        cout << "invalid! enter integer for the number of critters" << endl;
        cin >> numOfCritters;
    }
    while( numOfCritters > rows * columns )
    {
         cout << "too big value, make it at most " << rows * columns << endl;
         cin >> numOfCritters;
    }

    return numOfCritters;
}
