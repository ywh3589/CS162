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

#define INITIAL_CAR_LIGHT1 10
#define INITIAL_CAR_LIGHT2 10
using namespace std;

class State
{
    private:
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

        void SetInfo(int i);
        int GetInfo();
        void SetNext(State* p);
        State* GetNext();
       
	   	void SetNumOfCarsAt1Light();
        int GetNumOfCarsAt1Light();
        void SetNumOfCarsAt2Light();
        int GetNumOfCarsAt2Light();
        
        
        void SetNumOfArriveAt1Light(int n);
        int GetNumOfArriveAt1Light();
       
	   	void SetNumOfArriveAt2Light(int n);
        int GetNumOfArriveAt2Light();
        
        void SetNumOfDepartAt1Light(int n);
        int GetNumOfDepartAt1Light();
        
        void SetNumOfDepartAt2Light(int n);
        int GetNumOfDepartAt2Light();
};





#endif
