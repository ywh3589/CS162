#include <iostream>

using namespace std;

void func(int &x, int &y);
int main()
{
    int a, b;

    cout << "type a" << endl;
    cin >> a;

    cout << "type b" << endl;
    cin >> b;

    func(a, b);
    cout << a + b << endl;
    
    return 0;
}

void func(int &x, int &y)
{
    int i = x;
    int j = y;

    cout << "sum" << i + j << endl;


}
