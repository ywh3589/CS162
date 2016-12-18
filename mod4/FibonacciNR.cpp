/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/

/*
 2   * FibonacciNR.cpp
 3   *
 4   *  Created on: Sep 11, 2010
 5   *      Author: julian
 6   */
 7
 8  #include "FibonacciNR.h"
 9  #include <iostream>
10
11  FibonacciNR::FibonacciNR() {
12
13  }
14
15  FibonacciNR::FibonacciNR(const int &n):n_(&n){
16
17  }
18
19  FibonacciNR::~FibonacciNR() {
20  }
21
22  int FibonacciNR::Fibonacci(const int &n)
23  {
24     int first =0;
25     int second=1;
26     int counter=2;
27     while(counter < n)
28     {
29         int temp=second;
30         second=first+second;
31         first=temp;
32         ++counter;
33     }
34     if(n==0)
35         return 0;
36     else
37         return first+second;
38  }
39  void FibonacciNR::PrintFibonacci(){
40     const int result = Fibonacci(*n_);
41     std::cout<<*n_<<"th fibonacci Number:"<<result<<std::endl;
42  }

