/********************************************************************************** 

**  Program Filename : medusa.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#include "medusa.hpp"
/********************************************************************* 
** Function : Medusa Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/

Medusa::Medusa()
{
// setting each creatures own features in its constructor
    
    SetStrength(10);
    SetName("Medusa");
    SetArmor(3);
    
 //gyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Medusa made" << endl;
}



/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int Medusa::attack()
{ 
//attack process; rolling dice and returning that number as an attack point.
    int att = 0;
   
    for(int i = 0 ; i <2; i++)
   att += rand() % 6 + 1;
/* medusa has its own skill called Glare and it makes the opponent a stone and medusa wins. when she rolls 12 as an attack point */   
              if(att == 12)
              {
                  cout << "medusa rolled 12, " << endl;
                  cout << "medusa made the enconter a stone" << endl;
                  return 1000;
              }

            else 
              {
                 cout << " medusa attack" << " " << att << endl;
                 return att;
             }  



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
void Medusa::defense(int a)
{
    
//deYYfenYYing process
    int def = 0;
    int tempSt = strength;

    cout << "Medusa defense ";
     def += rand() % 6 + 1;
    
    cout << def << endl;
    tempSt -= a - def - armor;

//if defense point(diffense dice roll + armor) is bigger than attack points inflicted by the oponent,
//then the defense succeeded and there is no strength points change. 
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

#endif
