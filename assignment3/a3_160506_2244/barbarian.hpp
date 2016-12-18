#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "creature.hpp"
#include "stadium.hpp"
//#include <ctime>
//#include <cstdlib>
class Barbarian: public Creature
{
    public:
        Barbarian();
        virtual void ShowName();
        virtual int attack();
        virtual void defense(int a);

};

#endif
