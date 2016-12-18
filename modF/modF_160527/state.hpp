/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/
#ifndef STATE_HPP
#define STATE_HPP
#include <ctime>
#include <cstdlib>
#include "dyncharqueue.hpp"
#include <iostream>

using namespace std;

class DynCharQueue;

class State
{
    private:
        DynCharQueue *pEastQueue; //to include 4 queues
        DynCharQueue *pWestQueue; //to include 4 queues
        DynCharQueue *pNorthQueue; //to include 4 queues
        DynCharQueue *pSouthQueue; //to include 4 queues
        State* next;
        int info;
        int direction;
        
        #if 1
        int numOfCarsAt1Light;
        int numOfCarsAt2Light;
        
        int numOfArriveAt1Light;
        int numOfDepartAt1Light;
        
        int numOfArriveAt2Light;
        int numOfDepartAt2Light;
        #endif
    public:
        State(int i);
/*functions needed to make list-like structure*/
        void SetInfo(int i);
        int GetInfo();
        
        void SetNext(State* p);
        State* GetNext();

        DynCharQueue* GetQueue(int);
/* these functions could be controlled in queue*/

	   	void SetNumOfCarsAt1Light();
        int GetNumOfCarsAt1Light();
        void SetNumOfCarsAt2Light();
        int GetNumOfCarsAt2Light();

/*this function returns the random number*/
        int nrOfArriveAt1Light(); 
        int nrOfDepartAt1Light();
        int nrOfArriveAt2Light();
        int nrOfDepartAt2Light();
        
#if 1 
  /*set, get arrive depart at1 light , at2 ligth 
   *
   * queue can control all of them */      
        void SetNumOfArriveAt1Light(int n);
        int GetNumOfArriveAt1Light();
       
	   	void SetNumOfArriveAt2Light(int n);
        int GetNumOfArriveAt2Light();
        
        void SetNumOfDepartAt1Light(int n);
        int GetNumOfDepartAt1Light();
        
        void SetNumOfDepartAt2Light(int n);
        int GetNumOfDepartAt2Light();
#endif

};





#endif
