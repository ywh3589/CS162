#ifndef STADIUM_HPP
#define STADIUM_HPP
#include "barbarian.hpp"
#include "medusa.hpp"
#include "babayaga.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"
//#include "creature.hpp"
#include <iostream>
//#include <ctime>
//#include <cstlib>

using namespace std;

class Creature;

class Stadium{
    private:
        Creature **pCreature;
    public:
        Stadium(int numOfFighters);
        void ShowMenu();
};

#endif
