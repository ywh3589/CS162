/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include "creature.hpp"

using namespace std;

class Creature;

class Space
{
    private:
        string name;
        Space* next;
        Space* prev;
        Space* own;
        Space* underground;
        
    public:
        void SetName(string name);
        string GetName();

        Space* GetOwnAddress()
        {
            return this;
        }
        
        void SetNext(Space *);
        Space* GetNext();

        void SetPrev(Space *);
        Space* GetPrev();
        
        void SetUnder(Space *);
        Space* GetUnder();



        virtual void Action(Creature*)=0;


};





#endif
