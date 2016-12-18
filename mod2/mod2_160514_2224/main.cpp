#include "dynintstack.hpp"
#include <iostream>
using namespace std;

int main()
{
    DynIntStack stack;
    int a;
    stack.push(10);

    stack.push(20);

    stack.pop(a);
    cout << a << endl;
    stack.pop(a);
    cout << a<< endl;

    return 0;

}
