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
   // cCritter = new Critter[numOfCritters];
/*grid 2d array of chars to show */
    MakeShowGrid();
	MakeTempGrid();
}
Grid::~Grid()
{
    for(int i = 0; i < rows; i++)
        delete(pCritter[i]);

     delete(pCritter);

    for(int j = 0; j < rows; j++)
        delete(grid[j]);

        delete(grid);


     delete cCritter;


    cout << "FINISHED" << endl;


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
            
            pCritter[tempA][tempB] = &cCritter[i];
            grid[tempA][tempB] = 'C';
            ShowGrid();
            
             cCritter[i].SetOldX(tempA);
             cCritter[i].SetOldY(tempB);
    }



       
      // }          
   
   ShowGrid();
    

}

int Grid::ValidStartCheck(int x, int y)
{
    cout << "inside valid" << endl; 
    
    if(pCritter[x][y] == NULL)
    {
        cout << "inside NULL"<<endl;
        return 0;
    
    }
   else
    {
        
        return 1;
    }
}

void Grid::UpdateLocation()
{


#if 0
                int a;
                int x, y;
         //       unsigned seed;
         //     seed = time(0);
         //      srand(seed);


               ResetShowGrid(grid);
            //    ResetGrid(pCritter);
         
 for(int i = 0; i < numOfCritters; i++)
 {
     
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
      
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
            
     
                int direction_flag = cCritter[i].CritterMove();
     int oldX = cCritter[i].GetOldX();
     int oldY = cCritter[i].GetOldY();
      
               
      int tempX = cCritter[i].GetXpos();
      int tempY = cCritter[i].GetYpos();
                
               
               
               
               if(direction_flag == 0)
                {   
                    a = ValidMoveCheck(tempX, tempY);
                    if(a) 
                    {  
                        x = oldX;
                        y = oldY;
                    }
                    else
                    {
                        
                        y = tempY;
                        x = tempX;
                   
                    pCritter[oldX][oldY] = NULL;
                    }
                
                }
                else if(direction_flag == 1)
                {
                    a = ValidMoveCheck(tempX, tempY);
                    if(a) 
                    {  
                        x = oldX;
                        y = oldY;
                    }
                    else
                    {
                        
                        y = tempY;
                        x = tempX;
                   
                    pCritter[oldX][oldY] = NULL;
                    }
                
                    
                }
                else if(direction_flag == 2)
                {
                    a = ValidMoveCheck(tempX, tempY);
                    if(a) 
                    {  
                        x = oldX;
                        y = oldY;
                    }
                    else
                    {
                        
                        y = tempY;
                        x = tempX;
                   
                    pCritter[oldX][oldY] = NULL;
                    }
                
               }
                else
                {
                
                  a = ValidMoveCheck(tempX, tempY);
                    if(a) 
                    {  
                        x = oldX;
                        y = oldY;
                    }
                    else
                    {
                        
                        y = tempY;
                        x = tempX;
                   
                    pCritter[oldX][oldY] = NULL;
                    }
               
               
               
               
               }

              
               
               
          //  if(pCritter[x][y] == NULL )
          //  { 
               pCritter[x][y] = &cCritter[i];
             //  pC
         //    cCritter[i].SetXpos(x);
          //   cCritter[i].SetYpos(y);
                grid[x][y] = 'x';
           //  ShowGrid();
  
          //  }
  
             cCritter[i].SetOldX(x);
             cCritter[i].SetOldY(y);
          //  ResetGrid(pCritter); 
    }

  


    
//    system("clear");
   ShowGrid();
 //  ResetGrid(pCritter);
  
  sleep(1);
  system("clear");
//  ResetShowGrid(grid);
#endif

  for(int m = 0; m < moves; m++)
{


#if 1
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(showGrid[i][j] == 'C')
            {
             

                int move = pCritter[i][j]->CritterMove();

               oldX =  pCritter[i][j]->GetOldX();
               oldY =  pCritter[i][j]->GetOldY();

               cout << "oldX" << oldX << " ";
               cout << "oldY" << oldY << endl; 
				
				
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
                    
                    else if(move == 1)
                   {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = oldX;
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
                    else if(move == 2)
                   {
                        val = ValidMoveCheck(newX, newY);
                        if(val)
                        {
                            x = oldX;
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
                            x = oldX;
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
                tempGrid[x][y] = 'T';    
            
            
               // ShowGrid();        
            }
        }
    }

#endif
   
        for(int a = 0; a < rows; a++)
        {
            for(int b = 0; b < columns; b++)
            {
                if(tempGrid[a][b] == 'T')
                {
                    ResetShowGrid();
                    showGrid[a][b] = 'C';
                }
            
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

