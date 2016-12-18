#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "creature.hpp"
#include "stadium.hpp"
//#include <ctime>
//#include <cstdlib>
class Medusa: public Creature
{
    public:
        Medusa();
        virtual int attack();
        virtual void defense(int a);

};

#endif
