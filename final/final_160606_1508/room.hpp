/********************************************************************************** 

**  Program Filename : room.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Final Project

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
        int weapon;
        int ammunition;
        int roomNum;
    public:
        Room(int n);
        void SetWeapon(int w);
        int GetWeapon();

        void SetAmmo(int a);
        int GetAmmo();

        void SetNum(int num);
        int GetNum();
        
        virtual int Action(Creature *);
};

#endif
