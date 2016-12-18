#include "bluemen.hpp"


Blue_men::Blue_men()
{
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Blue_men made" << endl;
}

#if 1
void Blue_men::ShowName()
{  
    cout << "is blue men" << endl;

}
#endif
#if 1
int Blue_men::attack()
{  
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    cout << endl <<" barbarian attack" << " " << att << endl;
    return att;

}
#endif

#if 1
void Blue_men::defense(int a)
{
    int def = 0;
    int tempSt = strength;
    cout << "Blue_men defense";
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
   
    cout << def << endl;
    tempSt -= a - def - armor;
    
    if(tempSt >= strength)
    strength = strength;
    else if(tempSt < strength)
    strength = tempSt;

}
#endif
