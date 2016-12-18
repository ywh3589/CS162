/********************************************************************************** 

**  Program Filename : medusa.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "creature.hpp"
#include "stadium.hpp"
class Medusa: public Creature
{
    public:
        Medusa();
        virtual int attack();
        virtual void defense(int a);

};

#endif
