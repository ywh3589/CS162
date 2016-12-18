/********************************************************************************** 

**  Program Filename : creature.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature kinds and features

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#include "entrance.hpp"
/********************************************************************* 
** Function : SetName
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
Entrance::Entrance()
{
    SetName("Entrance");

}
/********************************************************************* 
** Function : SetName
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
** Function : GetName
** Description : returning the name of the fight
** Parameters : n/a
** Pre-Conditions : SetName
** Post-Conditions : this function returns the value of name variable.
*********************************************************************/
int Entrance::GetWeapon()
{

    return weapon;

}
/********************************************************************* 
** Function : SetStrength
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
** Function : GetStrength
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
** Function : SetStrength
** Description : setting the strength points of the fight to strength variable
** Parameters : int strength(strength points of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the strength points of fight to strength variable
*********************************************************************/
void Entrance::Action(Creature* p)
{
    int ammo = this->GetAmmo();
    int wea = this->GetWeapon();
    p->SetAmmo(ammo);
    p->SetWeapon(wea);

}
