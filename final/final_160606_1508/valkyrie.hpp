/********************************************************************************** 

**  Program Filename : valykyrie.hpp

**	Author: Woohyuk Yang

**  Date: June.6th. 2016

** Description: CS162 Final Project

** Input : creature names and features.

** Output : a valkyrie simulation program  
************************************************************************************/
#ifndef VALKYRIE_HPP
#define VALKYRIE_HPP
#include <iostream>
#include <unistd.h>
#include "stauffenberg.hpp" 
#include "hittlerdog.hpp"
#include "hittler.hpp"
#include "sssagent.hpp"
#include "space.hpp"
#include "entrance.hpp"
#include "lobby.hpp"
#include "room.hpp"
#include "creature.hpp"

using namespace std;



class Space;

class Creature;

class Valkyrie
{
    private:
        Creature *pCol;
        Creature *pSSS;
        Creature *pDog;
        Creature *pHittler;
        Space *head;
        Space *tail;
        Space *curr;
        Space *temp;
   
public:
        void ShowMenu();
        void OperationChoose();
      
        int fight(Creature*, Creature*);
        int FightResult(Creature*, Creature*);
        
};

#endif
