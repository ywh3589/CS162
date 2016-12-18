#ifndef harrypotter_HPP
#define harrypotter_HPP
#include "creature.hpp"
#include "stadium.hpp"
//#include <ctime>
//#include <cstdlib>
class Harry_Potter: public Creature
{
    public:
        Harry_Potter();
        virtual int attack();
        virtual void defense(int a);

};

#endif
