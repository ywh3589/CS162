/********************************************************************************** 

**  Program Filename : main.cpp

**	Author: Woohyuk Yang

**  Date: May. 15th. 2016

** Description: CS162 Mod2

** Input : 

** Output :  testing stack like and queue like structures
******************************************************************************/


#include "dyncharstack.hpp"
#include "dyncharqueue.hpp"
#include <iostream>
using namespace std;

int main()
{
    DynCharStack stack;
    DynCharQueue queue;


/* stack structure test*/
    stack.add('a');
    stack.add('b');
    stack.add('c');
    stack.add('d');

    cout << stack.remove() << endl;
    cout << stack.remove() << endl;
    cout << stack.remove() << endl;
    cout << stack.remove() << endl;
    cout << stack.remove() << endl;
    cout << stack.remove() << endl;

/* queue structure test*/
    queue.add('a');
    queue.add('b');
    queue.add('c');
    queue.add('d');
   
  cout <<  queue.remove()<< endl;
  cout <<  queue.remove()<< endl;
  cout <<  queue.remove()<< endl;
  cout <<  queue.remove()<< endl;
  cout <<  queue.remove()<< endl;
  cout <<  queue.remove()<< endl;

    return 0;

}
