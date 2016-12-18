/********************************************************************************** 

**  Program Filename : doodlebug.cpp

**	Author: Woohyuk Yang

**  Date: May. 6th. 2016

** Description: CS162 ModD

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
    SetStarveCount(0);
  cout << "doodlebug object made" << GetStarveCount() << endl;

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
** Function : SetCount
** Description : setting the count of each ant's step
** Parameters : int x (the count )
** Pre-Conditions : none
** Post-Conditions : setting the new count to count variable. 
*********************************************************************/    
void DoodleBug::SetStarveCount(int x)
{
   starveCount = x;
}
/********************************************************************* 
** Function : GetCount
** Description : getting the number of count
** Parameters : none
** Pre-Conditions : SeCount
** Post-Conditions : returning the number of counts for each ant.
*********************************************************************/    
int DoodleBug::GetStarveCount()
{
   //starveCount = 1;
   // SetStarveCount(1);
  //  cout << "get starve count " << GetCount() << endl;
    return starveCount;
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
    int c = this->GetCount();
  int a = c % 8;
    if( ( c>=8 ) && (a == 0))
    {
        pDoodle = new DoodleBug(0);
        return pDoodle;
    }
    else 
     {
        return NULL;
    }
}

#endif

/********************************************************************* 
** Function : Eat
** Description : if Doodlebugs move where an ant exits then it eats the ant.
** Parameters : none
** Pre-Conditions :  Doodlebug constructor
** Post-Conditions : eats ant and move the doodlebug where the ant has gone.
*********************************************************************/    
DoodleBug* DoodleBug::Eat()
{
    cout << endl <<"DoodleBug eats an ant" << endl;    
    SetStarveCount(0); 
    return this;
}

/********************************************************************* 
** Function : Starve
** Description : if the starve count one doodlebug hits 3 then the doodle bugs die of starvation.
** Parameters : none
** Pre-Conditions :  SetStarveCount and GetStarveCount function
** Post-Conditions : returning NULL if the doodlebug dies or returns itself.
*********************************************************************/    
DoodleBug* DoodleBug::Starve()
{
    int a = this->GetStarveCount();

    if(a > 3)
    {
     cout << endl <<  "Doodlebug died" << endl;
     return NULL;
    }
    else
        return this;
}
