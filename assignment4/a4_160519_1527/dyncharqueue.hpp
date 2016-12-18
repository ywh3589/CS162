/********************************************************************************** 

**  Program Filename : dyncharqueue.hpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 Mod2

** Input : 

** Output :  testing queue like and queue like structures
******************************************************************************/

#ifndef DYNCHARQUEUE_HPP
#define DYNCHARQUEUE_HPP
#include <cstdlib>
#include "barbarian.hpp"
#include "medusa.hpp"
#include "babayaga.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"

class Creature;

class DynCharQueue
{
    private:
        class QueueNode
        {
            friend class DynCharQueue;
            int ID;
            Creature *pFighters;
            QueueNode * prev;
            QueueNode * next;
            QueueNode( int ID_1, QueueNode * prev_1 = NULL, QueueNode * next_1 = NULL)
            {
                ID = ID_1;
                prev = prev_1;
                next = next_1;
            }
        
            public:
                Creature * GetCreature()
                {
                    cout << "inside getcreatures" << endl;
                    return pFighters;
                }


        };

        QueueNode * front;
        QueueNode * rear;      

    public:

          //  Creature *pFighters;
        DynCharQueue();
        void add(int);
        int remove();
        QueueNode* GetFront()
        {
            cout << "inside getfront" << endl;
            return front;
        }
       int BackToQueue(); 




};
#endif
