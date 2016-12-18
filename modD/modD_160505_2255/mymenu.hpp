/********************************************************************************** 

**  Program Filename : mymenu.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC_menu function headerfile

** Input : ROW, and COLUMN MAX SIZE, Number of critters, Number of steps

** Output : A validating functions for the user input vales. 
************************************************************************************/
#ifndef MY_MENU
#define MY_MENU

#include <iostream>
#include <string>

using namespace std;
#define ROW_MAX 1000
#define COLUMN_MAX 1000


int RowInput();
int ColumnInput();
int NumOfAntsInput(int x, int y);
int NumOfDoodleBugsInput(int x, int y, int a);
int NumOfStepsInput();
#endif
