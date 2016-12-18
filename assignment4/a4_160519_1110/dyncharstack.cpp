/********************************************************************************** 

**  Program Filename : dyncharstack.cpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 Mod2

** Input : 

** Output :  making a stack like structure
******************************************************************************/

#include <iostream>
#include "dyncharstack.hpp"

using namespace std;

/********************************************************************* 
** Function : Constructor
** Description : A constructor for a DynCharStack class
** Parameters : none
** Pre-Conditions : none
** Post-Conditions : setting pointer variable top(refering to the position to be newly added to NULL
*********************************************************************/
DynCharStack::DynCharStack()
{
    top = NULL;
}


/********************************************************************* 
** Function : add
** Description : adding a character to the stack like structure.
** Parameters : char 
** Pre-Conditions : DynCharStack constructor
** Post-Conditions : adding new character to the stack like structure.
*********************************************************************/
void DynCharStack::add(int n)
{
    if(top == NULL)
	top = new StackNode(n);
	else
	top = new StackNode(n, top);

}



/********************************************************************* 
** Function : remove
** Description : removing a character from already exisiting stack like structure.
** Parameters : none
** Pre-Conditions : stack -like structure.
** Post-Conditions : removing a chracter on the top of the stack like structure and return the character being removed.
*********************************************************************/
int DynCharStack::remove()
{
    StackNode *temp;

    if(top == NULL)
    {
        cout << "The stack is empty." << endl;
        return 0;
    }
    else
    {
        int n = top->value;
        temp = top;
        top = top->next;
        delete temp;    
        return n;
    }
}

