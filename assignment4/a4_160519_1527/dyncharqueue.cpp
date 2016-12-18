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
void DynCharQueue::add(int n)
{
    if(front == NULL)
    {
        front = new QueueNode(n);
        rear = front;

       if( front->ID == 1)
       {
         front->pFighters = new Medusa;
       }
       else if( front->ID == 2)
       {
         front->pFighters = new Barbarian;
       
       }
       else if( front->ID == 3)
       {
         front->pFighters = new Baba_Yaga;
       
       }
       else if( front->ID == 4)
       {
         front->pFighters = new Blue_men;
       
       }
       else if( front->ID == 5)
       {
         front->pFighters = new Harry_Potter;
       
       }
    }
    else
    {
        QueueNode * pNode = new QueueNode(n);
        
       if( pNode->ID == 1)
       {
         pNode->pFighters = new Medusa;
       }
       else if( pNode->ID == 2)
       {
         pNode->pFighters = new Barbarian;
       
       }
       else if( pNode->ID == 3)
       {
         pNode->pFighters = new Baba_Yaga;
       
       }
       else if( pNode->ID == 4)
       {
         pNode->pFighters = new Blue_men;
       
       }
       else if( pNode->ID == 5)
       {
         pNode->pFighters = new Harry_Potter;
       
       }
        
        
        pNode->prev = rear;
        rear->next = pNode;
        rear = pNode;
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
     int num = front->ID;
       temp = front;
       front = front->next;
       delete temp;
       return num;
    }

}
/********************************************************************* 
** Function : BackToQueue
** Description : The winner goes to the back of the queue.
** Parameters : none
** Pre-Conditions : queue -like structure.
** Post-Conditions : sending the character located at front to the rear(back) of the quqeueue when the chracter wins.
*********************************************************************/
int DynCharQueue::BackToQueue()
{  
    QueueNode *temp;
    if(front == NULL)
    {
        cout << "the queue is empty" << endl;
        return 0;
    }
    else
    {
     int num = front->ID;
       temp = front;
       front = front->next;
       rear->next = temp;
       rear = rear->next;
       return num;
    }

}
