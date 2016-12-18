/********************************************************************************** 

**  Program Filename : stadium.hpp

**	Author: Woohyuk Yang

**  Date: May.21st. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#ifndef VALKYRIE_HPP
#define VALKYRIE_HPP
#if 0
#include "barbarian.hpp"
#include "medusa.hpp"
#include "babayaga.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"
#include "dyncharstack.hpp"
#include "dyncharqueue.hpp"
#endif
#include <iostream>
#include <unistd.h>
#include "dyncharqueue.hpp"
#include "stauffenberg.hpp" 
#include "hittlerdog.hpp"
#include "hittler.hpp"
#include "sssagent.hpp"

using namespace std;

class DynCharQueue;

//class DynCharStack;

class Space;

class Creature;

class Valkyrie
{
    private:
        Creature *pCol;
        Creature *pSSS;
        Creature *pDog;
        Creature *pHittler;
        Space *pSpace;
        DynCharQueue *pQueue;
#if 0
        int roundNumber;
       int numOfCharacters;
#endif
public:
        Valkyrie();
        void ShowMenu();
        void OperationChoose();
        #if 0
        void SetRoundNumber(int r);
        int GetRoundNumber();
        void SetNumOfCharacters(int n);
        int GetNumOfCharacters();
        void ShowMenu();
        void FighterChoose();
        void Fight();
        int FightResult();
        #endif
};

#endif
