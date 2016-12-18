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
#if 0
/********************************************************************* 
** Function : GetTop
** Description : returning the address of variable top. Returning the address of the top, further reference is available.
** Parameters : none
** Pre-Conditions : DynCharStack constructor
** Post-Conditions : returning the addresss of pointer variable top.
*********************************************************************/
StackNode * DynCharStack::GetTop()
{
    return top;
}
#endif
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
** Function : LoserAdd
** Description : adding a character who lost the fight.
** Parameters : Creature * 
** Pre-Conditions : DynCharStack constructor
** Post-Conditions : adding losers to the stack.
*********************************************************************/
void DynCharStack::LoserAdd(Creature * pLoser)
{
    if(top == NULL)
	top = new StackNode(pLoser);
	else
	top = new StackNode(pLoser, top);

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

