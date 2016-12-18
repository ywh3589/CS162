#include "critter.hpp"
/********************************************************************* 
** Function : Critter Constructor
** Description : A constructor for a Critter class
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
** Post-Conditions : setting the size of rows and columns
                     setting the initial coordinates of the critter
*********************************************************************/ 
Critter::Critter(Grid *pGrid)
{
 
    int rows_size = pGrid->GetRows();
    int columns_size = pGrid->GetColumns();

    StartPoint(pGrid);
  //  int antHeading = AntHeadDecide();
}

/********************************************************************* 
** Function : MoveCritter
** Description : A function making the critter move till it gets squashed.
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Critter class" object
** Post-Conditions : randomly moving the critter from its initial position, 
					 print out how critter moves, 
                     and how many moves the critter moved when it get squashed.
*********************************************************************/ 
void Critter::MoveCritter(Grid *pGrid)
{
    int countMove = 0;
    
    int x = XCoord;
    int y = YCoord;
    int rows_size = pGrid->GetRows();
    int columns_size = pGrid->GetColumns();
    int antHeading = AntHeadDecide();

   
   char **cStatus = pGrid->ColorChange(x, y);


    char **pStatus = pGrid->UpdateLocation(x, y);
     pGrid->ColorChange(x, y);

    sleep(2);
    system("clear");        
    cout << endl << "The initial x pos = " << XCoord << endl;
    cout << endl << "The initial y pos = " << YCoord << endl;
    cout << "initial position of the critter" << endl;
    
    pGrid->ShowGrid(pStatus);
   cout << "initial color" << endl;
   pGrid->ShowGrid(cStatus);
    pGrid->ResetGrid(pStatus);
   // pGrid->ShowGrid(pStatus);
    sleep(2);

   do
   {
 //  for(int i = 0; i < 10; i++)
  // {
        countMove++;
     cout << " dfadf" <<endl;
    if( antHeading == 1)
    {
        cout << "1 heading " << endl;
    #if 1
        if( cStatus[x][y] == ' ') //현재 있는 곳이 흰색이라WLi:w면
        {
            char **cStatus = pGrid->ColorChange(x, y);  //changing color
            y = y + 1;                  // setting the location first

           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); // rist to check out whether this move is valid
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
            char **pStatus = pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                cout << "final show grid print out" << endl;
                pGrid->ShowGrid(fStatus);   
                cout << "after show " << endl;
                antHeading = 2;
                cout << antHeading << endl;
        
        }
        else if( cStatus[x][y] == '#') //현재 있는 곳이 검은색이라면
        {
            char **cStatus = pGrid->ColorChange(x, y);
            y = y - 1;
           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                char ** pStatus = pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                pGrid->ShowGrid(fStatus);   
                antHeading = 4;
        
        }
    #endif
 
 
    }



    
   else  if( antHeading == 2)
    {
        cout << "2 heading " << endl;
    #if 1
        if( cStatus[x][y] == ' ') //현재 있는 곳이 흰색이라WLi:w면
        {
            char **cStatus = pGrid->ColorChange(x, y);  //changing color
            x = x + 1;                  // setting the location first

           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); // rist to check out whether this move is valid
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
            char **pStatus = pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                cout << "final show grid print out" << endl;
                pGrid->ShowGrid(fStatus);   
                cout << "after show " << endl;
                antHeading = 3;
                cout << antHeading << endl;
        
        }
        else if( cStatus[x][y] == '#') //현재 있는 곳이 검은색이라면
        {
            char **cStatus = pGrid->ColorChange(x, y);
            x = x - 1;
           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                char ** pStatus = pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                pGrid->ShowGrid(fStatus);   
                antHeading = 1;
        
        }
    #endif
 
 
    }


    if( antHeading == 3)
    {
        cout << "3 heading " << endl;
    #if 1
        if( cStatus[x][y] == ' ') //현재 있는 곳이 흰색이라WLi:w면
        {
            char **cStatus = pGrid->ColorChange(x, y);  //changing color
            y = y - 1;                  // setting the location first

           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); // rist to check out whether this move is valid
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
            char **pStatus = pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                cout << "final show grid print out" << endl;
                pGrid->ShowGrid(fStatus);   
                cout << "after show " << endl;
                antHeading = 4;
                cout << antHeading << endl;
        
        }
        else if( cStatus[x][y] == '#') //현재 있는 곳이 검은색이라면
        {
            char **cStatus = pGrid->ColorChange(x, y);
            y = y + 1;
           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                char ** pStatus = pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                pGrid->ShowGrid(fStatus);   
                antHeading = 2;
        
        }
    #endif
 
 
    }




    if( antHeading == 4)
    {
        cout << "4 heading " << endl;
    #if 1
        if( cStatus[x][y] == ' ') //현재 있는 곳이 흰색이라WLi:w면
        {
            char **cStatus = pGrid->ColorChange(x, y);  //changing color
            x = x - 1;                  // setting the location first

           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus); // rist to check out whether this move is valid
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
           
            char **pStatus = pGrid->UpdateLocation(x, y); // updating location on grid


                char **fStatus = pGrid->FinalUpdate(x, y); 
                cout << "final show grid print out" << endl;
                pGrid->ShowGrid(fStatus);   
                cout << "after show " << endl;
                antHeading = 1;
                cout << antHeading << endl;
        
        }
        else if( cStatus[x][y] == '#') //현재 있는 곳이 검은색이라면
        {
            char **cStatus = pGrid->ColorChange(x, y);
            x = x + 1;
           // char ** pStatus = pGrid->UpdateLocation(x, y);
            int a = ValidMoveCheck(pGrid, x, y, countMove, pStatus);
             if(a)
            {
                cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
                pGrid->Delete(pStatus);
                return; 
            }
                char ** pStatus = pGrid->UpdateLocation(x, y);

                char **fStatus = pGrid->FinalUpdate(x, y);
                pGrid->ShowGrid(fStatus);   
                antHeading = 3;
        
        }
    #endif
 
 
    }


 
   }while(1);


}


#if 0

       unsigned seed;
        seed = time(0);
        srand(seed);
    do
    {
     
		/* randomly assinging the critter's next position */

        int direction_flag = rand() % 4;

        if(direction_flag == 0)
        {
            x = x + 1;        
        }
        else if(direction_flag == 1)
        {
            x = x - 1;     
        }
        else if(direction_flag == 2)
        {
            y = y + 1;
        }
        else
        {
            y = y - 1;
        }
#endif        
       
       
       
       
        /* conditional statements to check out whether the critter has been squashed or not */


#if 0
        if( x < 0)
        {
           cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
           pGrid->Delete(pStatus);
           return;
        } 
        else if( x > columns_size - 1)
        {
            cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
            pGrid->Delete(pStatus);
            return;
        }
        else if( y < 0)
        {
            cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
            pGrid->Delete(pStatus);
            return;
        }
        else if (y > rows_size - 1)
        {
            cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
            pGrid->Delete(pStatus);
            return;
        }
#endif
    
			/* when the critter has not been squashed it keeps moving counting up its move */
        
//}

/********************************************************************* 
** Function : MoveCritter
** Description : A function making the critter move till it gets squashed.
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Critter class" object
** Post-Conditions : randomly moving the critter from its initial position, 
					 print out how critter moves, 
                     and how many moves the critter moved when it get squashed.
*********************************************************************/ 
void Critter::StartPoint(Grid *pGrid)
{
    //int x;
    int choose;
        
    cout << "How will you set the ant's starting point?" << endl;
    cout << "1. random" << endl;
    cout << "2. user setting" << endl;

    cout << "Choose! 1 or 2" << endl;
    cin >> choose;

    if( choose == 1 )
    {
        /*randomly setting*/
        int rows_size = pGrid->GetRows();
        int columns_size = pGrid->GetColumns();
    
    /* randomly assigning the start position of the critter */
        unsigned seed;
        seed = time(0);
        srand(seed);
    
         XCoord = rand() % columns_size; // x pos <= colums
         YCoord = rand() % rows_size;   // y pos <= rows
    
   
    }
    else if( choose == 2)                                       
    {
        int rows_size = pGrid->GetRows();
        int columns_size = pGrid->GetColumns();
        

        int x;
        int y;
       
        cout << "row size = " << rows_size << endl;
        cout << "column size = " << columns_size << endl;

        /*user setting*/
        cout << "input x position" << endl;
        cin >> x;
        cout << "djaf" <<endl; 
        cout << x;
 #if 0
        if( (0 <= x) || (x <= rows_size) )
        {
            return;
        }
        else
        {
        
            cout << "invalid position, enter the valid position" << endl;
            cin >> x;
        }
 #endif
        
        cout << " input y position" << endl;
        cin >> y;
        
        #if 0
        
        while( (y < columns_size) || (y > columns_size) )
        {
            cout << "invalid position, enter the valid position" << endl;
            cin >> y;
        }
      #endif  
         XCoord = x;
         YCoord = y;
    
    }
    else 
    {

        cout << endl << endl <<"You put invalid number" << endl;

        StartPoint(pGrid);
    
        
    }


    return;

}



int Critter::AntHeadDecide()
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
    else if( choose == 2)                                       //core dump shit
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
        else
            {
               cout << "ant again" << endl;
            
            
            }        
        antHeading = x;
        return antHeading;
    }
    else 
    {

        cout << endl << endl <<"You put invalid number" << endl;
        AntHeadDecide();
   
    }


}


/********************************************************************* 
** Function : MoveCritter
** Description : A function making the critter move till it gets squashed.
** Parameters : Grid *pGrid
** Pre-Conditions : A construction of a "Grid class" object
					A construction of a "Critter class" object
** Post-Conditions : randomly moving the critter from its initial position, 
					 print out how critter moves, 
                     and how many moves the critter moved when it get squashed.
*********************************************************************/ 

int Critter::ValidMoveCheck(Grid *pGrid, int x, int y, int countMove, char **pStatus)
{

      // int x = XCoord;
      // int y = YCoord;

       int rows_size = pGrid->GetRows();
       int columns_size = pGrid->GetColumns();
       
        /* conditional statements to check out whether the critter has been squashed or not */

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
