/********************************************************************************** 

**  Program Filename : ant.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times
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
     //   int starveCount;
        Ant *ptAnt;
    public: 
        Ant(int x);
        void SetCount(int x);
        int GetCount();
     //   void SetStarveCount(int x);
     //   int GetStarveCount();
        virtual Ant* Breed();
        virtual Ant* Eat();
};

#endif
