/********************************************************************************** 

**  Program Filename : mymenu.hpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1_menu function headerfile

** Input : ROW, and COLUMN MAX SIZE

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
int NumOfCritterInput(int x, int y);
#endif
