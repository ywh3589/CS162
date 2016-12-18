/********************************************************************************** 

**  Program Filename : dyncharqueue.hpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 assignment4

** Input : 

** Output :  testing queue like and queue like structures
******************************************************************************/

#ifndef DYNCHARQUEUE_HPP
#define DYNCHARQUEUE_HPP
#include <cstdlib>
#include "space.hpp"
#include "room.hpp"
#include "lobby.hpp"
#include "entrance.hpp"

class Space;

class DynCharQueue
{
    private:
       // Creature **pCreature;
        class QueueNode
        {
            friend class DynCharQueue;
            int ID;
            Space *pSpace;
            QueueNode * prev;
            QueueNode * next;
            QueueNode( int ID_1, QueueNode * prev_1 = NULL, QueueNode * next_1 = NULL)
            {
                ID = ID_1;
                prev = prev_1;
                next = next_1;
            }
        
            public:
                Space* GetSpace()
                {
                   // cout << "inside getcreatures" << endl;
                    return pSpace;
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
       //  cout << "inside getfront" << endl;
            return front;
        }
       int BackToQueue(); 
        void DeleteQueue();
        void PrintQueue();
        int CountQueue();
      //  void SortQueue();


};
#endif
