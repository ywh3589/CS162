/********************************************************************************** 

**  Program Filename : stauffenberg.hpp

**	Author: Woohyuk Yang

**  Date: May.8th. 2016

** Description: CS162 Assignment4

** Input : creature names and features.

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/

#ifndef STAUFFENBERG_HPP
#define STAUFFENBERG_HPP
#include "creature.hpp"
class Stauffenberg: public Creature
{
    private:
        int numTrial;
    public:
        Stauffenberg();
        /*when colonel returns to the entrance this number goes up*/
        void SetNumTrial(int );
        int GetNumTrial();

        virtual int attack();
        virtual void defense(int a);

};

#endif
