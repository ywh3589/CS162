/********************************************************************************** 

**  Program Filename : creature.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature kinds and features

** Output : a simulation for codename "Valkyrie" 
************************************************************************************/

#ifndef LOBBY_HPP
#define LOBBY_HPP
#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
#include "space.hpp"
#include "creature.hpp"

using namespace std;

class Creature;

class Lobby : public Space
{
    protected:
        int physical;
        int mental;
    public:
         Lobby();

        void SetPhysical(int physical);
        int GetPhysical();

        void SetMental(int mental);
        int GetMental();



        virtual int Action(Creature* );





};
#endif
