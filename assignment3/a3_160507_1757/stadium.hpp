#ifndef STADIUM_HPP
#define STADIUM_HPP
#include "barbarian.hpp"
#include "medusa.hpp"
#include "babayaga.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"
//#include "creature.hpp"
#include <iostream>
#include <unistd.h>
//#include <ctime>
//#include <cstlib>

using namespace std;

class Creature;

class Stadium{
    private:
        Creature **pFighters;
    public:
        Stadium();
        void ShowMenu();
        void Fight();
        int FightResult();

};

#endif
