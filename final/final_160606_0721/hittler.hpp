/********************************************************************************** 

**  Program Filename : hittler.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef hittler_HPP
#define hittler_HPP
#include "creature.hpp"
#include "valkyrie.hpp"
class Hittler: public Creature
{
    public:
        Hittler();
        virtual int attack();
        virtual void defense(int a);

};

#endif
