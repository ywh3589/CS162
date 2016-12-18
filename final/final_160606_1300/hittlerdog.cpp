/********************************************************************************** 

**  Program Filename : barbarian.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#include "hittlerdog.hpp"

/********************************************************************* 
** Function : HittlerDog Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/

HittlerDog::HittlerDog()
{// setting each creatures own features in its constructor
    SetPhysical(10);
    SetName("HittlerDog");
    SetArmor(0);
 
 //gyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "hittler dog made" << endl;
}

/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int HittlerDog::attack()
{  
//attack process; rolling dice and returning that number as an attack point.
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
   
    cout << endl <<" Hittler's dog attack" << " " << att << endl;
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
void HittlerDog::defense(int a)
{
//deYYfenYYing process
    int def = 0;
    int tempSt = GetPhysical();

    cout << "HittlerDog defense ";
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    
    cout << def << endl;
    tempSt -= a - def - armor;
    

}
#endif
