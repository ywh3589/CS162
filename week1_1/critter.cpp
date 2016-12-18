#include "critter.hpp"

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

void Critter::MoveCritter(Grid *pGrid)
{
    int countMove = 0;
    
    int x = XCoord;
    int y = YCoord;
    int rows_size = pGrid->GetRows();
    int columns_size = pGrid->GetColumns();
    
    char** pStatus = pGrid->UpdateLocation(x, y);
    
    sleep(2);
    system("clear");        
    cout << endl << "The initial position of the critter" << endl;
    pGrid->ShowGrid(pStatus);    
    pGrid->ResetGrid(pStatus);
    sleep(2);
   // system("clear");        

    //cout << endl;

        unsigned seed;
        seed = time(0);
        srand(seed);
    do
    {
       // system("clear");

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
        
       
        
        if( x < 0)
        {
           cout << "The critter has been crushed in " << countMove << " moves. :(" << endl;
           pGrid->Delete(pStatus);
           return;
        }
     // cout << "The critter moved " << countMove << " many times" << endl;
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
            system("clear");
            char** pStatus = pGrid->UpdateLocation(x, y);
        
            cout << endl <<"move #" <<countMove << endl;
            pGrid->ShowGrid(pStatus);
            pGrid->ResetGrid(pStatus);
            sleep(1);
            //system("clear");        
            
//            cout << endl;
         }   

           

        } while(1);
        
}
