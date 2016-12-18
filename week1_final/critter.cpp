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

/* randomly assigning the start position of the critter */
    unsigned seed;
    seed = time(0);
    srand(seed);

     XCoord = rand() % columns_size; // x pos <= colums
     YCoord = rand() % rows_size;   // y pos <= rows


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
    cout << endl << "The initial position of the critter" << endl;
    pGrid->ShowGrid(pStatus);    
    pGrid->ResetGrid(pStatus);
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
            char **pStatus = pGrid->UpdateLocation(x, y);
        
            cout << endl <<"move #" << countMove << endl;
            pGrid->ShowGrid(pStatus);
            pGrid->ResetGrid(pStatus);
            sleep(1);
       
         }   

           

        } while(1);
        
}
