/********************************************************************************** 

**  Program Filename : stadium.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment3

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#ifndef STADIUM_HPP
#define STADIUM_HPP
#include "barbarian.hpp"
#include "medusa.hpp"
#include "babayaga.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"
#include "dyncharstack.hpp"
#include "dyncharqueue.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

class DynCharQueue;

class DynCharStack;

class Creature;

class Stadium{
    private:
        Creature **pFighters;
        DynCharQueue *pQueue;
        DynCharStack *pStack;
        int roundNumber;
        int numOfCharacters;
    public:
        Stadium();
        void SetRoundNumber(int r);
        int GetRoundNumber();
        void SetNumOfCharacters(int n);
        int GetNumOfCharacters();
        void ShowMenu();
        void FighterChoose();
        void Fight();
        int FightResult();

};

#endif
