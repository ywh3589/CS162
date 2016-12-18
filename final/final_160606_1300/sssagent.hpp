/********************************************************************************** 

**  Program Filename : sssagent.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef sssagent_HPP
#define sssagent_HPP
#include "creature.hpp"
#include "valkyrie.hpp"
class SSS_Agent: public Creature
{
    public:
        SSS_Agent();
        virtual int attack();
        virtual void defense(int a);

};

#endif
