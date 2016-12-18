/********************************************************************************** 

**  Program Filename : hittlerdog.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 FinalProject

** Input : creature names and features.

** Output : a valkyrie simulation 
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
