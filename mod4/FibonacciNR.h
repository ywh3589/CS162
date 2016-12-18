/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
************************************************************************************/


/*
 2   * FibonacciNR.h
 3   *
 4   *  Created on: Sep 11, 2010
 5   *      Author: julian
 6   */
 7
 8  #ifndef FIBONACCINR_H_
 9  #define FIBONACCINR_H_
10
11  class FibonacciNR {
12  public:
13     FibonacciNR(const int &n);
14     virtual ~FibonacciNR();
15     void PrintFibonacci();
16  private:
17     FibonacciNR();
18     int Fibonacci(const int &n);
19     const int* n_;
20  };
21
22  #endif /* FIBONACCINR_H_ */

