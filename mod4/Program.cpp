/********************************************************************************** 

**  Program Filename : state.hpp

**	Author: Woohyuk Yang

**  Date: May. 5th. 2016

** Description: CS162 ModE

** Input : 

** Output :  STD simulation 
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
10
11  #include <iostream>
12  #include <stdlib.h>
13  #include "FibonacciR.h"
14  #include "FibonacciNR.h"
15  using namespace std;
16  void Usage(){
17     cout<<"Correct Usage:"<<endl;
18     cout<<"./Fibonacci [n]"<<endl;
19  }
20  int main(int argc, char** args) {
21     try{
22         const char* input; //Note: char by default initializes to '\0'
23         if(args[1]!=0)
24         {
25             cout<<"1st passed arguement: '"<<args[1]<<"'"<<endl;
26             input= args[1];
27         }
28         int n= atoi(input);
29         cout<<"Finding '"<<n<<"'th "<<"fibonacci number...."<<endl;
30         cout<<"Calling Recursive Fibonacci implementation"<<endl;
31         FibonacciR fr(n);
32         fr.PrintFibonacci();
33         cout<<"Calling Non-Recursive Fibonacci implementation"<<endl;
34         FibonacciNR fnr(n);
35         fnr.PrintFibonacci();
36         cout << "Done!!!!" << endl;
37         return 0;
38     }
39     catch(...)
40     {
41         cout<<"Oops an error occured! Please check usage"<<endl;
42         Usage();
43         return 1;
44     }
45  }

