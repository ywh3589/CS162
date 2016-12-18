/********************************************************************************** 

**  Program Filename : dyncharqueue.cpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 Mod2

** Input : 

** Output :  making a queue like structure
******************************************************************************/


#include "dyncharqueue.hpp"
#include <iostream>


using namespace std;


/********************************************************************* 
** Function : Constructor
** Description : A constructor for a DynCharQueue class
** Parameters : none
** Pre-Conditions : none
** Post-Conditions : setting pointer variable front and rear to NULL.
*********************************************************************/
DynCharQueue::DynCharQueue()
{
    front = NULL;
    rear = NULL;
}

/********************************************************************* 
** Function : add
** Description : adding a character to the queue like structure.
** Parameters : char 
** Pre-Conditions : DynCharQueue constructor
** Post-Conditions : adding new character to the queue like structure.
*********************************************************************/
void DynCharQueue::add(char letter)
{
    if(front == NULL)
    {
        front = new QueueNode(letter);
        rear = front;
    }
    else
    {
        QueueNode * n = new QueueNode(letter);
        n->prev = rear;
        rear->next = n;
        rear = n;
		rear->next = NULL;
		front->prev = NULL;

    }

}


/********************************************************************* 
** Function : remove
** Description : removing a character from already exisiting queue like structure.
** Parameters : none
** Pre-Conditions : queue -like structure.
** Post-Conditions : removing a chracter on the top of the queue like structure and return the character being removed.
*********************************************************************/
char DynCharQueue::remove()
{  
    QueueNode *temp;
    if(front == NULL)
    {
        cout << "the queue is empty" << endl;
        return 0;
    }
    else
    {
     char letter = front->letter;
       temp = front;
       front = front->next;
       delete temp;
       return letter;
    }

}
