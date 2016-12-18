/********************************************************************************** 

**  Program Filename : ant.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times
************************************************************************************/


#include "ant.hpp"


/********************************************************************* 
** Function : SetCount
** Description : setting the count of each ant's step
** Parameters : int x (the count )
** Pre-Conditions : none
** Post-Conditions : setting the new count to count variable. 
*********************************************************************/    
void Ant::SetCount(int x)
{
    count = x;
}
/********************************************************************* 
** Function : GetCount
** Description : getting the number of count
** Parameters : none
** Pre-Conditions : SeCount
** Post-Conditions : returning the number of counts for each ant.
*********************************************************************/    
int Ant::GetCount()
{
    return count;
}
/********************************************************************* 
** Function : Breed
** Description : if count hits 3 then it lets ant breed another ant.
** Parameters : int c (count)
** Pre-Conditions :  SetCount and GetCount function
** Post-Conditions : returning whether it is time to breed another ant.
*********************************************************************/    
int Ant::Breed(int c)
{
    int a = c % 3;
    if( a  == 0)
        return 1;
    else
        return 0;

}




