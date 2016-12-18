/********************************************************************************** 

**  Program Filename : bluemen.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#ifndef bluemen_HPP
#define bluemen_HPP
#include "creature.hpp"
#include "stadium.hpp"
class Blue_men: public Creature
{
    public:
        Blue_men();
       virtual int attack();
        virtual void defense(int a);

};

#endif
