
/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/

#include <iostream>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include "state.hpp"
using namespace std;

int main()
{

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


  
  
    // s3.SetNumOfArriveAt1Light();
    // s3.SetNumOfDepartAt1Light();
    // s3.SetNumOfArriveAt2Light();
    // s3.SetNumOfDepartAt2Light();
    
    for(int i = 0 ; i < 4*rotation; i++)
    {
        int a = pCur->GetInfo();

        if(a == 1) // EW G, NS R; cars on E, W lanes can move.
        {
        #if 0
            unsigned seed;
            seed = time(NULL);
            srand(seed);
            
            int randNum[4];
            
            for(int i = 0; i < 4; i++)
               randNum[i] = rand() % 5 + 4;
           
           
            
            s1.SetNumOfArriveAt1Light(randNum[0]);
            s1.SetNumOfDepartAt1Light(randNum[1]);
            s1.SetNumOfArriveAt2Light(randNum[2]);
            s1.SetNumOfDepartAt2Light(randNum[3]);
            
            s1.SetNumOfCarsAt1Light();
            s1.SetNumOfCarsAt2Light();

    #endif

    #if 1 // after making it into a module.

     cout <<  s1.nrOfArriveAt1Light() << endl;
     cout <<  s1.nrOfDepartAt1Light() << endl;
     cout <<  s1.nrOfArriveAt2Light() << endl;
     cout <<  s1.nrOfDepartAt2Light() << endl;


            s1.SetNumOfCarsAt1Light();
            s1.SetNumOfCarsAt2Light();
    #endif

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
            
        }
        else if(a == 2)// EW Y, NS R; cars on every lane can not move.  
        {
           // s1.SetNumOfCarsAt1Light();
          //  s1.SetNumOfCarsAt2Light();
           //s1.SetNumOfArriveAt2Light();
           //s1.SetNumOfDepartAt2Light();
            
            cout << "EW Y" << endl;
            cout << "NS R" << endl << endl;
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light() << endl; 

            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light() << endl << endl;
        
        
        }
        else if(a == 3)//EW R, NS G; cars on N, S lanes can move.
        {
        #if 0
            unsigned seed;
            seed = time(NULL);
            srand(seed);
           
           int randNum[4];
            
            for(int i = 0; i < 4; i++)
            randNum[i] = rand() % 5 + 4;
            
            
            
            s3.SetNumOfArriveAt1Light(randNum[0]);
            s3.SetNumOfDepartAt1Light(randNum[1]);
            s3.SetNumOfArriveAt2Light(randNum[2]);
            s3.SetNumOfDepartAt2Light(randNum[3]);
            
            s3.SetNumOfCarsAt1Light();
            s3.SetNumOfCarsAt2Light();
        #endif
        #if 1
             cout <<  s3.nrOfArriveAt1Light() << endl;
             cout <<  s3.nrOfDepartAt1Light() << endl;
             cout <<  s3.nrOfArriveAt2Light() << endl;
             cout <<  s3.nrOfDepartAt2Light() << endl;
        
        
                    s3.SetNumOfCarsAt1Light();
                    s3.SetNumOfCarsAt2Light();
        #endif
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
        
        
        
        }
        else if(a == 4)//EW R, NS Y; cars on every lane can not move.
        {
            cout << "EW R" << endl;
            cout << "NS Y" << endl << endl;
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light()<< endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light()<< endl; 
                                                                               
            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light()<< endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light()<< endl << endl;
        
        
        }
        sleep(1); 
        pCur = pCur->GetNext(); // moving to next node
    }





 
#endif
    return 0;
}
