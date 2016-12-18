/********************************************************************************** 

**  Program Filename : FibonacciR.cpp

**	Modifier: Woohyuk Yang

**  Date: June. 3rd. 2016

** Description: CS162 Mod4

** Input : 

** Output :  nth fibonacci number with Recursive implementation of fibonacci function 
************************************************************************************/
/*
 2   * FibonacciR.h
 3   *
 4   *  Created on: Sep 10, 2010
 5   *      Author: julian
 6   */
 
#include "FibonacciR.h"
  #include <iostream>
  
  FibonacciR::FibonacciR() {
  }
  
  FibonacciR::FibonacciR(const int &n):n_(&n){
  }
  
  FibonacciR::~FibonacciR() {
  }
  
  int FibonacciR::Fibonacci(const int &n){
  	if(n==0)
  		return 0;
  	else if(n==1)
  		return 1;
  	return Fibonacci(n-1) + Fibonacci(n-2);
  }
  void FibonacciR::PrintFibonacci(){
  	int FibonaciNum=Fibonacci(*n_);
  	std::cout<<*n_<<"th fibonaci number: "<<FibonaciNum<<std::endl;
  }
  
