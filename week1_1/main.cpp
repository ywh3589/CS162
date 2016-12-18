#include "critter.hpp"

//using namespace std;

int main()
{
    int a, b;

    cout << "enter rows" << endl;
    cin >> a;
    cout << "enter columns" << endl;
    cin >> b;
    cin.get(); 
//    cin.get();

    Grid grid(a, b);
    Critter critter(&grid);

    critter.MoveCritter(&grid);






    return 0;
}
