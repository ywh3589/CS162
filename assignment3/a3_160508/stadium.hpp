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
#include <iostream>
#include <unistd.h>

using namespace std;

class Creature;

class Stadium{
    private:
        Creature **pFighters;
        int roundNumber;
    public:
        Stadium();
        void SetRoundNumber(int r);
        int GetRoundNumber();
        void ShowMenu();
        void FighterChoose();
        void Fight();
        int FightResult();

};

#endif
