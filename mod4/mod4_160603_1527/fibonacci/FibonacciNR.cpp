/********************************************************************************** 

**  Program Filename : FibonacciNR.cpp

**	Modifier: Woohyuk Yang

**  Date: June. 3rd. 2016

** Description: CS162 Mod4

** Input : 

** Output :  nth fibonacci number with Iterative implementation of fibonacci function 
************************************************************************************/

/*
 2   * FibonacciNR.cpp
 3   *
 4   *  Created on: Sep 11, 2010
 5   *      Author: julian
 6   */

  #include "FibonacciNR.h"
  #include <iostream>

  FibonacciNR::FibonacciNR() {

  }

  FibonacciNR::FibonacciNR(const int &n):n_(&n){
  }

  FibonacciNR::~FibonacciNR() {
  }

  int FibonacciNR::Fibonacci(const int &n)
  {
     int first =0;
     int second=1;
     int counter=2;
     while(counter < n)
     {
         int temp=second;
         second=first+second;
         first=temp;
         ++counter;
     }
     if(n==0)
         return 0;
     else
         return first+second;
  }
  void FibonacciNR::PrintFibonacci(){
     const int result = Fibonacci(*n_);
     std::cout<<*n_<<"th fibonacci Number:"<<result<<std::endl;
  }

