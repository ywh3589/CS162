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
    cCritter = new Critter[numOfCritters];
/*grid 2d array of chars to show */
    MakeShowGrid();

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

    unsigned seed;
    seed = time(0);
    srand(seed);
  for(int i = 0; i < numOfCritters; i++)
   {
  //  unsigned seed;
  //  seed = time(0);
   // srand(seed);

    int a = rand() % rows;
     int b  = rand() % columns;
    
   // for(int a = 0; a < rows; a++)
   // {
   // for(int b = 0; b < columns; b++)
   // {

     if(pCritter[a][b] == NULL)
        {
            pCritter[a][b] = &cCritter[i];
            grid[a][b] = 'x';
            cout << "a" << a << endl;
            cout << "b" << b << endl;
       
             cCritter[i].SetXpos(a);
             cCritter[i].SetYpos(b);
       
       
       }          
   }
   ShowGrid();
    

}
    
void Grid::Move()
{

                unsigned seed;
              seed = time(0);
               srand(seed);

               ResetShowGrid(grid);
 #if 1    
 for(int i = 0; i < numOfCritters; i++)
 {
     
      int x = cCritter[i].GetXpos();
      int y = cCritter[i].GetYpos();
      
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
      
              //  unsigned seed;
              //  seed = time(0);
              //  srand(seed);
            
                int direction_flag = rand() % 4;
                
                if(direction_flag == 0)
                {
                    x = x + 1;
                    int a = ValidCheck(x, y);
                    if(a) 
                    {  
                        x = x - 1;
                    }
                }
                else if(direction_flag == 1)
                {
                    x = x - 1;
                    int a = ValidCheck(x, y);
                    if(a) 
                    {  
                        x = x + 1;
                    }
                }
                else if(direction_flag == 2)
                {
                    y = y + 1;
                    int a = ValidCheck(x, y);
                    if(a) 
                    {  
                        y = y - 1;
                    }
                }
                else
                {
                    y = y - 1;
                    int a = ValidCheck(x, y);
                    if(a) 
                    {  
                        y = y + 1;
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
  
             cCritter[i].SetXpos(x);
             cCritter[i].SetYpos(y);
         
    }

  

#endif
    
//    system("clear");
   ShowGrid();
   ResetGrid(pCritter);
  
  sleep(1);
  system("clear");
  ResetShowGrid(grid);
}
void Grid::ShowGrid()
{
    for(int a = 0; a < rows + 2; a++)
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

    for(int a = 0; a < rows + 2; a++)
        cout << "#";
        cout << endl;
}


int Grid::ValidCheck(int x, int y)
{
    if( x < 0)
    {
        return 1;
    }

    else if( x > columns - 1)
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

