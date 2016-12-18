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
    else if(n == 4)
    SetName("UnderGround");

}
/********************************************************************* 
** Function : SetName
** Description : setting a name to name variable
** Parameters : string name(name of the creature)
** Pre-Conditions : Stadium constructor, ShowMenu(), FighterChoose()
** Post-Conditions : setting the name of fight to name variable
*********************************************************************/
void Room::SetWeapon(int w)
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
int Room::GetWeapon()
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
void Room::SetAmmo(int a)
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
int Room::GetAmmo()
{

    return ammunition;

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
int Room::Action(Creature *p)
{
    

    int n = this->GetNum();
    if(n == 1)
    {
        //SSS agent room
        
        return 5;
    }
    else if(n == 2)
    {
        // dog room
        return 6;

    
    }


    else if(n == 3)
    {
        int choose;
        // hittler's room
        cout << "now colonel is just right at the infront of the door, this is the last chance to go back or fight with Hittler" << endl;
    
    cout << "Do you want to fight? "<< endl;

    cout << "1. Yes" << endl;
    cout << "2. No " << endl;

    cin >> choose;

    while(cin.fail() || ((choose != 1) && (choose != 2)))     //validating process
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

    if(choose == 1)
    return 3;
    else if(choose == 2)
    return 4;
    }
    
    else if(n == 4)
    {
        // underground's room
        /*earns weapon and ammunition*/
        int ammo = this->GetAmmo();
        int wea = this->GetWeapon();
        p->SetAmmo(ammo);
        p->SetWeapon(wea);
    }
    //fihgt
}
