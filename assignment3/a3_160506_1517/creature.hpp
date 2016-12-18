#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <iostream>
//#include <ctime>
//#include <cstlib>
#include "barbarian.hpp"

using namespace std;

class Creature{
    protected:
        int attackPower;
        int strength;
        int armor;
    public:
       // Creature(int s, int a);
        void setAttackPower(int a);
                
      
       virtual void attack()=0;

};

#endif
