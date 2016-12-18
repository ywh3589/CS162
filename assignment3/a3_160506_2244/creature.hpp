#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <iostream>
#include <ctime>
//#include <cstlib>
//#include "barbarian.hpp"
//#include "stadium.hpp"

using namespace std;

class Creature{
    protected:
        int attackPower;
        int strength;
        int armor;
    public:
       // Creature(int s, int a);
        void setAttackPower(int a);
       void SetStrength(int s);
       int GetStrength();       
       virtual void ShowName()=0; 
       virtual int attack()=0;
       virtual void defense(int a)=0;
};

#endif
