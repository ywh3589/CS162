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

class DynCharQueue
{
    private:
        class QueueNode
        {
            friend class DynCharQueue;
            int letter;
            QueueNode * prev;
            QueueNode * next;
            QueueNode( int letter_1, QueueNode * prev_1 = NULL, QueueNode * next_1 = NULL)
            {
                letter = letter_1;
                prev = prev_1;
                next = next_1;
            }
        };

        QueueNode * front;
        QueueNode * rear;      



    public:
        DynCharQueue();
        void add(int);
        int remove();
        void Print();
};
#endif
