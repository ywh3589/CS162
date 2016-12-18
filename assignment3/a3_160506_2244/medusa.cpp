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
void Medusa::ShowName()
{  
    cout << "is medusa" << endl;

}
#endif
#if 1
int Medusa::attack()
{  
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    

    cout << " medusa attack" << " " << att << endl;
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
    
    
    cout << endl <<"def " << def << endl;
    
    strength -= a - def - armor;
    
}
#endif
