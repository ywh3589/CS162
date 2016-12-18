#ifndef bluemen_HPP
#define bluemen_HPP
#include "creature.hpp"
#include "stadium.hpp"
//#include <ctime>
//#include <cstdlib>
class Blue_men: public Creature
{
    public:
        Blue_men();
        virtual int attack();
        virtual void defense(int a);

};

#endif
