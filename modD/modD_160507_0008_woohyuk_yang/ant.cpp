/********************************************************************************** 

**  Program Filename : ant.cpp

**	Author: Woohyuk Yang

**  Date: May. 6th. 2016

** Description: CS162 ModD

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output : A simulating program in which ants and doodlebugs fight on the grid.
************************************************************************************/


#include "ant.hpp"

/********************************************************************* 
** Function : Ant constructor
** Description : setting the count of each ant's object
** Parameters : int x (the count )
** Pre-Conditions : none
** Post-Conditions : making an ant object setting the new count to count variable. 
*********************************************************************/    
Ant::Ant(int x)
{
    count = x;

}



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
#if 1
Ant* Ant::Breed()
{

int c = this->GetCount();
int a = c % 3;
    if( (c >=3) &&( a == 0) )
    {
        ptAnt = new Ant(0);
        return ptAnt;
    }
    else
    {
         return NULL;
    }

}

#endif
/********************************************************************* 
** Function : Eat
** Description : it exists but not used for ants.
** Parameters : none
** Pre-Conditions :  ant constructor.
** Post-Conditions : not used for ant
*********************************************************************/    
Ant* Ant::Eat()
{
    return this;
}




