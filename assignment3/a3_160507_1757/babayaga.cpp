#include "babayaga.hpp"


Baba_Yaga::Baba_Yaga()
{
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
    int att = 0;

    for(int i = 0; i < 2; i++)
      att += rand() % 6 + 1;
    
    cout << endl <<" Baba Yaga attack" << " " << att << endl;
    return att;

}
#endif

#if 1
void Baba_Yaga::defense(int a)
{
    int def = 0;
    int tempSt = strength;
    cout << "Baba Yaga defense";
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
