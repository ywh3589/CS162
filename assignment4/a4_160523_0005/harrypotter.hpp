/********************************************************************************** 

**  Program Filename : harrypotter.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef harrypotter_HPP
#define harrypotter_HPP
#include "creature.hpp"
#include "stadium.hpp"
class Harry_Potter: public Creature
{
    public:
        Harry_Potter();
        virtual int attack();
        virtual void defense(int a);

};

#endif
