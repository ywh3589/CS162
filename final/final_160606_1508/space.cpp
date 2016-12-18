/********************************************************************************** 

**  Program Filename : space.cpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/
#include "space.hpp"


/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetName(string name)
        {
            this->name = name;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
string Space::GetName()
        {
            return name;
        }

/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetNext(Space* p)
        {
            next = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetNext()
        {
            return next;
        }

/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetPrev(Space* p)
        {
            prev = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetPrev()
        {
            return prev;
        }

/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetUnder(Space* p)
        {
            underground = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetUnder()
        {
            return underground;
        }


