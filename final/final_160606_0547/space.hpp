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
        Space* backDoor;
        Space* goToEntrance;
        Space* goToLobby;
        Space* goToOutside;
        Space* curr; //this variable points the present position of colonel
        
    public:
        void SetName(string name);
        string GetName();
        
        void SetBackDoor(Space *);
        Space* GetBackDoor();

        void SetEntrance(Space *);
        Space* GetEntrance();

        void SetLobby(Space *);
        Space* GetLobby();

        void SetOutside(Space *);
        Space* GetOutside();

        virtual void Action(Creature*)=0;


};





#endif
