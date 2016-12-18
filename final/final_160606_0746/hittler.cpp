/********************************************************************************** 

**  Program Filename : hittler.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#include "hittler.hpp"

/********************************************************************* 
** Function : Hittler Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/
Hittler::Hittler()
{// setting each creatures own features in its constructor
    SetPhysical(40);
    SetName("Adolf Hittler");
    SetArmor(5);
    
 //gyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Hittler made" << endl;
}

/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int Hittler::attack()
{  
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 20 + 1;
    
    cout << endl <<" Hittler attack" << " " << att << endl;
    
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
void Hittler::defense(int a)
{
    int def = 0;
    int tempSt = GetPhysical();
    cout << "Hittler defense ";
     def += rand() % 10 + 1;
   
    cout << def << endl;
    tempSt -= a - def - armor;
    
    if(tempSt >= physicalStrength)
    {
        cout << this->GetName() << " damage is 0" << endl;
        physicalStrength = physicalStrength;
    }
    else if(tempSt < physicalStrength)
    {
        cout << this->GetName() << " damage is " << a-def-armor<< endl;
        physicalStrength = tempSt;
    }


    
}
#endif

