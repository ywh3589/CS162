/********************************************************************************** 

**  Program Filename : dyncharstack.hpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 Mod2

** Input : 

** Output :  testing stack like structures
******************************************************************************/

#ifndef DYNCHARSTACK_HPP
#define DYNCHARSTACK_HPP
#include "creature.hpp"
#include <cstdlib>

class Creature;

class DynCharStack
{
    private:
        class StackNode
        {
            friend class DynCharStack;
            int value;
            StackNode *next;
            Creature *pLoser;
            //constructor
            StackNode(int value1, StackNode *next1 = NULL)
            {
                value = value1;
                next = next1;
            }
            StackNode(Creature *pLoser1, StackNode *next1 = NULL)
           { 
                pLoser = pLoser1;
                next = next1;
            }
        public: 
            Creature* GetCreature()
            {  
                return pLoser;
            }

        };
        StackNode *top;
    public:
        DynCharStack();
        StackNode* GetTop()
        {
            return top;
        }
        void add(int);
        void LoserAdd(Creature *);
        int remove();
        void PrintStack();
        void DeleteStack();
};

#endif
