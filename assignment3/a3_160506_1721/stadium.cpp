#include "stadium.hpp"

Stadium::Stadium(int n)
{
    pCreature = new Creature*[n];
    for(int i = 0; i < n; i++)
    pCreature[i] = NULL;
}

void Stadium::ShowMenu()
{
  while(1)
  {
    int choose;
    cout << "chose the creatrues to fight" << endl;
    cout << "1. Medusa" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Baba Yaga" << endl;
    cout << "4. Blue men" << endl;
    cout << "5. Harry Potter" << endl;
    cout << "6. Program End" << endl;

    cin >> choose;

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4) && (choose !=5)&& (choose !=6)))
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

     
    
    
#if 1
    if(choose == 1)
    {
        cout << "chose Medusa" << endl;
        //medusa object created
        pCreature[1] = new Medusa;
        cout << "medusa created" << endl;
    
       // pMedusa->setAttackPower(29);
       //  pMedusa->attack();
    }
    else if(choose == 2)
    {
        cout << "chose Barbarian" << endl;
        //medusa object created
        //Barbarian* pBarbarian = new Barbarian;
        pCreature[2] = new Barbarian;
        
        cout << "Barbarian created" << endl;
     
    
    }
    else if(choose == 3)
    {
        cout << "chose Baba Yaga" << endl;
        //medusa object created
      //  Baba_Yaga* pBaba_Yaga = new Baba_Yaga;
        cout << "Baba Yaga created" << endl;
        pCreature[3] = new Baba_Yaga;
    
    }
    else if(choose ==4 )
    {
        cout << "chose Blue men" << endl;
        //medusa object created
        //
        pCreature[4] = new Blue_men;
       // Blue_men* pBlue_men = new Blue_men;
        cout << "Blue men created" << endl;
    }
    else if(choose == 5 )
    {
        cout << "chose HarryPotter" << endl;
        //medusa object created
       // Harry_Potter* pHarryPotter = new Harry_Potter;
        pCreature[5] = new Harry_Potter;
        cout << "Harry Potter created" << endl;
    }
    else if(choose == 6 )
    {
        cout << "program end" << endl;
        break;
    } 
#endif  
  }

}
