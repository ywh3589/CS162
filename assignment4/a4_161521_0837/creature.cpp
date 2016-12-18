/********************************************************************************** 

**  Program Filename : creature.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature kinds and features

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#include "creature.hpp"
/********************************************************************* 
** Function : SetName
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
void Creature::SetName(string n)
{
    name = n;

}
/********************************************************************* 
** Function : GetName
** Description : returning the name of the fight
** Parameters : n/a
** Pre-Conditions : SetName
** Post-Conditions : this function returns the value of name variable.
*********************************************************************/
string Creature::GetName()
{

    return name;

}
/********************************************************************* 
** Function : SetStrength
** Description : setting the strength points of the fight to strength variable
** Parameters : int strength(strength points of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the strength points of fight to strength variable
*********************************************************************/
void Creature::SetStrength(int s)
{
    strength = s;

}
/********************************************************************* 
** Function : GetStrength
** Description : returning the strength points of the fighter
** Parameters : n/a
** Pre-Conditions : SetStrength
** Post-Conditions : this function returns the value of strength variable.
*********************************************************************/
int Creature::GetStrength()
{

    return strength;

}
/********************************************************************* 
** Function : SetArmor
** Description : setting the armor value of the fighter to armor variable
** Parameters : int armor(armor valuie of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the armor value of the fighter to armor variable
*********************************************************************/
void Creature::SetArmor(int a)
{
    armor = a;

}
/********************************************************************* 
** Function : GetArmor
** Description : returning the armor value of the fight
** Parameters : n/a
** Pre-Conditions : SetArmor
** Post-Conditions : this function returns the value of armor variable.
*********************************************************************/
int Creature::GetArmor()
{

    return armor;

}

