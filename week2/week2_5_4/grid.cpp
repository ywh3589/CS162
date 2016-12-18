#include "grid.hpp"

Grid::Grid(int a, int b, int c)
{
    rows = a;
    columns = b;
    numOfCritters = c;

/* grid 2d array of pointers to critter class */
    MakeGrid();
    ResetGrid(pCritter);
/* 1d array of pointers to critter */
  //  cCritter = new Critter[numOfCritters];
/*grid 2d array of chars to show */
    MakeShowGrid();

}
Grid::~Grid()
{
    for(int i = 0; i < rows; i++)
        delete(pCritter[i]);

     delete(pCritter);

    for(int j = 0; j < rows; j++)
        delete(grid[j]);

        delete(grid);


    // delete cCritter;


    cout << "FINISHED" << endl;


};

void Grid::SetRows(int r)
{
    rows = r;
}
       
int Grid::GetRows()
{
    return rows;
}
       
void Grid::SetColumns(int c)
{
    columns = c;
}

int Grid::GetColumns()
{
    return columns;
}





/* grid 2d array of pointers to critter class */
Critter***Grid::MakeGrid()
{
  
/* grid 2d array */
    pCritter = new Critter**[rows];
    for(int i = 0; i < rows; i++)
         pCritter[i] = new Critter*[columns];

   // ResetGrid(pCritter);

    return pCritter;

}


void Grid::ResetGrid(Critter ***p)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            p[i][j] = NULL;          
}

void Grid::SetGrid(int x, int y)
{
            pCritter[x][y] = NULL;          
}


char** Grid::MakeShowGrid()
{
    grid = new char*[rows];
    for(int j = 0; j < rows; j++)
        grid[j] = new char[columns];

    ResetShowGrid(grid);

    return grid;

}


void Grid::ResetShowGrid(char **p)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            p[i][j] = ' ';          
}


void Grid::StartPosition()
{
    int tempA, tempB;
    int val;
    unsigned seed;
    seed = time(NULL);
    srand(seed);
  for(int i = 0; i < numOfCritters; i++)
   {
  //  unsigned seed;
  //  seed = time(0);
   // srand(seed);
      //  int a, b;
        do
        {


          tempA = rand() % rows;
          tempB = rand() % columns;
    
                 
      //  pCritter[tempA][tempB] = &cCritter[i];
            
            
            val = ValidStartCheck(tempA, tempB);     
           
        //  pCritter[tempA][tempB] = &cCritter[i];
          //  grid[tempA][tempB] = 'x';
          //  ShowGrid();
          //  sleep(1);
          //  system("clear");
       
      
        }while(val);
            
            pCritter[tempA][tempB] = new Critter();
            grid[tempA][tempB] = 'C';
            ShowGrid();
            
            pCritter[tempA][tempB]->SetOldX(tempA);
            pCritter[tempA][tempB]->SetOldY(tempB);
            // cCritter[i].SetOldY(tempB);
    }



       
      // }          
   
   ShowGrid();
 //  ResetGrid(pCritter);
   ResetShowGrid(grid);

}

int Grid::ValidStartCheck(int x, int y)
{

    
    if(pCritter[x][y] == NULL)
    {
        return 0;
    
    }
   else
    {
        
        return 1;
    }
}




void Grid::UpdateLocation()
{
    int val, oldX, oldY, newX, newY, x, y;

  //  cout << "start position" << endl;

 //   StartPosition();

 //   cout << endl << "start position end" << endl;
#if 0
            int oldX, oldY, newX, newY, x, y, move;

                int a;
               ResetShowGrid(grid);
            //    ResetGrid(pCritter);
#if 1          
 for(int i = 0; i < numOfCritters; i++)
 {
      

       oldX = cCritter[i].GetOldX();
       oldY = cCritter[i].GetOldY();
        
        cout << "oldX" << oldX << " ";
        cout << "oldY" << oldY <<endl;



       move = cCritter[i].CritterMove();
    
       newX  = cCritter[i].GetXpos();
       newY  = cCritter[i].GetYpos();

        cout << "newX" << newX << " ";
        cout << "newY" << newY << endl;
     
        x = newX;
        y = newY;
      
        cout << "newX" << x << " ";
        cout << "newY" << y << endl;
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
      
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
            
                //int direction_flag = rand() % 4;
                
                if(move == 0)
                {   
                    a = ValidMoveCheck(x, y);
                    if(a) 
                    {  
                        x = oldX;
                     
                    }
                    else
                    {
                        pCritter[oldX][oldY] = NULL;
                        
                    }
                
                }
                else if(move == 0)
                {
                   a = ValidMoveCheck(x, y);
                    if(a) 
                    {  
                        x = oldX;
                       
                    }
                    else
                    {
                        pCritter[oldX][oldY] = NULL;
                        
                    }
                    

                    
                }
                else if(move == 2)
                {
                   a = ValidMoveCheck(x, y);
                    if(a) 
                    {  
                        y = oldY;
                      
                    }
                    else
                    {
                        pCritter[oldX][oldY] = NULL;
                    }
                }
                else
                {
                   a = ValidMoveCheck(x, y);
                    if(a) 
                    {  
                        y = oldY;
                     
                    }
                    else
                    {
                        pCritter[oldX][oldY] = NULL;
                    }
                }

              
               
               
          //  if(pCritter[x][y] == NULL )
          //  { 
               pCritter[x][y] = &cCritter[i];
             //  pC
         //    cCritter[i].SetXpos(x);
          //   cCritter[i].SetYpos(y);
                grid[x][y] = 'C';
           //  ShowGrid();
  
          //  }
  
             cCritter[i].SetOldX(x);
             cCritter[i].SetOldY(y);
          //  ResetGrid(pCritter); 
    }

  

#endif
    
//    system("clear");
   ShowGrid();
 //  ResetGrid(pCritter);
  
  sleep(1);
  system("clear");
//ResetShowGrid(grid);
#endif
    ResetShowGrid(grid);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(pCritter[i][j] != NULL)
            {
               oldX =  pCritter[i][j]->GetOldX();
               oldY =  pCritter[i][j]->GetOldY();

               cout << "oldX" << oldX << " ";
               cout << "oldY" << oldY << endl;

                int move = pCritter[i][j]->CritterMove();

               newX =  pCritter[i][j]->GetXpos();
               newY =  pCritter[i][j]->GetYpos();
                
               cout << "newX" << newX << " ";
               cout << "newY" << newY << endl;
                    if(move ==0)
                    {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = oldX;
                            y = newY;

                        }
                        else
                        {
                            pCritter[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            pCritter[x][y] = new Critter();
                        }
                    }
                    
                    else if(move == 1)
                   {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = oldX;
                            y = newY;
                        }
                        else
                        {
                            pCritter[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            pCritter[x][y] = new Critter();
                        }
                    } 
                    else if(move == 2)
                   {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = newX;
                            y = oldY;
                        }
                        else
                        {
                            pCritter[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            pCritter[x][y] = new Critter();
                        }
                    
                   } 
                   else
                   {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = newX;
                            y = oldY;
                        }
                        else
                        {
                            pCritter[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            pCritter[x][y] = new Critter();
                        }
                    } 
             //   pCritter[i][j] = NULL;
            //    pCritter[x][y] = new Critter();
                pCritter[x][y]->SetOldX(x);
                pCritter[x][y]->SetOldY(y);
                grid[x][y] = 'C';    
            
            
               // ShowGrid();        
            }
        }
    }

    ShowGrid();
    sleep(1);
    system("clear");
  //  ResetShowGrid(grid);










}


void Grid::ShowGrid()
{
    for(int a = 0; a < columns + 2; a++)
        cout << "#";
        cout << endl;
    for(int x = 0; x < rows; x++)
    {
        cout << "|";

        for(int y = 0; y < columns; y++)
        {
            cout << grid[x][y];
        }
        
        cout << "|" << endl;
        
    }

    for(int a = 0; a < columns + 2; a++)
        cout << "#";
        cout << endl;
}


int Grid::ValidMoveCheck(int x, int y)
{
    if( x < 0)
    {
        return 1;
    }

    else if( x > rows - 1)
    {
        return 1;
    }
    else if( y < 0)
    {
        return 1;
    }

    else if( y > columns - 1)
    {
        return 1;
    }
    else if ( pCritter[x][y] != NULL )
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

