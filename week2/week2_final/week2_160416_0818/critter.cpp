#include "critter.hpp"

void Critter::SetOldX(int x)
{
   oldX = x;
}
       
int Critter::GetOldX()
{
    return oldX;
}
       
void Critter::SetXpos(int x)
{
   x_pos = x;
}
       
int Critter::GetXpos()
{
    return x_pos;
}
void Critter::SetOldY(int y)
{
   oldY = y;
}
int Critter::GetOldY()
{
    return oldY;
}
void Critter::SetYpos(int y)
{
    y_pos = y;
}
int Critter::GetYpos()
{
    return y_pos;
}

int Critter::CritterMove()
{

        int a;
        
        unsigned seed;
        seed = time(0);
        srand(seed);


       int x = GetOldX();
       int y = GetOldY();
     //  int x_pos = GetXpos();
     //  int y_pos = GetYpos();
        
      

     int direction_flag = rand() % 4;
      
     // cout << "critter mvoe " << endl; 
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

  

