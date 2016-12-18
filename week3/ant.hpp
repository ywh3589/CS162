/********************************************************************************** 

**  Program Filename : critter.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/
#ifndef ANT_HPP
#define ANT_HPP
#include "critter.hpp"



class Ant : public Critter
{
    private:
        int count;
    public:
        void SetCount(int x);
        int GetCount();
        void Breed(int x, int y);

};

#endif
