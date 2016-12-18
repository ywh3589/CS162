
/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: May. 29th. 2016

** Description: CS162 ModF

** Input : 

** Output :  STD simulation 
************************************************************************************/

#include <iostream>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include "state.hpp"
#include "dyncharqueue.hpp"


using namespace std;

class DynCharQueue;

int main()
{
    unsigned seed;
    seed = time(0);
    srand(1); // to compare with mod3 program the seed value has been set to 1.

  //  srand(seed);

    int rotation;

    cout << "how many times do you want STD rotates" << endl;
    cin >> rotation;

#if 1
    State s1(1);
    State s2(2);
    State s3(3);
    State s4(4);

//test
        #endif

#if 1
    
    
    

    s1.SetNext(&s2);
    s2.SetNext(&s3);
    s3.SetNext(&s4);
    s4.SetNext(&s1);
    

    
    State* pCur = &s1;

    DynCharQueue *pEastLane = new DynCharQueue;
    DynCharQueue *pWestLane = new DynCharQueue;
    DynCharQueue *pNorthLane = new DynCharQueue;
    DynCharQueue *pSouthLane = new DynCharQueue;

  
            int eastWaitSum = 0;
            int westWaitSum = 0;
            int northWaitSum = 0;
            int southWaitSum = 0;
  
    
    for(int i = 1 ; i <= 4*rotation; i++)
    {
        int timeStamp = (i / 4) + 1;

        int a = pCur->GetInfo();

        if(a == 1) // EW G, NS R; cars on E, W lanes can move.
        {
            /*moving control part*/
           
           int eastArrive = s1.nrOfArriveAt1Light();
           int eastDepart = s1.nrOfDepartAt1Light();
           int westArrive = s1.nrOfArriveAt2Light();
           int westDepart = s1.nrOfDepartAt2Light();
                  s1.SetNumOfCarsAt1Light();
                  s1.SetNumOfCarsAt2Light();


         
      
              /*queue control part*/
      
          s1.Arrive(pEastLane, timeStamp, eastArrive);
          eastWaitSum += timeStamp - (s1.Depart(pEastLane, eastDepart) + 1); //getting east bound lane's wait time and adding it to the previous value. 
          s1.SetEastWaitSum(eastWaitSum);
          
          
          s1.Arrive(pWestLane, timeStamp, westArrive);
           westWaitSum += timeStamp - (s1.Depart(pWestLane, westDepart) + 1); //getting west bound lane's wait time and adding it to the previous value.  
          s1.SetWestWaitSum(westWaitSum);

            /*display part*/


            cout << "EW G" << endl;
            cout << "NS R" << endl << endl;
            cout << "Number of cars arriving at E light : "  << s1.GetNumOfArriveAt1Light() << endl;
            cout << "Number of cars departing at E light : " << s1.GetNumOfDepartAt1Light()<< endl;
            cout << "Number of cars arriving at W light : "  << s1.GetNumOfArriveAt2Light()<< endl;
            cout << "Number of cars departing at W light : " << s1.GetNumOfDepartAt2Light() << endl << endl;

            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light()<< endl;
            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light()<< endl << endl;
           

            /*queue print*/

             cout << "queue print" << endl << endl;
             cout << "east lane" <<endl;
             pEastLane->Print(); 
         
             cout << endl << "west lane" <<endl;
             pWestLane->Print(); 
             cout << endl << "north lane" <<endl;
             pNorthLane->Print(); 
             cout << endl <<  "south lane" <<endl;
             pSouthLane->Print();
             cout << endl;
        
        
        }
        else if(a == 2)// EW Y, NS R; cars on every lane can not move.  
        {
            
            /*display part */
            cout << endl;
            cout << "EW Y" << endl;
            cout << "NS R" << endl << endl;
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light() << endl; 

            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light() << endl << endl;
   


            /*queue display*/

            cout << "queue print" << endl << endl;
            cout << "east lane" <<endl;
            pEastLane->Print();
        
            cout << endl << "west lane" <<endl;
            pWestLane->Print();
            cout << endl << "north lane" <<endl;
            pNorthLane->Print(); 
            cout << endl <<  "south lane" <<endl;
            pSouthLane->Print();
            cout << endl; 


        
        
        }
        else if(a == 3)//EW R, NS G; cars on N, S lanes can move.
        {
        #if 1
        /*moving control part*/
        
             int NorthArrive = s3.nrOfArriveAt1Light();
             int NorthDepart = s3.nrOfDepartAt1Light();
             int SouthArrive = s3.nrOfArriveAt2Light();
             int SouthDepart = s3.nrOfDepartAt2Light();
                            s3.SetNumOfCarsAt1Light();
                            s3.SetNumOfCarsAt2Light();
        
        /*queue control part*/
        
            s3.Arrive(pNorthLane, timeStamp, NorthArrive);
           northWaitSum += timeStamp - (s3.Depart(pNorthLane, NorthDepart) + 1);  //getting north bound lane's wait time and adding it to the previous value. 
           s3.SetNorthWaitSum(northWaitSum);
           
           
           s3.Arrive(pSouthLane, timeStamp, SouthArrive);
           southWaitSum += timeStamp - (s3.Depart(pSouthLane, SouthDepart) + 1);  //getting south bound lane's wait time and adding it to the previous value. 
           s3.SetSouthWaitSum(southWaitSum);


        
                #endif

            /*display part*/
            
            cout << endl;
            cout << "EW R" << endl;
            cout << "NS G" << endl << endl;
            cout << "Number of cars arriving at N light : "  <<  s3.GetNumOfArriveAt1Light()   << endl;
            cout << "Number of cars departing at N light : " <<  s3.GetNumOfDepartAt1Light()   << endl;
            cout << "Number of cars arriving at S light : "  <<  s3.GetNumOfArriveAt2Light()   << endl;
            cout << "Number of cars departing at S light : " <<  s3.GetNumOfDepartAt2Light()   << endl << endl;
            
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light()<< endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light()<< endl;
            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light() << endl << endl;
        
            /*queue display*/    
            cout << "queue print" << endl << endl;
            cout << "east lane" <<endl;
            pEastLane->Print(); 
        
            cout << endl << "west lane" <<endl;
            pWestLane->Print(); 
            cout << endl << "north lane" <<endl;
            pNorthLane->Print(); 
            cout << endl <<  "south lane" <<endl;
            pSouthLane->Print();
            cout << endl; 
        
        }
        else if(a == 4)//EW R, NS Y; cars on every lane can not move.
        {
            /*display part*/
            cout << endl;
            cout << "EW R" << endl;
            cout << "NS Y" << endl << endl;
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light()<< endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light()<< endl; 
                                                                               
            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light()<< endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light()<< endl << endl;
  
            /*queue display*/
             cout << "queue print" << endl << endl;
             cout << "east lane" <<endl;
             pEastLane->Print(); 
         
             cout << endl << "west lane" <<endl;
             pWestLane->Print(); 
             cout << endl << "north lane" <<endl;
             pNorthLane->Print(); 
             cout << endl <<  "south lane" <<endl;
             pSouthLane->Print();
             cout << endl; 


        /* getting average wait time for a time unit*/
        // dividing the total waiting time by the number of cars

        
        int nrOfEast = s1.GetNumOfCarsAt1Light();
        int nrOfWest = s1.GetNumOfCarsAt2Light();
        int nrOfNorth = s3.GetNumOfCarsAt1Light();
        int nrOfSouth = s3.GetNumOfCarsAt2Light();

        cout << "nrOfEast " << nrOfEast << endl;
        cout << "nrOfwest " << nrOfWest << endl;
        cout << "nrOfnorth " << nrOfNorth << endl;
        cout << "nrOfsouth " << nrOfSouth << endl;


        int eastWaitSum = s1.GetEastWaitSum();
        int westWaitSum = s1.GetWestWaitSum();
        int northWaitSum = s3.GetNorthWaitSum();
        int southWaitSum = s3.GetSouthWaitSum();
        
        cout << "eastWaitt " << eastWaitSum << endl;
        cout << "westWait "  << westWaitSum << endl;
        cout << "northWait " << northWaitSum << endl;
        cout << "southWait " << southWaitSum << endl;
       
	   /*I set 4 minutes to time of each cycle.  eastWaitSum variable is the number of cycle so it should be multiplied by 4. */	
        int eastAverage = 4*eastWaitSum / nrOfEast;
        int westAverage = 4*westWaitSum / nrOfWest;
        int northAverage = 4*northWaitSum / nrOfNorth;
        int southAverage = 4*southWaitSum / nrOfSouth;



        cout << "Average wait time for East lane is " << eastAverage << "minutes" <<endl; 
        cout << "Average wait time for West lane is " << westAverage << "minutes" <<endl;
        cout << "Average wait time for North lane is " << northAverage << "minutes" <<endl;
        cout << "Average wait time for South lane is " << southAverage << "minutes" <<endl;

      
        
        }
        sleep(1); 
        
        
        pCur = pCur->GetNext(); // moving to next node
    }





 
#endif
    return 0;
}
