#include "babayaga.hpp"


Baba_Yaga::Baba_Yaga()
{
   // attackPower = 2;
    strength = 12;
    armor = 0;
    unsigned seed;
    seed = time(NULL);
    srand(seed);



    cout << "Baba_Yaga made" << endl;
}

#if 1
void Baba_Yaga::ShowName()
{  
    cout << "is babayaga" << endl;

}
#endif
#if 1
int Baba_Yaga::attack()
{  
    cout << " Baba_Yaga attack" << "-" << attackPower << endl;
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    return att;

}
#endif

#if 1
void Baba_Yaga::defense(int a)
{
    int def = 0;

    cout << "Baba_Yaga defense" << endl;
    for(int i = 0; i < 2; i++)
     def += rand() % 6 + 1;
    strength -= a - def - armor;
    
}
#endif
