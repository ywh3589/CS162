#include "harrypotter.hpp"


Harry_Potter::Harry_Potter()
{
   // attackPower = 2;
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Harry_Potter made" << endl;
}

#if 1
void Harry_Potter::ShowName()
{  
    cout << "is harry potter" << endl;

}
#endif
#if 1
int Harry_Potter::attack()
{  
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    return att;

}
#endif

#if 1
void Harry_Potter::defense(int a)
{
    int def = 0;

    cout << "Harry_Potter defense" << endl;
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    strength -= a - def - armor;
    
}
#endif
