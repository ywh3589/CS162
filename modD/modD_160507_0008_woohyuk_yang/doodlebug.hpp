/********************************************************************************** 

**  Program Filename : doodlebug.hpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModD

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output : A simulating program in which ants and doodlebugs fight on the grid.
************************************************************************************/
#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP
#include "critter.hpp"
#include "grid.hpp"




class DoodleBug : public Critter
{
    private:
        int count;
        int starveCount;
        DoodleBug *pDoodle;
    public:
        DoodleBug(int x);
        void SetCount(int x);
        int GetCount();
        void SetStarveCount(int x);
        int GetStarveCount();
        
        virtual DoodleBug* Breed();
        virtual DoodleBug* Eat();
                DoodleBug* Starve();

};

#endif
