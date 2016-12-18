/********************************************************************************** 

**  Program Filename : bluemen.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#include "bluemen.hpp"

/********************************************************************* 
** Function : Blue_men Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/
Blue_men::Blue_men()
{// setting each creatures own features in its constructor
    SetStrength(12);
    SetName("Blue men");
    SetArmor(3);
    
 //gyyyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Blue_men made" << endl;
}


/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int Blue_men::attack()
{  
//attack process; rolling dice and returning that number as an attack point.
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 10 + 1;
    
    cout << endl <<" Blue men attack" << " " << att << endl;
    return att;

}
#endif


/********************************************************************* 
** Function : defense
** Description : fighter's defense function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : creature defenses and cocerning the damage calculate the strength points newly  
*********************************************************************/
#if 1
void Blue_men::defense(int a)
{
    int def = 0;
    int tempSt = strength;
    cout << "Blue_men defense ";

    /*Blue men has a feature called Mob. For every 4 points of damage they lose one defese dies.
     * for example when they reach strength of 8 then they only have 2d6 for defense. */
    if( (strength > 8)&&(strength <= 12))
    {
    
         for(int i = 0; i < 3; i++) //having 3d6 as a defense
          def += rand() % 6 + 1;
        
         cout << def << endl;
         tempSt -= a - def - armor;
         
        if(tempSt >= strength)
        {
            cout << this->GetName() << " damage is 0" << endl;
            strength = strength;
        }
        else if(tempSt < strength)
        {
            cout << this->GetName() << " damage is " << a-def-armor<< endl;
            strength = tempSt;
        }

    
    }
    else if( (strength > 4)&&(strength <= 8)) //having 2d6 as a defense
    {
    
         for(int i = 0; i < 2; i++)
          def += rand() % 6 + 1;
        
         cout << def << endl;
         tempSt -= a - def - armor;
         
        if(tempSt >= strength)
        {
            cout << this->GetName() << " damage is 0" << endl;
            strength = strength;
        }
        else if(tempSt < strength)
        {
            cout << this->GetName() << " damage is " << a-def-armor<< endl;
            strength = tempSt;
        }
    
    }
    else if( (strength > 0)&&(strength <= 4)) //having 1d6 as a defense
    {
    
          def = rand() % 6 + 1;
        
         cout << def << endl;
         tempSt -= a - def - armor;
         
         if(tempSt >= strength)
         {
             cout << this->GetName() << " damage is 0" << endl;
             strength = strength;
         }
         else if(tempSt < strength)
         {
             cout << this->GetName() << " damage is " << a-def-armor<< endl;
             strength = tempSt;
         }
    
    }
    
    

}
#endif
