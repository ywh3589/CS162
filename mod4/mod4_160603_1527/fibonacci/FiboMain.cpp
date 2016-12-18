/********************************************************************************** 

**  Program Filename : FiboMain.cpp

**	Modifier: Woohyuk Yang

**  Date: June. 3rd. 2016

** Description: CS162 Mod4

** Input : 

** Output :  the execution time of getting nth fibonacci number with Iterative implementation of fibonacci function
			 the execution time of getting nth fibonacci number with Recursive implementation of fibonacci function 
************************************************************************************/
/*
 2   * Program.cpp
 3   *
 4   *  OS: Fedora 13
 5   *  Language: Native C++
 6   *  Compiler: GNU g++
 7   *  Created on: Sep 11, 2010
 8   *      Author: julian
 9   */

  #include <iostream>
  #include <stdlib.h>
  #include "FibonacciR.h"
  #include "FibonacciNR.h"
  #include <ctime>
  #include <cmath>
  #include <ratio>
  #include <chrono>

  using namespace std;
  void Usage(){
     cout<<"Correct Usage:"<<endl;
     cout<<"./Fibonacci [n]"<<endl;
  }
  int main(int argc, char** args) {
     try{

using namespace std::chrono;

         const char* input; //Note: char by default initializes to '\0'
         if(args[1]!=0)
         {
             cout<<"1st passed arguement: '"<<args[1]<<"'"<<endl;
             input= args[1];
         }
         int n;
         cout << "input the number" << endl;
         cin >> n;
        //   int n= atoi(input);
           
        cout<<"Finding '"<<n<<"'th "<<"fibonacci number...."<<endl;
         cout<<"Calling Recursive Fibonacci implementation"<<endl;
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        // clock_t t1;
        // t1 = clock();
         cout << "Calculating...time for Recursive Fibonacci implementation" << endl;
         FibonacciR fr(n);
         fr.PrintFibonacci();
        // t1 = clock() - t1;
       
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        duration<double> time_span = duration_cast<duration<double>>(t2-t1);
        cout << "it took me using high resolution " << time_span.count() << " seconds" << endl << endl << endl;
       
       // cout << "It took me " << t1 << "clicks" << ((float)t1) / CLOCKS_PER_SEC << " seconds" << endl;
         
         cout<<"Calling Non-Recursive Fibonacci implementation"<<endl;
        high_resolution_clock::time_point t3 = high_resolution_clock::now();
    
        // clock_t t2;
        // t2 = clock();
         cout << "Calculating...time for Non-Recursive Fibonacci implementation" << endl;
         FibonacciNR fnr(n);
         fnr.PrintFibonacci();
        high_resolution_clock::time_point t4 = high_resolution_clock::now();
        duration<double> time_span_1 = duration_cast<duration<double>>(t4-t3);
        cout << "it took me using high resolution " << time_span_1.count() << " seconds" << endl;
        // t2 = clock() - t2;
        // cout << "It took me " << t1 << "clicks" << ((float)t2) / CLOCKS_PER_SEC << " seconds" << endl;
         cout << "Done!!!!" << endl;
         return 0;
     }
     catch(...)
     {
         cout<<"Oops an error occured! Please check usage"<<endl;
         Usage();
         return 1;
     }
  }

