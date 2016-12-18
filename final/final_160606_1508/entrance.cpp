/********************************************************************************** 

**  Program Filename : entrance.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Final Project

** Input : creature kinds and features

** Output : a valkyrie program
************************************************************************************/

#include "entrance.hpp"
/********************************************************************* 
** Function : Entrance Constructor
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
Entrance::Entrance()
{
    SetName("Entrance");
    SetWeapon(3);
    SetAmmo(20);

}
/********************************************************************* 
** Function : SetWeapon
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
void Entrance::SetWeapon(int w)
{
    weapon = w;

}
/********************************************************************* 
** Function : GetWeapon
** Description : returning the name of the fight
** Parameters : n/a
** Pre-Conditions : SetWeapon
** Post-Conditions : this function returns the value of name variable.
*********************************************************************/
int Entrance::GetWeapon()
{

    return weapon;

}
/********************************************************************* 
** Function : SetAmmo
** Description : setting the strength points of the fight to strength variable
** Parameters : int strength(strength points of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the strength points of fight to strength variable
*********************************************************************/
void Entrance::SetAmmo(int a)
{
   ammunition = a;

}
/********************************************************************* 
** Function : GetAmmo
** Description : returning the strength points of the fighter
** Parameters : n/a
** Pre-Conditions : SetStrength
** Post-Conditions : this function returns the value of strength variable.
*********************************************************************/
int Entrance::GetAmmo()
{

    return ammunition;

}
/********************************************************************* 
** Function : Actiton virtual function
** Description : setting the strength points of the fight to strength variable
** Parameters : int strength(strength points of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the strength points of fight to strength variable
*********************************************************************/
int Entrance::Action(Creature* p)
{
    int ammo = this->GetAmmo();
    int wea = this->GetWeapon();
    p->SetAmmo(ammo);
    p->SetWeapon(wea);
    return 0;
}
