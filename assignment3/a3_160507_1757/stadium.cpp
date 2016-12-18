#include "stadium.hpp"

Stadium::Stadium()
{
    pFighters = new Creature*[2];
    for(int i = 0; i < 2; i++)
    pFighters[i] = NULL;



}

void Stadium::ShowMenu()
{
  while(1)
  {
    int choose;
    cout << "chose the menu" << endl;
    cout << "1. Fight Start" << endl;
    cout << "2. Program End" << endl;

    cin >> choose;

    while(cin.fail() || ((choose != 1) && (choose != 2)))
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

#if 1
    if(choose == 1)
   {
        Fight();
        
    }
    else if(choose == 2 )
    {
        cout << "program end" << endl;
        break;
    } 
#endif  
  }

}
#if 0
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

#endif




void Stadium::Fight()
{
    cout << "now time to choose the chracters" << endl;
    int choose;

  for(int i = 0; i <2; i++)
  {
    cout << "chose the creatrues to fight" << endl;
    cout << "1. Medusa" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Baba Yaga" << endl;
    cout << "4. Blue men" << endl;
    cout << "5. Harry Potter" << endl;

    cin >> choose;
   // fighter[2];

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4) && (choose !=5)))
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
            pFighters[i] = new Medusa;
            cout << "i" << i << endl;
        
        
        cout << "medusa createdi and";
        cout << "registered as a fighter" << endl;
    }
    else if(choose == 2)
    {
        cout << "chose Barbarian" << endl;
        //medusa object created
            pFighters[i] = new Barbarian;
            cout << "i" << i << endl;
        
        
        
        cout << "Barbarian createdi and";
        cout << "registered as a fighter" << endl;
     
    
    }
    else if(choose == 3)
    {
        cout << "chose Baba yaga" << endl;
        //medusa object created
            pFighters[i] = new Baba_Yaga;
            cout << "i" << i << endl;
       
        
        
        cout << "Baba yaga createdi and";
        cout << "registered as a fighter" << endl;
    
    }
    else if(choose ==4 )
    {
        cout << "chose Bluemen" << endl;
        //medusa object created
            pFighters[i] = new Blue_men;
            cout << "i" << i << endl;
        
        
        
        cout << "Blue men created" << endl;
        cout << "registered as a fighter" << endl;
    }
    else if(choose == 5 )
    {
        cout << "chose harry potter" << endl;
        //medusa object created
          pFighters[i] = new Harry_Potter;
        
        
        
        cout << "Harry potter created" << endl;
        cout << "registered as a fighter" << endl;
    }

}
#if 0
// for(int i = 0; i < 2; i++)
   //  {
        for(int j = 0; j < 5; j++)
        {
            
            if(pCreature[j] != NULL)
           {
           cout << "fighters " << j << endl;
                pFighters[0] = pCreature[j];
                 pCreature[j] = NULL;
                cout << "made null" << endl;
            }
        }
        for(int j = 0; j < 5; j++)
        {
            
            if(pCreature[j] != NULL)
           {
           cout << "fighters " << j << endl;
                pFighters[1] = pCreature[j];
                 pCreature[j] = NULL;
                cout << "made null" << endl;
            }
        }
   
         
  //  }
    for(int i = 0; i <2; i++)
    {
        if(pFighters[i] != NULL)
        {
        cout << "no null" << endl;
        cout << "i" << i << endl;
        }
        if(pFighters[1] == NULL)
        cout << "1 is nul" << endl;
    
    }
   

    //cout << "fighters " << j << endl;

#endif



while(1)
    {
        
//      pFighters[0]->ShowName(); 
//printf("[%s:%d\n",__FILE__,__LINE__);
//      pFighters[1]->ShowName();
//printf("[%s:%d\n",__FILE__,__LINE__);
        
        int fighter1_sp = pFighters[0]->GetStrength();
        cout << "fighter1 sp " << fighter1_sp << endl;
        int fighter2_sp = pFighters[1]->GetStrength();
        cout << "fighter2 sp " << fighter2_sp << endl;
      
       sleep(1);
        int fighter1_attack = pFighters[0]->attack();
       sleep(1);
        pFighters[1]->defense(fighter1_attack);
       sleep(1);
        int fighter2_attack = pFighters[1]->attack();
       sleep(1);
        pFighters[0]->defense(fighter2_attack);
       sleep(1);
    
        int result = FightResult(); 
        if(result == 1)
        break;
    }
    
    
    
    
    
}
#endif
 
int Stadium::FightResult()
{
     int fighter1_sp = pFighters[0]->GetStrength();
     cout << "fighter1 sp " << fighter1_sp << endl;
     int fighter2_sp = pFighters[1]->GetStrength();
     cout << "fighter2 sp " << fighter2_sp << endl;

    if(fighter1_sp <= 0)
    {
        if(fighter2_sp <= 0)
        {
            cout << "fighter 1 and fighter 2 died" << endl;                 return 1; 
           
        }
        else if(fighter2_sp > 0)
        {
            cout << "fighter 1 lost" << endl;        
              return 1;
        }
    }
    else if(fighter1_sp > 0)
    {
        if(fighter2_sp <= 0)
        {
            cout << "fighter2 lost" << endl;        
                return 1;
        }   
    
    }

}






