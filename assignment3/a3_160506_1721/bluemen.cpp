#include "bluemen.hpp"


Blue_men::Blue_men()
{
   // attackPower = 2;
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Blue_men made" << endl;
}

#if 1
int Blue_men::attack()
{  
    cout << " Blue_men attack" << "-" << attackPower << endl;
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    return att;

}
#endif

#if 1
void Blue_men::defense(int a)
{
    int def = 0;

    cout << "Blue_men defense" << endl;
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    strength -= a - def - armor;
    
}
#endif
