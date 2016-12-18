/********************************************************************************** 

**  Program Filename : babayaga.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/


#ifndef BABAYAGA_HPP
#define BABAYAGA_HPP
#include "creature.hpp"
#include "stadium.hpp"

class Baba_Yaga: public Creature
{
    public:
        Baba_Yaga();
        virtual int attack();
        virtual void defense(int a);

};

#endif
