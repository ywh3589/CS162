/********************************************************************************** 

**  Program Filename : valkyrie.cpp

**	Author: Woohyuk Yang

**  Date: May.21st. 2016

** Description: CS162 Assignment4

** Input : creature kinds and names

** Output : a simulation program letting two creatures fight till the result comes up. 
************************************************************************************/
#include "valkyrie.hpp"

/********************************************************************* 
** Function : Valkyrie Constructor
** Description : A constructor for a Valkyrie class
** Parameters : none
** Pre-Conditions : double pointer to creature and roundNumber variable
** Post-Conditions : making a list composed of 2 pointer variables pointing to creature objects
					 setting round number to 1.
*********************************************************************/
Valkyrie::Valkyrie()
{
#if 0
   pQueue = new DynCharQueue; // as this queue is made, hittler's castle gets made
printf("[%s:%d]\n",__FILE__,__LINE__);
pQueue->PrintQueue();
printf("[%s:%d]\n",__FILE__,__LINE__);
#endif
#if 0
//spaces are made
    Entrance entrance;
    Room agentRoom(1);
    Lobby lobby;
    Room dogRoom(2);
    Room hittlerRoom(3);

//spaces are linkked
    head = &entrance;
    curr = head;

    entrance.SetNext(&agentRoom);
    entrance.SetPrev(NULL);

    agentRoom.SetNext(&lobby);
    agentRoom.SetPrev(&entrance);

    lobby.SetNext(&dogRoom);
    lobby.SetPrev(&agentRoom);
    
    dogRoom.SetNext(&hittlerRoom);
    dogRoom.SetPrev(&lobby);
    
    hittlerRoom.SetNext(NULL);
    hittlerRoom.SetPrev(&dogRoom);
    
    tail = &hittlerRoom;


//characters made
   pCol = new Stauffenberg;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pSSS = new SSS_Agent;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pDog = new HittlerDog;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pHittler = new Hittler;
printf("[%s:%d]\n",__FILE__,__LINE__);


   // ShowMenu();
#endif
}


#if 0


/********************************************************************* 
** Function : SetRoundNumber
** Description : setting the round number of the fight to roundNumber variable
** Parameters : int roundNumber(round of the fight)
** Pre-Conditions : Valkyrie constructor, ShowMenu()
** Post-Conditions : setting the round number of fight to roundNumber variable
*********************************************************************/
void Valkyrie::SetRoundNumber(int r)
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
int Valkyrie::GetRoundNumber() 
{
    return roundNumber;
}
/********************************************************************* 
** Function : SetNumOfCharacters
** Description : setting the number of characters to fight
** Parameters : int (number of characters)
** Pre-Conditions : Valkyrie constructor, ShowMenu()
** Post-Conditions : setting the number of the characters to fight to numOfCharacters variable
*********************************************************************/
void Valkyrie::SetNumOfCharacters(int n)
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
int Valkyrie::GetNumOfCharacters() 
{
    return numOfCharacters;
}
#endif
/********************************************************************* 
** Function : ShowMenu()
** Description : prompting user to choose the action
** Parameters : none
** Pre-Conditions : Valkyrie constructor
** Post-Conditions : FighterChoose(), Fight(), FightResult(), qutting the program
*********************************************************************/
void Valkyrie::ShowMenu()
{
  while(1)
  {
    int choose;
    cout << "chose the menu" << endl;
    cout << "1. Valkyrie Start" << endl;
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
        OperationChoose();
    #if 0  
      cout << "team 1 queue" << endl;
       pQueue[0].PrintQueue();
      cout << "team 2 queue" << endl;
       pQueue[1].PrintQueue();
    #endif  
      sleep(2);

      // Fight();
        
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
** Pre-Conditions : Valkyrie constructor
** Post-Conditions : Fight(), FightResult()
*********************************************************************/
void Valkyrie::OperationChoose()
{
    Entrance entrance;
    Room agentRoom(1);
    Lobby lobby;
    Room dogRoom(2);
    Room hittlerRoom(3);

//spaces are linkked
    head = &entrance;
    curr = head;

    entrance.SetNext(&agentRoom);
    entrance.SetPrev(NULL);

    agentRoom.SetNext(&lobby);
    agentRoom.SetPrev(&entrance);

    lobby.SetNext(&dogRoom);
    lobby.SetPrev(&agentRoom);
    
    dogRoom.SetNext(&hittlerRoom);
    dogRoom.SetPrev(&lobby);
    
    hittlerRoom.SetNext(NULL);
    hittlerRoom.SetPrev(&dogRoom);
    
    tail = &hittlerRoom;


//characters made
   pCol = new Stauffenberg;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pSSS = new SSS_Agent;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pDog = new HittlerDog;
printf("[%s:%d]\n",__FILE__,__LINE__);
   pHittler = new Hittler;
printf("[%s:%d]\n",__FILE__,__LINE__);


   // ShowMenu();
    
 //   Entrance entrance;
//operation expalnation should be here
    cout << "now you are at the entrance of the Hittler's castle" << endl;
    
    //pQueue->PrintQueue();

    int choose;
while(1)
{
    cout << endl <<  "Choose what to do" << endl;
    cout << "1. Leave the castle" << endl;
    cout << "2. Go back to the entrance" << endl;
    cout << "3. Go to the lobby" << endl;
    cout << "4. Go to the next place" << endl;
    cout << "5. Go to the previous place" << endl;
    cout << "6. Go to the back door of hittler's room right now" << endl;
    cout << "7. Current weapon and strength" << endl;

    cin >> choose;
  

    while(cin.fail() || ((choose != 1) && (choose != 2) && (choose != 3) &&(choose !=4) && (choose !=5) && (choose!=6) &&(choose!=7)))    //validation process
    {
        cin.clear();
        cin.ignore(100000000, '\n');
        cout << endl << "invalid! input proper number" << endl << endl;
        cin >> choose;
        
    }

  #if 1   
    if(choose == 1)
    {
        cout << "I guess it is not a good time to do this" << endl;
        cout << "Valkyrie operation ended" << endl;
        break;
    }
    #endif
    #if 1
    else if(choose == 2)
    {
       
        cout << "let's go to the entrance" << endl;
        curr = entrance.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        curr->Action(pCol);
    }
    #if 1
    #if 1
    else if(choose == 3)
    {
        cout << "let's go to the lobby" << endl;
        curr = lobby.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        int action = curr->Action(pCol);
        if(action == 1)
        {
            //underground
            Room under(4);
            temp = under.GetOwnAddress();

            lobby.SetNext(temp);
            under.SetPrev(&lobby);
            under.SetNext(&dogRoom);
            dogRoom.SetPrev(temp);
        curr = under.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        }
        if(action == 3)
        {
            cout << "time to fight with Hittler" << endl;
            int fight_flag = fight(pCol,pHittler);
            if(fight_flag == 0)
            {
                cout << "Hittler died! , valkyrie operation succes!! " << endl;
                break;
            }
        
        }
        if(action == 4)
        {
            
            cout << "let's go to the entrance and restart" << endl;
            curr = entrance.GetOwnAddress();
            cout << "now at the " << curr->GetName() << endl;
            curr->Action(pCol);
        }
        if(action == 5)
        {
            cout << "time to fight with SSS agent" << endl;
            //int fight_flag = fight();
            int fight_flag = fight(pCol,pSSS);
            if(fight_flag == 0)
            {
               cout << "SSS agent died!! " << endl;
            }
        
        
        }
        if(action == 6)
        {
            cout << "time to fight with Hittler's dog" << endl;
            int fight_flag = fight(pCol,pDog);
            if(fight_flag == 0)
            {
                cout << "Hittler's dog died!! " << endl;
            }
            //int fight_flag = fight();
        
        
        }

    }
    #endif
    #if 1
    else if(choose ==4 )
    {
        curr = curr->GetNext();
        cout << "now at the " << curr->GetName() << endl;
        int action = curr->Action(pCol);
        if(action == 1)
        {
            //underground
            Room under(4);
            temp = under.GetOwnAddress();

            lobby.SetNext(temp);
            under.SetPrev(&lobby);
            under.SetNext(&dogRoom);
            dogRoom.SetPrev(temp);
        curr = under.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        }
        if(action == 3)
        {
            cout << "time to fight with Hittler" << endl;
            int fight_flag = fight(pCol,pHittler);
            if(fight_flag == 0)
            {
                cout << "Hittler died! , valkyrie operation succes!! " << endl;
                break;
            }
        
        }
        if(action == 4)
        {
            
        cout << "let's go to the entrance and restart" << endl;
        curr = entrance.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        curr->Action(pCol);
        }
        if(action == 5)
        {
            cout << "time to fight with SSS agent" << endl;
            //int fight_flag = fight();
            int fight_flag = fight(pCol,pSSS);
            if(fight_flag == 0)
            {
               cout << "SSS agent died!! " << endl;
            }
        
        
        }
        if(action == 6)
        {
            cout << "time to fight with Hittler's dog" << endl;
            int fight_flag = fight(pCol,pDog);
            if(fight_flag == 0)
            {
                cout << "Hittler's dog died!! " << endl;
            }
            //int fight_flag = fight();
        
        
        }

    }
    else if(choose == 5 )
    {
        if(curr->GetName() == "Entrance")
        {
            cout << "colonel leaves castle because he was at the entrance" << endl;
            break;
        }
        curr = curr->GetPrev();
        cout << "now at the " << curr->GetName() << endl;
        int action = curr->Action(pCol);
        if(action == 1)
        {
            //underground
            Room under(4);
            temp = under.GetOwnAddress();

            lobby.SetNext(temp);
            under.SetPrev(&lobby);
            under.SetNext(&dogRoom);
            dogRoom.SetPrev(temp);
        curr = under.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        }
        if(action == 3)
        {
            cout << "time to fight with Hittler" << endl;
            int fight_flag = fight(pCol,pHittler);
            if(fight_flag == 0)
            {
                cout << "Hittler died! , valkyrie operation succes!! " << endl;
                break;
            }
        
        }
        if (action == 4)
        {
            
        cout << "let's go to the entrance and restart" << endl;
        curr = entrance.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        curr->Action(pCol);
        }
        
        
    }
    else if(choose == 6 )
    {
        cout << "let's go to the Hittler's room" << endl;
        curr = hittlerRoom.GetOwnAddress();
        cout << "now at the " << curr->GetName() << endl;
        curr->Action(pCol);
        
        
    }
    else if(choose == 7 )
    {
        int pH = pCol->GetPhysical();
        int mH = pCol->GetPhysical();
        cout << endl<< "current status" << endl<< endl;
        cout << "current weapon      : " << pCol->GetWeapon()  << endl;
        cout << "current ammunition  : " << pCol->GetAmmo()    << endl;
        cout << "current Health      : " << pH + mH            << endl;


    }
    #endif
#endif
}
#endif





}

/********************************************************************* 
** Function : Fight()
** Description : Fight happens here in this function
** Parameters : none
** Pre-Conditions : Valkyrie constructor
** Post-Conditions : FightResult()
*********************************************************************/
int Valkyrie::fight(Creature *a, Creature *b)
{
 //bringing the characters in the list to the array.
printf("%s:%d\n",__FILE__,__LINE__);
printf("%s:%d\n",__FILE__,__LINE__);
 
#if 1 
 
 

while(1)
    {

       string f1 = a->GetName();
       string f2 = b->GetName();
       
 


        int a_phy = a->GetPhysical();
        int a_ment = a->GetMental();
        int fighter1_sp = a_phy + a_ment;

        cout << f1 << " has " << fighter1_sp << " strength points left" << endl;
        
        int b_phy = b->GetPhysical();
        int b_ment = b->GetMental();
        int fighter2_sp = b_phy + b_ment;
        
        cout << f2 << " has " << fighter2_sp  <<" strength points left" << endl << endl;
       
       /*fighter1 attacks and fighter2 defense*/
        sleep(1);
        int fighter1_attack = a->attack();
       sleep(1);
      
        b->defense(fighter1_attack);
        
       sleep(1);

       cout << endl;
       /*fighter2 attacks and fighter1 defense*/
        int fighter2_attack = b->attack();
         sleep(1);
        
        a->defense(fighter2_attack);
        sleep(1);
        
        /*figuring out the result*/
      #if 1
        int result = FightResult(a, b); 
        if((result == 1))
        {

            cout << "colonel died, valkyrie operation end! " << endl;
            break;
        }
        else if((result == 2))
        {

            cout << "colonel won! " << endl;
            return 1;
        }

       //variable is needed to make the next fighter fights each other 
        
        } 
         
 
}
/********************************************************************* 
** Function : FightResult()
** Description : figuring out who won and who lost
** Parameters : none
** Pre-Conditions : Stadium constructor
** Post-Conditions : the result of the fight
*********************************************************************/ 
int Valkyrie::FightResult(Creature* a, Creature* b)
{
        string f1 = a->GetName(); 
        string f2 = b->GetName();
     
        int a_phy = a->GetPhysical();
        int a_ment = a->GetMental();
        int fighter1_sp = a_phy + a_ment;
     
        int b_phy = b->GetPhysical();
        int b_ment = b->GetMental();
        int fighter2_sp = b_phy + b_ment;

     


   
    if(fighter1_sp <= 0)
    {/*both creatures die*/
        if(fighter2_sp <= 0)
        {
             cout << endl << "The match result!!" << endl << endl;
            cout << f1<< " and "<< f2 << " died." << endl;                 
            return 1; 
           
        }
        else if(fighter2_sp > 0)
        {/*fighter1 dies and loose*/
            cout << endl << "The match result!!" << endl << endl;
            cout << f1 << " lost" << endl;        
              return 1;
        }
    }
    else if(fighter1_sp > 0)
    {
        if(fighter2_sp <= 0)
        {/*fighter2 dies and loose*/
            cout << endl << "The match result!!" << endl << endl;
            cout << f2 << " lost" << endl;        
                return 2;
        }   
    }
    
   // return 0;
}


#endif


#endif
