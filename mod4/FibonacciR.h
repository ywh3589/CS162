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
 8  #ifndef FIBONACCIR_H_
 9  #define FIBONACCIR_H_
10
11  class FibonacciR {
12  public:
13     FibonacciR(const int &n);
14     virtual ~FibonacciR();
15     void PrintFibonacci();
16  private:
17     FibonacciR();
18     int Fibonacci(const int &n);
19     const int *n_;
20  };
21
22  #endif /* FIBONACCIR_H_ */

