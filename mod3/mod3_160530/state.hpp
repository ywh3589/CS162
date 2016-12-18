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
        State* next;
        int info;
        int direction;
        
       
        int numOfCarsAt1Light;
        int numOfCarsAt2Light;
       

        int numOfArriveAt1Light;
        int numOfDepartAt1Light;
        
        int numOfArriveAt2Light;
        int numOfDepartAt2Light;

        int eastWaitSum;
        int westWaitSum;
        int northWaitSum;
        int southWaitSum;
    public:
        State(int i);

        void SetInfo(int i);
        int GetInfo();
        void SetNext(State* p);
        State* GetNext();
       
	   	void SetNumOfCarsAt1Light();
        int GetNumOfCarsAt1Light();
        void SetNumOfCarsAt2Light();
        int GetNumOfCarsAt2Light();


        int nrOfArriveAt1Light();
        int nrOfDepartAt1Light();
        int nrOfArriveAt2Light();
        int nrOfDepartAt2Light();
        
        
        
        void SetNumOfArriveAt1Light(int n);
        int GetNumOfArriveAt1Light();
       
	   	void SetNumOfArriveAt2Light(int n);
        int GetNumOfArriveAt2Light();
        
        void SetNumOfDepartAt1Light(int n);
        int GetNumOfDepartAt1Light();
        
        void SetNumOfDepartAt2Light(int n);
        int GetNumOfDepartAt2Light();




/*arrive and depart function*/

		void Arrive(DynCharQueue* pQueue, int timeStamp, int num);
        int Depart(DynCharQueue* pQueue, int num);
        



/*wait sum control*/

        void SetEastWaitSum(int);
        int GetEastWaitSum();
        void SetWestWaitSum(int);
        int GetWestWaitSum();
        void SetNorthWaitSum(int);
        int GetNorthWaitSum();
        void SetSouthWaitSum(int);
        int GetSouthWaitSum();



};





#endif
