/********************************************************************************** 

**  Program Filename : creature.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature kinds and features

** Output : a simulation for codename "Valkyrie" 
************************************************************************************/

#ifndef ROOM_HPP
#define ROOM_HPP
#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
#include "creature.hpp"
#include "space.hpp"

using namespace std;

class Creature;

class Room : public Space
{
    protected:
        int roomNum;
    public:
        Room(int n);

        void SetNum(int num);
        int GetNum();
        
        virtual void Action(Creature *);
};

#endif
