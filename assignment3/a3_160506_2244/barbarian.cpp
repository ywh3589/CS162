#include "barbarian.hpp"


Barbarian::Barbarian()
{
   // attackPower = 2;
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "barbarian made" << endl;
}

#if 1
void Barbarian::ShowName()
{  
    cout << "is barbarian" << endl;

}
#endif

#if 1
int Barbarian::attack()
{  
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
   
    cout << " barbarian attack" << " " << att << endl;
    return att;

}
#endif

#if 1
void Barbarian::defense(int a)
{
    int def = 0;

    cout << "Barbarian defense" << endl;
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    
    cout << endl << "def " << def << endl;
    strength -= a - def - armor;
    
}
#endif
