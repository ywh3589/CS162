#ifndef BABAYAGA_HPP
#define BABAYAGA_HPP
#include "creature.hpp"
#include "stadium.hpp"
//#include <ctime>
//#include <cstdlib>
class Baba_Yaga: public Creature
{
    public:
        Baba_Yaga();
        virtual int attack();
        virtual void defense(int a);

};

#endif
