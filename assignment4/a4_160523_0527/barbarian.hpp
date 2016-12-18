/********************************************************************************** 

**  Program Filename : barbarian.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/


#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "creature.hpp"
#include "stadium.hpp"
class Barbarian: public Creature
{
    public:
        Barbarian();
        virtual int attack();
        virtual void defense(int a);

};

#endif
