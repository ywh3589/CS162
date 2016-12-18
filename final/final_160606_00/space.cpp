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
void Space::SetBackDoor(Space* p)
        {
            backDoor = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetBackDoor()
        {
            return backDoor;
        }
/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetEntrance(Space* p)
        {
            goToEntrance = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetEntrance()
        {
            return goToEntrance;
        }
/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetLobby(Space* p)
        {
            goToLobby = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetLobby()
        {
            return goToLobby;
        }
/********************************************************************* 
** Function : SetNext
** Description : setting a pointer variable to class Space to "next" poiter variable
** Parameters : Space* p
** Pre-Conditions : Space Constructor
** Post-Conditions : setting a pointer variable to "next" pointer variable
*********************************************************************/
void Space::SetOutside(Space* p)
        {
            goToOutside = p;
        }
/********************************************************************* 
** Function : GetNext
** Description : returning the address of next pointer variable is pointing to
** Parameters : n/a
** Pre-Conditions : SetNext
** Post-Conditions : this function returns value(address) stored in next. 
*********************************************************************/      
Space* Space::GetOutside()
        {
            return goToOutside;
        }
