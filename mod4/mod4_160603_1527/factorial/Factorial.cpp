/********************************************************************************** 

**  Program Filename : Factorial.cpp

**	Modifier: Woohyuk Yang

**  Date: 2nd. June. 2016

** Description: CS162 Mod4

** Input : 

** Output :  the execution time for non tail recursive and tail recursive implementation of factorial function 
************************************************************************************/

#include <iostream>
#include <cmath>
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;
//Not tail Recursive
#if 1
/********************************************************************* 
** Function : NTRfactorial
** Description : A factorial function with not tail recursive implementation
** Parameters : unsigned long long int 
** Pre-Conditions : 
** Post-Conditions : returning the number of nth factorial 
*********************************************************************/
unsigned long long int NTRfactorial(unsigned long long int n)
{
    if( n == 1)
        return 1;
    else
        return n * NTRfactorial(n-1);

}
#endif


//Tail Recursive
#if 1
/********************************************************************* 
** Function : TRfactorialHelper
** Description : makes the TRfactorial's result calculated.
** Parameters : unsigned long long int, unsigned long long int 
** Pre-Conditions : TRfactorial function should call this function.
** Post-Conditions :  returning the number of nth factorial 
*********************************************************************/
unsigned long long int TRfactorialHelper(unsigned long long int n,unsigned  long long int result)
{
    if( n == 1)
        return result;
    else
        return TRfactorialHelper(n-1, n *result);
}


/********************************************************************* 
** Function : TRfactorial
** Description : makes the function start calling TRfactorailHelper
** Parameters : unsigned long long int
** Pre-Conditions : 
** Post-Conditions :  TRfactorial function should be call. 
*********************************************************************/
unsigned long long TRfactorial(unsigned long long int n)
{
    return TRfactorialHelper(n, 1);
}
#endif



int main()
{
using namespace::std::chrono;
         int n;
         cout << "input the number" << endl;
         cin >> n;


/*tail recursive factorial*/
           
         cout<<"Calling Tail Recursive Factorial implementation"<<endl;
         
         cout << "Calculating...time for Tail  Recursive Factorial implementation" << endl;
         
high_resolution_clock::time_point t1 = high_resolution_clock::now();
         for(int i = 0; i < n; i++)
         for(int j = 0; j < n; j++)
         TRfactorial(n);
         unsigned long long int number1 = TRfactorial(n);
         cout << "the number is " <<  number1 << endl;
high_resolution_clock::time_point t2 = high_resolution_clock::now();

duration<double> time_span_tail = duration_cast<duration<double>>(t2-t1);

cout << "it took me using high resolution " << time_span_tail.count() << " seconds" << endl << endl << endl;
         

/*non tail recursive factorial*/


         cout<<"Calling Non Tail Recursive Factorial implementation"<<endl;
         
         cout << "Calculating...time for Not Tail  Recursive Factorial implementation" << endl;

high_resolution_clock::time_point t3 = high_resolution_clock::now();
           for(int i = 0; i < n; i++)
           for(int j = 0; j < n; j++)
           NTRfactorial(n);
           unsigned long long int num = NTRfactorial(n);
           cout << "number is " << num << endl;
high_resolution_clock::time_point t4 = high_resolution_clock::now();
       
duration<double> time_span_not = duration_cast<duration<double>>(t4-t3);
       
cout << "it took me using high resolution " << time_span_not.count() << " seconds" << endl;

         
         cout << "Done!!!!" << endl;
         return 0;
}
