/********************************************************************************** 

**  Program Filename : barbarian.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/


#ifndef HITTLERDOG_HPP
#define HITTLERDOG_HPP
#include "creature.hpp"
#include "valkyrie.hpp"
class HittlerDog: public Creature
{
    public:
        HittlerDog();
        virtual int attack();
        virtual void defense(int a);

};

#endif
