
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


  
  
   
    for(int i = 0 ; i < 4*rotation; i++)
    {
        int a = pCur->GetInfo();

        if(a == 1) // EW G, NS R; cars on E, W lanes can move.
        {
            unsigned seed;
            seed = time(NULL);
            srand(seed);
            
            int randArrive[2];
            int randDepart[2];
            
            for(int i = 0; i < 2; i++)
               randArrive[i] = rand() % 5 + 4;
             
            for(int i = 0; i < 2; i ++)
               randDepart[i] = rand() % 8;

            

            

            
            s1.SetNumOfArriveAt1Light(randArrive[0]);
            s1.SetNumOfDepartAt1Light(randDepart[0]);
            s1.SetNumOfArriveAt2Light(randArrive[1]);
            s1.SetNumOfDepartAt2Light(randDepart[1]);
            
            s1.SetNumOfCarsAt1Light();
            s1.SetNumOfCarsAt2Light();

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
            cout << "EW Y" << endl;
            cout << "NS R" << endl << endl;
            cout << "Number of cars at E light : " << s1.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at W light : " << s1.GetNumOfCarsAt2Light() << endl; 

            cout << "Number of cars at N light : " << s3.GetNumOfCarsAt1Light() << endl;
            cout << "Number of cars at S light : " << s3.GetNumOfCarsAt2Light() << endl << endl;
        
        
        }
        else if(a == 3)//EW R, NS G; cars on N, S lanes can move.
        {
            unsigned seed;
            seed = time(NULL);
            srand(seed);
            
            int randArrive[2];
            int randDepart[2];
            
            for(int i = 0; i < 2; i++)
               randArrive[i] = rand() % 5 + 4;
             
            for(int i = 0; i < 2; i ++)
               randDepart[i] = rand() % 8;
            
            
            
            s3.SetNumOfArriveAt1Light(randArrive[0]);
            s3.SetNumOfDepartAt1Light(randDepart[0]);
            s3.SetNumOfArriveAt2Light(randArrive[1]);
            s3.SetNumOfDepartAt2Light(randDepart[1]);
            
            s3.SetNumOfCarsAt1Light();
            s3.SetNumOfCarsAt2Light();
            
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
        
        /* getting average wait time for a time unit*/
        // average wait time is equal to how much time it takes for every car to depart.
        // So I calculated the average time for each lane using the equation below.
        
        double a1 = s1.GetNumOfDepartAt1Light(); 
        double a2 = s1.GetNumOfDepartAt2Light();
        double a3 = s3.GetNumOfDepartAt1Light();
        double a4 = s3.GetNumOfDepartAt2Light(); 
 
        double b1 = a1 / 4.0;
        double b2 = a2 / 4.0;
        double b3 = a3 / 4.0;
        double b4 = a4 / 4.0;

        //b1 ~ b4 means number of cars departing per minutes

        double c1 = s1.GetNumOfCarsAt1Light();
        double c2 = s1.GetNumOfCarsAt2Light();
        double c3 = s3.GetNumOfCarsAt1Light();
        double c4 = s3.GetNumOfCarsAt2Light();

        double d1 = c1 / b1;
        double d2 = c2 / b2;
        double d3 = c3 / b3;
        double d4 = c4 / b4;

        //for example if 5 cars depart for a minute (this value is b1 ~ b4),then how much time does it take for every cars on the lane to depart?
        //  1minute : 5 cars  = current number of Cars(c1~c4) : how much time does it take(d1~d4)
        //  1:  b1~b4 = c1~c4 : d1~d4

        cout << "Average wait time for E light per a car is " << d1 << "minutes" <<endl; 
        cout << "Average wait time for W light per a car is " << d2 << "minutes" <<endl;
        cout << "Average wait time for N light per a car is " << d3 << "minutes" <<endl;
        cout << "Average wait time for S light per a car is " << d4 << "minutes" <<endl;
      
        }
        sleep(1); // 1 second is 1 minute in this program.
        pCur = pCur->GetNext(); // moving to next node
        

      
    
    
    }





 
#endif
    return 0;
}
