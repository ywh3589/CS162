/********************************************************************************** 

**  Program Filename : creature.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Final Project

** Input : creature kinds and features

** Output : a simulation for codename "Valkyrie" 
************************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>

using namespace std;

class Creature{
    protected:
        string name;
        int physicalStrength;
        int mentalStrength;
        /*container*/
        int weapon;
        int ammunition;
        int armor;
        int lifeChance; 
    public:
       void SetName(string name);
       string GetName();      
       void SetPhysical(int physical);
       int GetPhysical();       
       void SetMental(int mental);
       int GetMental();       
       void SetWeapon(int weapon);
       int GetWeapon();       
       void SetAmmo(int ammunition);
       int GetAmmo();       
       void SetArmor(int armor);
       int GetArmor();       
       void SetLifeChance(int life);
       int GetLifeChance();

      // void WinnerRecover(); // restoring some percentage of the damage when the winner gets back to the queue.

       virtual int attack()=0;
       virtual void defense(int a)=0;

};

#endif
