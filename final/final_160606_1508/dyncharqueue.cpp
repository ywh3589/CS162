/********************************************************************************** 

**  Program Filename : dyncharqueue.cpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 assignment4

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
    curr = NULL;

    add(1); //entrance
    add(2); //loby
    add(3); //SSS agent's room
    add(2); //loby
    add(4); //Dog's room
    add(5); //Hittler's room
    PrintQueue();

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
         front->pSpace = new Entrance;
       }
       else if( front->ID == 2)
       {
         front->pSpace = new Lobby;
       
       }
       else if( front->ID == 3)
       {
         front->pSpace = new Room(1);
       
       }
       else if( front->ID == 4)
       {
         front->pSpace = new Room(2);
       
       }
       else if( front->ID == 5)
       {
         front->pSpace = new Room(3);
       
       }
    }
    else
    {
        QueueNode * pNode = new QueueNode(n);
        
       if( pNode->ID == 1)
       {
         pNode->pSpace = new Entrance;
       }
       else if( pNode->ID == 2)
       {
         pNode->pSpace = new Lobby;
       
       }
       else if( pNode->ID == 3)
       {
         pNode->pSpace = new Room(1);
       
       }
       else if( pNode->ID == 4)
       {
         pNode->pSpace = new Room(2);
       
       }
       else if( pNode->ID == 5)
       {
         pNode->pSpace = new Room(3);
       
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
       temp = front;
       front = front->next;
       delete temp;
       return 1;
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
    QueueNode *temp = front;
    if(front == NULL)
    {
        cout << "the queue is empty" << endl;
        return 0;
    }
    else
    {

       if(front->next != NULL)
       {
        rear->next = temp;
        rear = rear->next;
        front = temp->next;

        rear->next = NULL;
        front->prev = NULL;
       }
        int num = rear->ID;
       return num;

    
    }

}
/********************************************************************* 
** Function : DeleteQueue
** Description : the function which deletes the queue.
** Parameters : none
** Pre-Conditions : none
** Post-Conditions : deleting the exisiting queue.
*********************************************************************/
void DynCharQueue::DeleteQueue()
{
#if 1
while(front != NULL)
    {
        QueueNode *temp = front;
        
        front = front->next;
        delete temp;
    }
#endif

}
/********************************************************************* 
** Function : PrintQueue()
** Description : A function which prints the creatures stored in the queue.
** Parameters : none
** Pre-Conditions : none
** Post-Conditions : printing out the queue.
*********************************************************************/
void DynCharQueue::PrintQueue()
{

    cout << "the map of hittler's castle" <<endl;
    
    if(front == NULL)
    cout << "this queue is empty" << endl;

     QueueNode * temp = NULL;
     temp = this->front;
    while(temp != NULL)
    {
 

       cout << temp->GetSpace()->GetName() << endl; 
        temp = temp->next;

    }

}
/********************************************************************* 
** Function : CountQueue()
** Description : A function to count the number of creatures in the queue
** Parameters : none
** Pre-Conditions : queue constructor
** Post-Conditions : return the number of creatures stored in the queue.
*********************************************************************/
int DynCharQueue::CountQueue()
{
    int num = 0;

    if(front == NULL)
    {
        cout << "this queue is empty" << endl;
        return 0;
    }
     QueueNode * temp = NULL;
     temp = this->front;
    while(temp != NULL)
    {
        temp = temp->next;
        num++;
    }
        return num;
}
#if 0
/********************************************************************* 
** Function :SortQueue()
** Description : A function to put creatures to an array and sort it to get the finishers
** Parameters : none
** Pre-Conditions : queue constructor
** Post-Conditions : sort the queue and place the creatures in another array. .
*********************************************************************/
void DynCharQueue::SortQueue()
{

/*making a pointer array of Creature*/ 
        int num = CountQueue();
        pCreature = new Creature*[num];
        for(int i = 0; i < num; i++)
        pCreature[i] = NULL;

        QueueNode *temp = front;

/*locating creatures to the array made*/
        while(temp != NULL)
        {
            for(int i = 0; i < num; i++)
            {
                 pCreature[i] = temp->GetCreature();
                temp = temp->next; 
            }
        
        
        }
            Creature *pTemp;

//sorting the array // the criteria is strenth points.
            for(int i = 0; i <num; i++)
            {
                for(int j = 0; j < num; j++)
                {
                     if(pCreature[i] == NULL)
                     {
                         return;
                     }
                    if( (pCreature[i]->GetStrength()) > (pCreature[j]->GetStrength()))
                    {
                        pTemp = pCreature[i];
                        pCreature[i] = pCreature[j];
                        pCreature[j] = pTemp;
                    
                    
                    }
                
                
                }
            
            }



           //   cout << endl << "after sorting " << endl;
            for(int i = 0; i < 3; i++)
            {
                if(pCreature[i] == NULL)
                {
                    return;
                }
              cout << "# " << i+1 << "rank is " << pCreature[i]->GetName() << " : strength power : " << pCreature[i]->GetStrength() << endl;
              
            }






}
#endif
