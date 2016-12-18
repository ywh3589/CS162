/********************************************************************************** 

**  Program Filename : stadium.cpp

**	Author: Woohyuk Yang

**  Date: May.21st. 2016

** Description: CS162 Assignment4

** Input : creature kinds and names

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#include "stadium.hpp"

/********************************************************************* 
** Function : Stadium Constructor
** Description : A constructor for a Stadium class
** Parameters : none
** Pre-Conditions : double pointer to creature and roundNumber variable
** Post-Conditions : making a list composed of 2 pointer variables pointing to creature objects
					 setting round number to 1.
*********************************************************************/
Stadium::Stadium()
{
/*fight waiting list*/
   pQueue = new DynCharQueue[2];
#if 0 
/*fighting ground */
    pFighters = new Creature*[2];
    for(int i = 0; i < 2; i++)
    pFighters[i] = NULL;
#endif
    SetRoundNumber(1);

/*loser pile*/
    pStack = new DynCharStack;
}
/********************************************************************* 
** Function : SetRoundNumber
** Description : setting the round number of the fight to roundNumber variable
** Parameters : int roundNumber(round of the fight)
** Pre-Conditions : Stadium constructor, ShowMenu()
** Post-Conditions : setting the round number of fight to roundNumber variable
*********************************************************************/
void Stadium::SetRoundNumber(int r)
{
    roundNumber = r;
}
/********************************************************************* 
** Function : GetRoundNumber
** Description : returning the roundNumber of the fight
** Parameters : n/a
** Pre-Conditions : List constructor
** Post-Conditions : this function returns the value of roundNumber variable.
*********************************************************************/
int Stadium::GetRoundNumber() 
{
    return roundNumber;
}
/********************************************************************* 
** Function : SetNumOfCharacters
** Description : setting the number of characters to fight
** Parameters : int (number of characters)
** Pre-Conditions : Stadium constructor, ShowMenu()
** Post-Conditions : setting the number of the characters to fight to numOfCharacters variable
*********************************************************************/
void Stadium::SetNumOfCharacters(int n)
{
    numOfCharacters = n;
}
/********************************************************************* 
** Function : GetNumOfCharacters
** Description : returning the number of the fighters
** Parameters : n/a
** Pre-Conditions : List constructor
** Post-Conditions : this function returns the value of numOfCharacter variable.
*********************************************************************/
int Stadium::GetNumOfCharacters() 
{
    return numOfCharacters;
}
/********************************************************************* 
** Function : ShowMenu()
** Description : prompting user to choose the action
** Parameters : none
** Pre-Conditions : Stadium constructor
** Post-Conditions : FighterChoose(), Fight(), FightResult(), qutting the program
*********************************************************************/
void Stadium::ShowMenu()
{
  while(1)
  {
    int choose;
    cout << "chose the menu" << endl;
    cout << "1. Fight Start" << endl;
    cout << "2. Program End" << endl;

    cin >> choose;

    while(cin.fail() || ((choose != 1) && (choose != 2)))     //validating process
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

#if 1
    if(choose == 1)
   {
        cin.get();
        FighterChoose();
      
      cout << "team 1 queue" << endl;
       pQueue[0].PrintQueue();
      cout << "team 2 queue" << endl;
       pQueue[1].PrintQueue();
      
      sleep(2);

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

/********************************************************************* 
** Function : FighterChoose()
** Description : prompting user to choose the two fighters
** Parameters : none
** Pre-Conditions : Stadium constructor
** Post-Conditions : Fight(), FightResult()
*********************************************************************/
void Stadium::FighterChoose()
{
#if 1

    int a = 0;

    cout << "now enter the number of fighters" << endl;
    
    int numOfCharacters;

    cin >> numOfCharacters;

    while(cin.fail() || (numOfCharacters <= 0)  )    //validation process
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> numOfCharacters;
        
    }

    SetNumOfCharacters(numOfCharacters);

    int num_char = GetNumOfCharacters();

    
for(int i = 0; i < 2; i++)
 {

    int choose;
 #if 1

    cout << endl <<  "Number of character:" << numOfCharacters << endl;
  for(int i = 0; i < num_char; i++)
  {
    cout << "chose the creatrues to fight" << endl;
    cout << "1. Medusa" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Baba Yaga" << endl;
    cout << "4. Blue men" << endl;
    cout << "5. Harry Potter" << endl;

    cin >> choose;
  

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4) && (choose !=5)))    //validation process
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

     
    if(choose == 1)
    {
        cout << "chose Medusa" << endl;
        pQueue[a].add(1);
    }
    else if(choose == 2)
    {
        cout << "chose Barbarian" << endl;
        pQueue[a].add(2);
     
    
    }
    else if(choose == 3)
    {
        cout << "chose Baba Yaga" << endl;
        pQueue[a].add(3);
    
    }
    else if(choose ==4 )
    {
        cout << "chose Blue men" << endl;
        pQueue[a].add(4);
    }
    else if(choose == 5 )
    {
        cout << "chose Harry Potter" << endl;
        pQueue[a].add(5);
        
        
    }


    }
#endif


    a++;
    

  }
#endif



}


/********************************************************************* 
** Function : Fight()
** Description : Fight happens here in this function
** Parameters : none
** Pre-Conditions : Stadium constructor
** Post-Conditions : FightResult()
*********************************************************************/
void Stadium::Fight()
{
 //bringing the characters in the list to the array.
printf("%s:%d\n",__FILE__,__LINE__);
printf("%s:%d\n",__FILE__,__LINE__);
 
#if 1 
 
 
 int a = this->GetRoundNumber();

//int b = this->GetNumOfCharacters();
int c = 0;

while(1)
    {

       string f1 = pQueue[0].GetFront()->GetCreature()->GetName();
       string f2 = pQueue[1].GetFront()->GetCreature()->GetName();
       
 

        cout << endl << endl << endl << "Round " << a << " Start" << endl << endl;    //new round starts here
        cout << endl << "stregnth points before round " << a << endl;

        int fighter1_sp = pQueue[0].GetFront()->GetCreature()->GetStrength();
        cout << f1 << " has " << fighter1_sp << " strength points left" << endl;
        int fighter2_sp = pQueue[1].GetFront()->GetCreature()->GetStrength();
        cout << f2 << " has " << fighter2_sp  <<" strength points left" << endl << endl;
       
       /*fighter1 attacks and fighter2 defense*/
        sleep(1);
        int fighter1_attack = pQueue[0].GetFront()->GetCreature()->attack();
       sleep(1);
      
        pQueue[1].GetFront()->GetCreature()->defense(fighter1_attack);
       sleep(1);

       cout << endl;
       /*fighter2 attacks and fighter1 defense*/
        int fighter2_attack = pQueue[1].GetFront()->GetCreature()->attack();
         sleep(1);
        pQueue[0].GetFront()->GetCreature()->defense(fighter2_attack);
        sleep(1);
        
        /*figuring out the result*/
      #if 1
        int result = FightResult(); 
        if((result == 1) || (result  == 2) || (result == 3))
        {
       //variable is needed to make the next fighter fights each other 
            c++;
            a = 0;
         
         
         
      cout << endl <<  "team 1 queue" << endl;
       pQueue[0].PrintQueue();
    //   pQueue[0].SortQueue();
      // sleep(5);
       

  #if 0      
       //sorting place
       int num_q_0 = pQueue[0].CountQueue();
        pFighters_0 = new Creature*[num_q_0];
        for(int i = 0; i < num_q_0; i++)
        pFighters_0[i] = NULL;

        QueueNode *pFront_0 = pQueue[0].GetFront();

        while(pFront_0 != NULL)
        {
            for(int i = 0; i < num_q_0; i++)
            {
                 pFighters_0[i] = pQueue[0].GetFront()->GetCreature();
            }
        
        
        
               pFront_0 = pFront_0->next;
        }

        
     #endif 
      
      
      cout << endl << "team 2 queue" << endl;
       pQueue[1].PrintQueue();
    //   pQueue[1].SortQueue();
      // sleep(5);
    
    #if 0
       //sorting place             
    
    int num_q_1 = pQueue[1].CountQueue();
        pFighters_1 = new Creature*[num_q_1];
        for(int i = 0; i < num_q_1; i++)
        pFighters_1[i] = NULL;
        QueueNode *pFront_1 = pQueue[1].GetFront();

        while(pFront_1 != NULL)
        {
            for(int i = 0; i < num_q_1; i++)
            {
                 pFighters_1[i] = pQueue[1].GetFront()->GetCreature();
            }
        
        
        
               pFront_1 = pFront_1->next;
        }

        #endif          
             
             pStack->PrintStack();
            if((pQueue[0].GetFront() == NULL) ||(pQueue[1].GetFront() == NULL) || (result == 2) || (result == 3))//  if( c == b)
            {
               cout << "break" << endl;
             #if 1
             
             int choose; 

                 cout << "Do you want to see the result of the game?" << endl;
                 cout << "1. Yes" << endl;
                 cout << "2. No" << endl;
             
                 cin >> choose;
               
             
                 while(cin.fail() || ((choose != 1) && (choose != 2)))    //validation process
                 {
                     cin.clear();
                     cin.ignore(100000000, '\n');
                     cout << endl << "invalid! input proper number" << endl << endl;
                     cin >> choose;
                     
                 }
             
                 /*when the user wants to know the result of the game*/ 
                 if(choose == 1)
                 {
                     cout << "the first and second and third finishers are" << endl;
                      cout << "the number of creatures stored in team 1  = " << pQueue[0].CountQueue() << endl;
                      cout << "the number of creatures stored in team 2  = "  << pQueue[1].CountQueue() << endl;
                     

                       cout << endl <<  "team 1 queue" << endl;
                        pQueue[0].PrintQueue();
                        pQueue[0].SortQueue();
                       cout << endl << "team 2 queue" << endl;
                        pQueue[1].PrintQueue();
                        pQueue[1].SortQueue();


                        if((pQueue[0].CountQueue() > pQueue[1].CountQueue()))
                        {
                            cout << "player 1's team has won! Congrats! " << endl;
                            
                            if( pQueue[0].CountQueue() >=3 ) /*when 1 team has at least 3 creatures left in the queue*/
                            {
                                
                                 pQueue[0].SortQueue();
                            
                            
                            }
                            else /*when there are creatures less than 3 remaining in the queue*/
                            {
                                int n = pQueue[0].CountQueue();

                                for(int i = n; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                            }
                        
                        }
                        else if((pQueue[0].CountQueue() < pQueue[1].CountQueue()))
                        {
                            cout << "player 2's team has won! Congrats! " << endl;
                            if( pQueue[1].CountQueue() >=3 )
                            {
                                
                                 pQueue[1].SortQueue();
                            
                            
                            }
                            else
                            {
                                int n = pQueue[1].CountQueue();

                                for(int i = n; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                            }
                        
                        }
                        else if((pQueue[1].CountQueue() == pQueue[0].CountQueue() ))
                        {
                            cout << "player 1 and 2 are tied! " << endl;
                                for(int i = 0; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                        
                        }


                        
                    cout << endl << "loser piled stack" << endl;
                    pStack->PrintStack();


                     pQueue[0].DeleteQueue();
                     pQueue[1].DeleteQueue();
                     pStack->DeleteStack();


                        break;


                 }
                 /*when the user does not want to know about the result of the game*/
                 else if(choose == 2)
                 {
                     pQueue[0].DeleteQueue();
                     pQueue[1].DeleteQueue();
                     pStack->DeleteStack();
                  
                        break; 
                 }
               #endif

              //whenever each fight ends, there sould be some function to empty the queue.
              
           
           }
           /*when baba vs.baba  case happens, they both will be sent to the pile unfortunately*/
            #if 1
            else if((pQueue[0].GetFront()->GetCreature()->GetName() == "Baba Yaga" ) && (pQueue[1].GetFront()->GetCreature()->GetName() == "Baba Yaga"))
            {
                
           /*stacking baba yaga's to the stack pile*/

           cout << "baba yaga met each other, they will be sent to the loser stack unfortunatley." << endl;
           
           Creature * pBaba_0 = pQueue[0].GetFront()->GetCreature();
           pStack->LoserAdd(pBaba_0);
           pQueue[0].remove();
           
           
           Creature * pBaba_1 = pQueue[1].GetFront()->GetCreature();
           pStack->LoserAdd(pBaba_1);
           pQueue[1].remove();


            /*the case when there is no more creature left in the queue after baba yaga is sent to the stack*/

            if((pQueue[0].GetFront() == NULL) ||(pQueue[1].GetFront() == NULL) || (result == 2) || (result == 3))//  if( c == b)
            {
               cout << "break" << endl;

            //whenever each fight ends, there sould be some function to empty the queue.
           
             int choose; 

                 cout << "Do you want to see the result of the game?" << endl;
                 cout << "1. Yes" << endl;
                 cout << "2. No" << endl;
             
                 cin >> choose;
               
             
                 while(cin.fail() || ((choose != 1) && (choose != 2)))    //validation process
                 {
                     cin.clear();
                     cin.ignore(100000000, '\n');
                     cout << endl << "invalid! input proper number" << endl << endl;
                     cin >> choose;
                     
                 }
             
                  
                 /*when the user wants to know the result of the game*/ 
                 if(choose == 1)
                 {
                     cout << "the first and second and third finishers are" << endl;
                      cout << "the number of creatures stored in team 1  = " << pQueue[0].CountQueue() << endl;
                      cout << "the number of creatures stored in team 2  = "  << pQueue[1].CountQueue() << endl;
                     

                       cout << endl <<  "team 1 queue" << endl;
                        pQueue[0].PrintQueue();
                        pQueue[0].SortQueue();
                       cout << endl << "team 2 queue" << endl;
                        pQueue[1].PrintQueue();
                        pQueue[1].SortQueue();


                        if((pQueue[0].CountQueue() > pQueue[1].CountQueue()))
                        {
                            cout << "player 1's team has won! Congrats! " << endl;
                            
                            if( pQueue[0].CountQueue() >=3 )
                            {
                                
                                 pQueue[0].SortQueue();
                            
                            
                            }
                            else
                            {
                                int n = pQueue[0].CountQueue();

                                for(int i = n; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                            }
                        
                        }
                        else if((pQueue[0].CountQueue() < pQueue[1].CountQueue()))
                        {
                            cout << "player 2's team has won! Congrats! " << endl;
                            if( pQueue[1].CountQueue() >=3 )
                            {
                                
                                 pQueue[1].SortQueue();
                            
                            
                            }
                            else
                            {
                                int n = pQueue[1].CountQueue();

                                for(int i = n; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                            }
                        
                        }
                        else if((pQueue[1].CountQueue() == pQueue[0].CountQueue() ))
                        {
                            cout << "player 1 and 2 are tied! " << endl;
                                for(int i = 0; i < 3; i++)
                                {
                                    if(pStack->GetTop() == NULL)
                                    {
                                        cout << "nothing left in stak" << endl;
                                        return;
                                    }
                                    cout <<  "# " << i+1 << "rank is " << pStack->GetTop()->GetCreature()->GetName() << " : strength power: " << pStack->GetTop()->GetCreature()->GetStrength() << endl;
                                    pStack->remove();
                                }
                        
                        }


                        
                    cout << endl << "loser piled stack" << endl;
                    pStack->PrintStack();


                     pQueue[0].DeleteQueue();
                     pQueue[1].DeleteQueue();
                     pStack->DeleteStack();


                        break;


                 }

                 /*when the user does not want to know about the result of the game*/
                 else if(choose == 2)
                 {
                     pQueue[0].DeleteQueue();
                     pQueue[1].DeleteQueue();
                     pStack->DeleteStack();
                  
                        break; 
                 }
               #endif


          }
           
            #endif
            }
            #endif
        }
       
        a++;
        this->SetRoundNumber(a);
    }
 
}
/********************************************************************* 
** Function : FightResult()
** Description : figuring out who won and who lost
** Parameters : none
** Pre-Conditions : Stadium constructor
** Post-Conditions : the result of the fight
*********************************************************************/ 
int Stadium::FightResult()
{
       string f1 = pQueue[0].GetFront()->GetCreature()->GetName();
       string f2 = pQueue[1].GetFront()->GetCreature()->GetName();
     
        int a = this->GetRoundNumber();
     
        int fighter1_sp = pQueue[0].GetFront()->GetCreature()->GetStrength();
        int fighter2_sp = pQueue[1].GetFront()->GetCreature()->GetStrength();

     


   
    if(fighter1_sp <= 0)
    {/*both creatures die*/
        if(fighter2_sp <= 0)
        {
             cout << endl << "The match result!!" << endl << endl;
            cout << f1<< " and "<< f2 << " died." << endl;                 
            this->SetRoundNumber(1);
            //when one is lost then it should be sent to the loser pile and the winner should  go to the back of the queue. 
           
            
            /*making the winner recovered for the next fight*/
            pQueue[0].GetFront()->GetCreature()->WinnerRecover();
            pQueue[1].GetFront()->GetCreature()->WinnerRecover();
           
           
           
           /*sending the fightes(who tied) back to the queue */
            cout << pQueue[0].BackToQueue() << " will have another chance to fight" << endl;
            cout << pQueue[1].BackToQueue() << " will have another chance to fight" << endl;      
            
            string winner_1 = pQueue[0].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_1 << endl;
            string winner_2 = pQueue[1].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_2 << endl;
           return 1; 
           
        }
        else if(fighter2_sp > 0)
        {/*fighter1 dies and loose*/
            cout << endl << "The match result!!" << endl << endl;
            cout << f1 << " lost" << endl;        
            this->SetRoundNumber(1);
           
            /*making the winner recovered for the next fight*/
            pQueue[1].GetFront()->GetCreature()->WinnerRecover();
           
           /*sending the winnere back to the queue */
            cout << "the winner is " << pQueue[1].BackToQueue() << endl;
           
            string winner_2 = pQueue[1].GetFront()->GetCreature()->GetName();
            cout << "the next fighter in the queue is" << winner_2 << endl; 
           /*stacking losers to the stack pile*/
           
           Creature * pLoser = pQueue[0].GetFront()->GetCreature();
           pStack->LoserAdd(pLoser);
           cout << "The losers is" << pStack->GetTop()->GetCreature()->GetName() << endl;
            pQueue[0].remove();

    if(pQueue[0].GetFront() != NULL)
    {
            string winner_1 = pQueue[0].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_1 << endl;
     }
              
            return 1;
        }
    }
    else if(fighter1_sp > 0)
    {
        if(fighter2_sp <= 0)
        {/*fighter2 dies and loose*/
            cout << endl << "The match result!!" << endl << endl;
            cout << f2 << " lost" << endl;        
            this->SetRoundNumber(1);
           
            /*making the winner recovered for the next fight*/
            pQueue[1].GetFront()->GetCreature()->WinnerRecover();
          
          /*sending a winner to the back of the queue*/
           cout << "the winnter is " << pQueue[0].BackToQueue() << endl;
            string winner_2 = pQueue[0].GetFront()->GetCreature()->GetName();
            cout << "the next fighter in the queue is" << winner_2 << endl; 
            
           /*stacking losers to the stack pile*/
           
           Creature * pLoser = pQueue[1].GetFront()->GetCreature();
           pStack->LoserAdd(pLoser);
           pQueue[1].remove();
   
    if(pQueue[1].GetFront() != NULL)
    {
            string winner_1 = pQueue[1].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_1 << endl;
     }
            return 1;
        }   
        if(fighter1_sp >= 100)                                   //if both character's strength points go up over 100 then the game is tie. 
        {
            if(fighter2_sp >= 100)
            {
                cout << endl << "The match result!!" << endl << endl;
                cout <<  " DRAW, both fought well" << endl;        
                this->SetRoundNumber(1);
            /*making the winner recovered for the next fight*/
            
            pQueue[0].GetFront()->GetCreature()->WinnerRecover();
            pQueue[1].GetFront()->GetCreature()->WinnerRecover();
            
            
            pQueue[0].BackToQueue();
            pQueue[1].BackToQueue();
            string winner_1 = pQueue[0].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_1 << endl;
            string winner_2 = pQueue[1].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_2 << endl;
                return 2;
            }
        }   
    }
    else if( a >= 100)                                          //if round number goes up over 100 then the game is tie. 
    {
        cout << endl << "The match result!!" << endl << endl;
        cout << "DRAW, both fought well." << endl;
        this->SetRoundNumber(1);
            /*making the winner recovered for the next fight*/
            
            pQueue[0].GetFront()->GetCreature()->WinnerRecover();
            pQueue[1].GetFront()->GetCreature()->WinnerRecover();
            
            
            
            pQueue[0].BackToQueue();
            pQueue[1].BackToQueue();
            string winner_1 = pQueue[0].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_1 << endl;
            string winner_2 = pQueue[1].GetFront()->GetCreature()->GetName();
            cout << "the next fighter is " << winner_2 << endl;
        return 3;
    }
    
    return 0;
}






