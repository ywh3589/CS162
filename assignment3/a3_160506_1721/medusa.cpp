#include "medusa.hpp"


Medusa::Medusa()
{
   // attackPower = 2;
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Medusa made" << endl;
}

#if 1
int Medusa::attack()
{  
    cout << " Medusa attack" << "-" << attackPower << endl;
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    return att;

}
#endif

#if 1
void Medusa::defense(int a)
{
    int def = 0;

    cout << "Medusa defense" << endl;
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    strength -= a - def - armor;
    
}
#endif
