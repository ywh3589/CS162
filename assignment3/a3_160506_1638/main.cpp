#include <iostream>
//#include <ctime>
//#include <cstlib>
//#include "creature.hpp"
#include "stadium.hpp"

using namespace std;
#if 0
class Creature{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a)
        {
            attackPower = a;
        }
        virtual void attack()=0;
};
#endif
#if 0
class Medusa: public Creature{
    public:
        
        void attack()
        {  cout << " medusa attack" << "-" << attackPower << endl;}


};

class Barbarian: public Creature{
    public:
        void attack()
        {  cout << " barbarian attack" << "-" << attackPower << endl;}


};

class Baba_Yaga: public Creature{
    public:
        void attack()
        {  cout << " baba attack" << "-" << attackPower << endl;}


};

class Blue_men: public Creature{
    public:
        void attack()
        {  cout << " bluemen attack" << "-" << attackPower << endl;}


};

class Harry_Potter: public Creature{
    public:
        void attack()
        {  cout << " harrypotter attack" << "-" << attackPower << endl;}


};
#endif
int main()
{
#if 0
    Ninja n;
    Monster m;

    Creature *enemy1 = &n;
    Creature *enemy2 = &m;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(30);

    enemy1->attack();
    enemy2->attack();
#endif
   Stadium s1(5); 


    s1.ShowMenu();


    return 0;
}
