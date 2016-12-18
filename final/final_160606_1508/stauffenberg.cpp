/********************************************************************************** 

**  Program Filename : stauffenberg.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Final Project

** Input : creature names and features.

** Output : a valkyrie simulation
************************************************************************************/
#include "stauffenberg.hpp"

/********************************************************************* 
** Function : Stauffenberg Constructor
** Description : A constructor for a medusa class
** Parameters : none
** Pre-Conditions : creature name, strength points, armor valule, some functions for randomly rolling dice
** Post-Conditions : setting some values to medusa object. 
*********************************************************************/
Stauffenberg::Stauffenberg()
{// setting each creatures own features in its constructor
    SetPhysical(25);
    SetMental(25);
    SetWeapon(1);
    SetAmmo(20);
    SetName("Colonel Stauffenberg");
    SetArmor(10);
    
    SetLifeChance(1); //colonelhas another chance to fight again. when he revives this variable is set to be 0 and that's harry's last chacne.
 
 //gyetting ready to roll dices randomly
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Stauffenberg made" << endl;
}

/********************************************************************* 
** Function : attack
** Description : fighter's attack function
** Parameters : none
** Pre-Conditions : creature's constructor
** Post-Conditions : returns attack points 
*********************************************************************/
#if 1
int Stauffenberg::attack()
{  
    int att = 0;
    int ammo = GetAmmo();
    int weap = GetWeapon();


    for(int i = 0; i < 2; i++)
    {
        att += rand() % ammo + weap;
        ammo = ammo - 1;
        SetAmmo(ammo);
    }

    
    cout << endl <<"colonel attack" << " " << att << endl;
    
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
void Stauffenberg::defense(int a)
{
    int def = 0;
    int tempSt = physicalStrength;
    cout << "colonel defense ";
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

/*colonel has another chance to fight again. when he revives this variable is set to be 0 and that's colonel's last chacne.
 
 *below logic deals with that */
    int life = GetLifeChance();

    if(physicalStrength <= 0)
    {
        if(life == 1)
        {
            cout << "colonel's another chance" << endl;
           // sleep(5);
            physicalStrength = 20;
            SetLifeChance(0);
        }
        else if(life == 0)
        {
            cout << "this was colonel's last chance" << endl;
        }

        
    }

    
}
#endif

