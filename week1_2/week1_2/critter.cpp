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
    int antHeading = AntHeadDecide();
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
    
    char **pStatus = pGrid->UpdateLocation(x, y);
    
    sleep(2);
    system("clear");        
    cout << endl << "The initial x pos = " << XCoord << endl;
    cout << endl << "The initial y pos = " << YCoord << endl;
    cout << "initial position of the critter" << endl;
    
    pGrid->ShowGrid(pStatus);    
    pGrid->ResetGrid(pStatus, x, y);
    sleep(2);
  
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
        
        countMove++;
        
       
        /* conditional statements to check out whether the critter has been squashed or not */

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
        else
        {
			/* when the critter has not been squashed it keeps moving counting up its move */

            system("clear");
           // pGrid->ColorChange(x, y);
            char **pStatus = pGrid->UpdateLocation(x, y);
           //pGrid->ColorChange(x, y);
            cout << endl <<"move #" << countMove << endl;
            pGrid->ShowGrid(pStatus);
            pGrid->ResetGrid(pStatus, x, y);
            pGrid->ColorChange(x, y);
            sleep(1);
       
         }   

           

        } while(1);
        
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
    
         antHeading = rand() % 4; 

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
        antHeading = x - 1;
        return antHeading;
    }
    else 
    {

        cout << endl << endl <<"You put invalid number" << endl;
        AntHeadDecide();
   
    }


}
