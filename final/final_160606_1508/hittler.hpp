/********************************************************************************** 

**  Program Filename : hittler.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Final Project

** Input : creature names and features.

** Output : a valkyrie project 
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
