/********************************************************************************** 

**  Program Filename : FibonacciNR.h

**	Modifier: Woohyuk Yang

**  Date: June. 3rd. 2016

** Description: CS162 Mod4

** Input : 

** Output :  nth fibonacci number with Iterative implementation of fibonacci function 
************************************************************************************/



/*
 2   * FibonacciNR.h
 3   *
 4   *  Created on: Sep 11, 2010
 5   *      Author: julian
 6   */

  #ifndef FIBONACCINR_H_
  #define FIBONACCINR_H_

  class FibonacciNR {
  public:
     FibonacciNR(const int &n);
     virtual ~FibonacciNR();
     void PrintFibonacci();
  private:
     FibonacciNR();
     int Fibonacci(const int &n);
     const int* n_;
  };

  #endif /* FIBONACCINR_H_ */

