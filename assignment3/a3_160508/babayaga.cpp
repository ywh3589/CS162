/********************************************************************************** 

**  Program Filename : babayaga.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/


#include "babayaga.hpp"
/********************************************************************* 
** Function : Baba_Yaga Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/
#if 1
Baba_Yaga::Baba_Yaga()
{// setting each creatures own features in its constructor
    SetStrength(12);
    SetName("Baba Yaga");
    SetArmor(3);
    
 //gyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Baba_Yaga made" << endl;
}

#endif

/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int Baba_Yaga::attack()
{  
//attack process; rolling dice and returning that number as an attack point.
    int att = 0;
    int extraSp = 0;
    for(int i = 0; i < 2; i++)
     {
        att += rand() % 6 + 1;
     }
        extraSp += att / 3; //baba yaga has its own feature called "SOUL"
    cout << endl <<" Baba Yaga attack" << " " << att << endl;
    strength += extraSp;
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
void Baba_Yaga::defense(int a)
{    
//attack process; rolling dice and returning that number as an attack point    
    int def = 0;
    int tempSt = strength;

    cout << "Baba yaga defense ";
    for(int i = 0; i < 2; i++)
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

