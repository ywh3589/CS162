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
    for(int i = 0; i <10; i++) //I set 10 to the number of cars originally on each lane. 
    this->add(0);
}

/********************************************************************* 
** Function : add
** Description : adding an integer to the queue like structure.
** Parameters : char 
** Pre-Conditions : DynCharQueue constructor
** Post-Conditions : adding new integers to the queue like structure.
*********************************************************************/
void DynCharQueue::add(int letter)
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
** Description : removing an integer from already exisiting queue like structure.
** Parameters : none
** Pre-Conditions : queue -like structure.
** Post-Conditions : removing an integer on the top of the queue like structure and return the character being removed.
*********************************************************************/
int DynCharQueue::remove()
{  
    QueueNode *temp;
    if(front == NULL)
    {
        cout << "the queue is empty" << endl;
        return 0;
    }
    else
    {
     int letter = front->letter;
       temp = front;
       front = front->next;
       delete temp;
       return letter;
    }

}


/********************************************************************* 
** Function : Print
** Description : printint the values stored in the queue
** Parameters : none
** Pre-Conditions : queue -like structure.
** Post-Conditions : printing the numbers stored in the queue.
*********************************************************************/
void DynCharQueue::Print()
{  
    QueueNode *temp = front;
    if(front == NULL)
    {
        cout << "the queue is empty" << endl;
        return;
    }
    else
    {
        while(temp != NULL)
        {
            int letter = temp->letter;
              cout << letter << " ";
              temp = temp->next;
        }
    }

}
