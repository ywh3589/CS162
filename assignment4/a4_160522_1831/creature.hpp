/********************************************************************************** 

**  Program Filename : creature.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature kinds and features

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Creature{
    protected:
        string name;
        int strength;
        int armor;
        
    public:
       void SetName(string name);
       string GetName();      
       void SetStrength(int strength);
       int GetStrength();       
       void SetArmor(int armor);
       int GetArmor();       
       
       virtual void SetLifeChance(int life);
       virtual int GetLifeChance();

       virtual int attack()=0;
       virtual void defense(int a)=0;
};

#endif
