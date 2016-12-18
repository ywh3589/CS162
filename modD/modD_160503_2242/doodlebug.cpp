/********************************************************************************** 

**  Program Filename : ant.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times
************************************************************************************/


#include "doodlebug.hpp"

/********************************************************************* 
** Function : DoodleBug constructor
** Description : construcing DoodleBug object
** Parameters : int c (the count )
** Pre-Conditions : none
** Post-Conditions : A DoodleBug object is constructed 
*********************************************************************/    
DoodleBug::DoodleBug(int c)
{
    count = c;
  //cout << "doodlebug object made" << endl;

}

/********************************************************************* 
** Function : SetCount
** Description : setting the count of each ant's step
** Parameters : int x (the count )
** Pre-Conditions : none
** Post-Conditions : setting the new count to count variable. 
*********************************************************************/    
void DoodleBug::SetCount(int x)
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
int DoodleBug::GetCount()
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
DoodleBug* DoodleBug::Breed()
{
//printf("[%s:%d]\n",__FILE__,__LINE__);
    int c = this->GetCount();
    cout << "doodle bug c " << c << endl;
  int a = c % 8;
  cout << "doodle bug a" << a << endl;
    if( ( c>=3 ) && (a == 0))
    {
//printf("[%s:%d]\n",__FILE__,__LINE__);
        pDoodle = new DoodleBug(0);
//printf("[%s:%d]\n",__FILE__,__LINE__);
        return pDoodle;
//printf("[%s:%d]\n",__FILE__,__LINE__);
    }
    else 
     {
//printf("[%s:%d]\n",__FILE__,__LINE__);
        return NULL;
//printf("[%s:%d]\n",__FILE__,__LINE__);
    }
}

#endif
