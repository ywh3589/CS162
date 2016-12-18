/********************************************************************************** 

**  Program Filename : mymenu.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB_menu function source file

** Input : grid size(rows, columns), number of critters, number of steps

** Output : A simulating program which undecided number of critters move for undecided steps on undecided grid.
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
** Function : NumOfCritterInput()
** Description : A function validating the input value for number of critters to be made
** Parameters : grid size.
** Pre-Conditions : the size of the grid from the user
** Post-Conditions : inputing and validating the number of critters to be made
*********************************************************************/
int NumOfCritterInput(int x, int y)
{
    int rows = x;
    int columns = y;
    
    int numOfCritters;
    cout << "enter integer for the numbers of critters" << endl;
    cin >> numOfCritters;
    
    while((cin.fail()) || numOfCritters <= 0 || columns < 0)
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


/********************************************************************* 
** Function : NumOfStepsInput()
** Description : A function validating the input value for steps of critters to be made
** Parameters : none
** Pre-Conditions : none
** Post-Conditions : inputing and validating the steps of critters to be made
*********************************************************************/
int NumOfStepsInput()
{
   int moves; 
   cout << "input how many times would you like critters to move? " << endl;
   cin >> moves;

    
    while((cin.fail()) || moves <= 0)
    {
        cin.clear();
        cin.ignore(100000,'\n');
        cout << "invalid! enter integer for steps" << endl;
        cin >> moves;
    }



    return moves;
}

