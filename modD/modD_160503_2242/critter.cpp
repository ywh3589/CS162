/********************************************************************************** 

**  Program Filename : critter.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times
************************************************************************************/

#include "critter.hpp"
Critter::Critter()
{
   // cout << "base class made" << endl;
}
/********************************************************************* 
** Function : SetOldX
** Description : setting the x position of old position(before movement) of a critter
** Parameters : int x (the x coordinate )
** Pre-Conditions : the x position of critter before movement.
** Post-Conditions : setting the old x position to the parameter x
*********************************************************************/
void Critter::SetOldX(int x)
{
  //  cout << "set" << endl;
   oldX = x;
}

/********************************************************************* 
** Function : GetOldX
** Description : returning the position of x
** Parameters : n/a
** Pre-Conditions : SetOldX function
** Post-Conditions : this function returns old X position which is the x coordinate before the movement of a critter 
*********************************************************************/      
int Critter::GetOldX()
{
    return oldX;
}

/********************************************************************* 
** Function : SetXpos
** Description : setting the x position of new position(after movement) of a critter
** Parameters : int x (the new x coordinate )
** Pre-Conditions : the x position of critter after movement.
** Post-Conditions : setting the new x position to the parameter x
*********************************************************************/       
void Critter::SetXpos(int x)
{
   x_pos = x;
}


/********************************************************************* 
** Function : GetXpos
** Description : returning the position of x
** Parameters : n/a
** Pre-Conditions : SetXpos function
** Post-Conditions : this function returns new X position which is the x coordinate after the movement of a critter 
*********************************************************************/       
int Critter::GetXpos()
{
    return x_pos;
}


/********************************************************************* 
** Function : SetOldY
** Description : setting the y position of old position(before movement) of a critter
** Parameters : int y (the y coordinate )
** Pre-Conditions : the y position of critter before movement.
** Post-Conditions : setting the old y position to the parameter y
*********************************************************************/
void Critter::SetOldY(int y)
{
   oldY = y;
}

/********************************************************************* 
** Function : GetOldY
** Description : returning the position of y
** Parameters : n/a
** Pre-Conditions : SetOldY function
** Post-Conditions : this function returns old Y position which is the y coordinate before the movement of a critter 
*********************************************************************/
int Critter::GetOldY()
{
    return oldY;
}

/********************************************************************* 
** Function : SetYpos
** Description : setting the y position of new position(after movement) of a critter
** Parameters : int y (the new y coordinate )
** Pre-Conditions : the y position of critter after movement.
** Post-Conditions : setting the new y position to the parameter y
*********************************************************************/    
void Critter::SetYpos(int y)
{
    y_pos = y;
}

/********************************************************************* 
** Function : GetYpos
** Description : returning the position of y
** Parameters : n/a
** Pre-Conditions : SetYpos function
** Post-Conditions : this function returns new Y position which is the y coordinate after the movement of a critter 
*********************************************************************/    
int Critter::GetYpos()
{
    return y_pos;
}

/********************************************************************* 
** Function : SetYpos
** Description : setting the y position of new position(after movement) of a critter
** Parameters : int y (the new y coordinate )
** Pre-Conditions : the y position of critter after movement.
** Post-Conditions : setting the new y position to the parameter y
*********************************************************************/    
#if 0
void Critter::SetCount(int x)
{
    count = x;
}

/********************************************************************* 
** Function : GetYpos
** Description : returning the position of y
** Parameters : n/a
** Pre-Conditions : SetYpos function
** Post-Conditions : this function returns new Y position which is the y coordinate after the movement of a critter 
*********************************************************************/    
int Critter::GetCount()
{
    return count;
}

#endif



/********************************************************************* 
** Function : CritterMove
** Description : decides randomly which way to move for crriter(s)
** Parameters : n/a
** Pre-Conditions : GetOldX(), GetOldY(), InitialPositionSet()
** Post-Conditions : this function returns flag integer for 4 different movements. 
*********************************************************************/    
int Critter::CritterMove(int r)
{
    int direction_flag;
    direction_flag = r;
        


       int x = GetOldX();
       int y = GetOldY();
        
      

      
      if(direction_flag == 0)
      {   
          SetOldX(x);
          SetXpos(x + 1);
          SetYpos(y);                    
                                  
          return 0;
      }                   
      else if(direction_flag == 1)
      {
          
          SetOldX(x);
          SetXpos(x - 1);
          SetYpos(y);
          
          return 1;
      }
      else if(direction_flag == 2)
      {
                 
          SetOldY(y);
          SetYpos(y+1);
          SetXpos(x);
          
          return 2;
      }
      else
      {
           SetOldY(y);
           SetYpos(y-1);
           SetXpos(x);
           
           return 3;
  
      }

              
}

  
    







