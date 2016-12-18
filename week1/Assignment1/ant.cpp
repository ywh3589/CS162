/********************************************************************************** 

**  Program Filename : ant.cpp

**	Author: Woohyuk Yang

**  Date: April. 10th. 2016

** Description: CS162 Assignment1

** Input : grid size(rows, columns)

** Output : A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
************************************************************************************/




#include "ant.hpp"
/********************************************************************* 
** Function : Ant Constructor
** Description : A constructor for a Ant class
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
** Post-Conditions : setting the size of rows and columns
                     setting the initial coordinates of the ant
*********************************************************************/ 
Ant::Ant(Grid *pGrid)
{
 

    StartPoint(pGrid);
}

/********************************************************************* 
** Function : MoveAnt
** Description : A function making the ant move till it gets squashed.
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Ant class" object
** Post-Conditions : randomly moving the ant from its initial position, 
					 print out how ant moves, 
                     and how many moves the ant moved when it get squashed.
*********************************************************************/ 
void Ant::MoveAnt(Grid *pGrid)
{
    int countMove = 0;
    
    int x = XCoord;
    int y = YCoord;
    int antHeading = AntHeadDecide();
    int moveStep = InputMoveStep();
    char **cStatus = pGrid->ColorChange(x, y);


    char **pStatus = pGrid->UpdateLocation(x, y);
     pGrid->ColorChange(x, y);

    sleep(2);
    system("clear");        
    cout << endl << "The initial x pos = " << XCoord << endl;
    cout << endl << "The initial y pos = " << YCoord << endl;
    cout << "initial position of the ant" << endl;
    
    pGrid->ShowGrid(pStatus);
    pGrid->ResetGrid(pStatus);
    sleep(2);

  for(int i = 0; i < moveStep; i++)
   {
        countMove++;
    
    if( antHeading == 1)
    {
    #if 1
        if( cStatus[x][y] == ' ')
        {
            pGrid->ColorChange(x, y);  //changing color
            y = y + 1;                  // setting the location first

            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); 
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
             pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                system("clear");
                cout << endl << "move #" << countMove << endl;
                
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 2;
        
        }
        else if( cStatus[x][y] == '#')
        {
             pGrid->ColorChange(x, y);
            y = y - 1;
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                 pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 4;
        
        }
    #endif
 
 
    }



    
   else  if( antHeading == 2)
    {
    #if 1
        if( cStatus[x][y] == ' ') 
        {
            pGrid->ColorChange(x, y);  //changing color
            x = x + 1;                  // setting the location first

            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); 
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
            pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 3;
        
        }
        else if( cStatus[x][y] == '#')
        {
            pGrid->ColorChange(x, y);
            x = x - 1;
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 1;
        
        }
    #endif
 
 
    }


    else if( antHeading == 3)
    {
      
    #if 1
        if( cStatus[x][y] == ' ') 
        {
            pGrid->ColorChange(x, y);  //changing color
            y = y - 1;                  // setting the location first

            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); 
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
               pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 4;
        
        }
        else if( cStatus[x][y] == '#')
        {
            pGrid->ColorChange(x, y);
            y = y + 1;
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
               pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 2;
        
        }
    #endif
 
 
    }




    else if( antHeading == 4)
    {
    #if 1
        if( cStatus[x][y] == ' ') 
        {
            pGrid->ColorChange(x, y);  //changing color
            x = x - 1;                  // setting the location first

            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); 
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
                 pGrid->UpdateLocation(x, y); // updating location on grid



                char **fStatus = pGrid->FinalUpdate(x, y); 
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 1;
        
        }
        else if( cStatus[x][y] == '#') 
        {
            pGrid->ColorChange(x, y);
            x = x + 1;
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The ant has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                system("clear");
                cout << endl << "move #" << countMove << endl;
                pGrid->ShowGrid(fStatus);   
                sleep(1);
                antHeading = 3;
        
        }
    #endif
 
 
    }


 


}
}


/********************************************************************* 
** Function : StartPoint()
** Description : A function letting the user to choose to set the initial position of the ant randomly or not.
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Ant class" object
** Post-Conditions : randomly setting the ant's position
					or choosing where to put the ant on the grid.
*********************************************************************/ 
void Ant::StartPoint(Grid *pGrid)
{
    int choose;
        
    cout << "How will you set the ant's starting point?" << endl;
    cout << "1. random" << endl;
    cout << "2. user setting" << endl;

    cout << "Choose! 1 or 2" << endl;
    cin >> choose;
#if 1
        while(cin.fail() || ((choose != 1) && (choose != 2))) 
        {
            cin.clear();
            cin.ignore(100000,'\n');
            cout << endl << endl <<"invalid! input proper number" << endl << endl << endl;
            cin >> choose;
        }
#endif
    if( choose == 1 )
    {
        /*randomly setting*/
        int rows_size = pGrid->GetRows();
        int columns_size = pGrid->GetColumns();
    
    /* randomly assigning the start position of the ant */
        unsigned seed;
        seed = time(0);
        srand(seed);
    
         XCoord = rand() % columns_size; // x pos <= colums
         YCoord = rand() % rows_size;   // y pos <= rows
    
   
        return;
    }
    else if( choose == 2)                                       
    {
        int rows_size = pGrid->GetRows();
        int columns_size = pGrid->GetColumns();
        

        int x;
        int y;
       
        cout << endl << endl << "row size = " << rows_size << endl;
        cout << endl <<"column size = " << columns_size << endl;

        /*user setting*/
        cout << "input x position" << endl;
        cin >> x;
        /*valid check*/
        while(cin.fail() || x < 0 || x > rows_size )
        {
            cin.clear();
            cin.ignore(100000,'\n');
            cout << endl << endl <<"invalid! input proper number for x position" << endl << endl << endl;
            cin >> x;
        }
 
  
        
        cout << endl << " input y position" << endl;
        cin >> y;
        /*valid check*/
        while(cin.fail() || y < 0 || y > columns_size )
        {
            cin.clear();
            cin.ignore(100000,'\n');
            cout << endl << endl <<"invalid! input proper number for y position" << endl << endl << endl;
            cin >> y;
        }
         
         
         XCoord = x;
         YCoord = y;
    
        return;
    }

}

int Ant::InputMoveStep()
{
    cout << endl << endl;
    cout << "How many times do you want the ant to move? " << endl;
    cin >> moveStep;

    /* when the user input invalide value */
        while(cin.fail() || moveStep < 0)
        {
            cin.clear();
            cin.ignore(100000,'\n');
            cout << endl << endl <<"invalid! input proper number" << endl << endl << endl;
            cin >> moveStep;
        
        }



    return moveStep;
}





/********************************************************************* 
** Function : AntHeadDecide
** Description : A function letting the user to decide the ant's heading direction randomly or not.
** Parameters : none
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Ant class" object
** Post-Conditions :  randomly setting the ant's heading direction
					or choosing where the ant heads.
*********************************************************************/ 
int Ant::AntHeadDecide()
{
    int choose;
    int antHeading;
    int x;

    cout << endl << endl;
    cout << "How will you set the ant's head? " << endl;
    cout << "1. random" << endl;
    cout << "2. user setting" << endl;

    cout << "Choose! 1 or 2" << endl;
    cin >> choose;
   
   
        while(cin.fail() || ((choose != 1) && (choose != 2))) 
        {
            cin.clear();
            cin.ignore(100000,'\n');
            cout << endl << endl <<"invalid! input proper number" << endl << endl << endl;
           // StartPoint(pGrid);
            cin >> choose;
        }
   
   
   
   
   
   if( choose == 1 )
    {
        /*randomly setting*/
    
        unsigned seed;
        seed = time(0);
        srand(seed);
    
         antHeading = rand() % 4 + 1; 

        
        if ( antHeading == 1 )
            cout << "ant heads up first" << endl;
        else if ( antHeading == 2 )
            cout << "ant heads right first" << endl;
        else if ( antHeading == 3 )
            cout << "ant heads down first" << endl;
        else
            cout << "ant heads left first" << endl;
         
         return antHeading;
         
    
   
    }
    else if( choose == 2)                                         
    {
       cout << endl << endl;       
       cout << "choose ant's head? " << endl;
       cout << "1. up" << endl;
       cout << "2. right" << endl;
       cout << "3. down" << endl;
       cout << "4. left" << endl;
       

        cout << "input the number" << endl;
        cin >> x;
        if ( x == 1 )
            cout << "ant heads up first" << endl;
        else if ( x == 2 )
            cout << "ant heads right first" << endl;
        else if ( x == 3 )
            cout << "ant heads down first" << endl;
        else if ( x == 4)
            cout << "ant heads left first" << endl;
        
      #if 1     
               while(cin.fail())
               {
                 cin.clear();
                 cin.ignore(100000,'\n');
                 cout << endl << endl <<"invalid! input proper number for ant's heading direction" << endl << endl << endl;
                 cin >> x;
        
               }
           
               while(   (x != 1) && (x != 2) && (x !=3) && (x!= 4) )
               {
                 cin.clear();
                 cin.ignore(100000,'\n');
                 cout << endl << endl <<"invalid! input proper number for ant's heading direction" << endl << endl << endl;
                 cin >> x;
        
               }
           #endif
                antHeading = x;
                return antHeading;
        }



    while(cin.fail())
    {
        cin.clear();
        cin.ignore(100000,'\n');
        cout << "invalid! enter 1 or 2 "<< endl;
        cin >> x;
    
    }

    }


/********************************************************************* 
** Function : ValidMoveCheck()
** Description : A function checking whether the ant is squashed.
** Parameters : Grid *pGrid, ant's position, countMove, char **pStatus
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Ant class" object
** Post-Conditions : letting the user know when the ant gets squashed.
*********************************************************************/ 

int Ant::ValidMoveCheck(Grid *pGrid, int x, int y, int countMove, char **pStatus)
{

      // int x = XCoord;
      // int y = YCoord;

       int rows_size = pGrid->GetRows();
       int columns_size = pGrid->GetColumns();
       
        /* conditional statements to check out whether the ant has been squashed or not */

        if( x < 0)
        {
           return 1;
        } 
        else if( x > columns_size - 1)
        {
            return 1;
        }
        else if( y < 0)
        {
             return 1;
        }
        else if (y > rows_size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }


}



