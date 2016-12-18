/********************************************************************************** 

**  Program Filename : creature.cpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature kinds and features

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#include "room.hpp"
/********************************************************************* 
** Function : SetName
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
Room::Room(int num)
{
    SetNum(num);
    int n = GetNum();
    if(n == 1)
    SetName("SSS agent room");
    else if( n ==2)
    SetName("Hittler's dog room");
    else if(n == 3)
    SetName("Hittler's room");

}
/********************************************************************* 
** Function : SetName
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
void Room::SetNum(int num)
{
    roomNum = num;

}
/********************************************************************* 
** Function : GetName
** Description : returning the name of the fight
** Parameters : n/a
** Pre-Conditions : SetName
** Post-Conditions : this function returns the value of name variable.
*********************************************************************/
int Room::GetNum()
{

    return roomNum;

}
/********************************************************************* 
** Function : SetStrength
** Description : setting the strength points of the fight to strength variable
** Parameters : int strength(strength points of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the strength points of fight to strength variable
*********************************************************************/
int Room::Action(Creature *)
{
    int n = this->GetNum();
    if(n == 1)
    {
        //SSS agent room
        return 0;
    }
    else if(n == 2)
    {
        // dog room
        return 0;

    
    }


    else if(n == 3)
    {
        // hittler's room
    }
    //fihgt
}
