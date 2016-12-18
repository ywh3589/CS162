/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/

/*
 2   * FibonacciR.h
 3   *
 4   *  Created on: Sep 10, 2010
 5   *      Author: julian
 6   */
 7
#include "FibonacciR.h"
  9  #include <iostream>
 10  
 11  FibonacciR::FibonacciR() {
 12  }
 13  
 14  FibonacciR::FibonacciR(const int &n):n_(&n){
 15  }
 16  
 17  FibonacciR::~FibonacciR() {
 18  }
 19  
 20  int FibonacciR::Fibonacci(const int &n){
 21  	if(n==0)
 22  		return 0;
 23  	else if(n==1)
 24  		return 1;
 25  	return Fibonacci(n-1) + Fibonacci(n-2);
 26  }
 27  void FibonacciR::PrintFibonacci(){
 28  	int FibonaciNum=Fibonacci(*n_);
 29  	std::cout<<*n_<<"th fibonaci number: "<<FibonaciNum<<std::endl;
 30  }
 8 
