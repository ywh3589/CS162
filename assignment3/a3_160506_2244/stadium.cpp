#include "stadium.hpp"

Stadium::Stadium(int n)
{
    cout << "num of fighter is " << n << endl;
    pCreature = new Creature*[n];
    for(int i = 0; i < n; i++)
    pCreature[i] = NULL;

   // pFighters = new Creature*[2];
   // for(int i = 0; i < 2; i++)
  //  pCreature[i] = NULL;


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
    cout << "6. Fight" << endl;
    cout << "7. Program End" << endl;

    cin >> choose;
   // fighter[2];

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4) && (choose !=5)&& (choose !=6)&&(choose !=7)))
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
        pCreature[0] = new Medusa;
        cout << "medusa createdi and";
     //   pFighters[0] = new Medusa;
        cout << "registered as a fighter" << endl;
       // pMedusa->setAttackPower(29);
       //  pMedusa->attack();
    }
    else if(choose == 2)
    {
        cout << "chose Barbarian" << endl;
        //medusa object created
        //Barbarian* pBarbarian = new Barbarian;
        cout << "Barbarian created and ";
        pCreature[1] = new Barbarian;
        cout << "registered as a fighter" << endl;
     
    
    }
    else if(choose == 3)
    {
        cout << "chose Baba Yaga" << endl;
        //medusa object created
      //  Baba_Yaga* pBaba_Yaga = new Baba_Yaga;
        cout << "Baba Yaga created" << endl;
        pCreature[2] = new Baba_Yaga;
    
    }
    else if(choose ==4 )
    {
        cout << "chose Blue men" << endl;
        //medusa object created
        //
        pCreature[3] = new Blue_men;
       // Blue_men* pBlue_men = new Blue_men;
        cout << "Blue men created" << endl;
    }
    else if(choose == 5 )
    {
        cout << "chose HarryPotter" << endl;
        //medusa object created
       // Harry_Potter* pHarryPotter = new Harry_Potter;
        pCreature[4] = new Harry_Potter;
        cout << "Harry Potter created" << endl;
    }
    else if(choose == 6 )
    {
        cout << "Fight start" << endl;
         Fight();
    } 
    else if(choose == 7 )
    {
        cout << "program end" << endl;
        break;
    } 
#endif  
  }

}


void Stadium::Fight()
{
    cout << "now time to choose the chracters" << endl;
//    ShowMenu();

   // for(int i = 0; i < 5; i++)

    pFighters = new Creature*[2];
    cout << "fighters list made" << endl;
#if 1
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(pCreature[j] != NULL)
           {
   // cout << "fighters " << j << endl;
                pFighters[i] = pCreature[j];
                pCreature[j] = NULL;
                cout << "made null" << endl;
            }
        }
   
    }
    //cout << "fighters " << j << endl;
    while(1)
    {
        
      pFighters[0]->ShowName(); 
printf("[%s:%d\n",__FILE__,__LINE__);
      pFighters[1]->ShowName();
printf("[%s:%d\n",__FILE__,__LINE__);
        
        int fighter1_sp = pFighters[0]->GetStrength();
        cout << "fighter1 sp " << fighter1_sp << endl;
        int fighter2_sp = pFighters[1]->GetStrength();
        cout << "fighter2 sp " << fighter2_sp << endl;
      
       sleep(2);
        int fighter1_attack = pFighters[0]->attack();
       sleep(2);
        pFighters[1]->defense(fighter1_attack);
       sleep(2);
        int fighter2_attack = pFighters[1]->attack();
       sleep(2);
        pFighters[0]->defense(fighter2_attack);
       sleep(2);
    
        if(fighter1_sp <= 0)
        cout << "figher1 died" << endl;
       sleep(2);
        if(fighter2_sp <= 0)
        cout << "fighter2 died" << endl;
       sleep(2);
    
    }
    
    
    
    
    
    
    }
#endif
   






