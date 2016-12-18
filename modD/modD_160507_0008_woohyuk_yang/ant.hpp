/********************************************************************************** 

**  Program Filename : ant.hpp

**	Author: Woohyuk Yang

**  Date: May. 6th. 2016

** Description: CS162 ModD

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which ants and doodlebugs fight on the grid.
************************************************************************************/
#ifndef ANT_HPP
#define ANT_HPP
#include "critter.hpp"
#include "grid.hpp"

class Grid;


class Ant : public Critter
{
    private:
        int count;
        Ant *ptAnt;
    public: 
        Ant(int x);
        void SetCount(int x);
        int GetCount();
        virtual Ant* Breed();
        virtual Ant* Eat();
};

#endif
