#include "grid.hpp"

Grid::Grid(int rows, int columns)
{

//the array of pointer to critter class
   Critter*** critter = new Critter**[rows];
    for(int i = 0; i < rows; i++)
    {
        critter[i] = new Critter*[columns];
    }
#if 0
    for(int i = 0; i < rows; i++)
        {
        for(int j = 0; j < columns; j++)
             critter[i][j] = NULL;

        }
#endif
    //tter *p[];
    int c;
    cout << "input c" << endl;
    cin >> c;
#if 1
    Critter **pcritter = new Critter*[c];

/*이제 pcritter[n]을 넣어주자. */   
 
 
#if 1
    for(int i = 0; i < rows; i++)
        {
        for(int j = 0; j < columns; j++)
             critter[i][j] = pcritter[c];
                cout << "i" << i << "c" << c << endl;
              //  cout << "c" << c << endl;
        }
#endif
 
 #if 0
       for(int i  = 0; i < c; i++)
          pcritter[i] = NULL;
       for(int i  = 0; i < c; i++)
        {  if( pcritter[i] == NULL)
          cout << "dfa" << endl; 
        }
    #endif
        //pcritter[0] = NULL;
      #if 0
      for(int i = 0; i < c; i++)
       {
        cout << "3" << endl;
        for(int x = 0; x < rows; x++)
        {
            cout << "2" << endl;
            for(int y = 0; y <columns; y++)
          {
            cout << "1" << endl;
           // if(critter[x][y] == NULL)
                critter[x][y] = pcritter[i];
            }
        }
       }
       #endif
   //      critter[1][1] = pcritter[1];
     //    critter[0][0] = pcritter[
      // critter[1][1] = pcritter[3];
#endif
   

#if 1
 //grid for copy
    char **grid = new char*[rows];
    for(int i = 0; i < rows; i++)
    {
        grid[i] = new char[columns];
    }

        cout << "oleh" << endl;
#endif
     for(int i; i < rows; i ++)
       {
        for(int j; j < columns; j++)
        {    grid[i][j] = 'd';
            cout << "ola" << endl;
        }
        }


     for(int i; i < rows; i ++)
       {
        for(int j; j < columns; j++)
        {   
            cout << grid[i][j] << endl;
        }
        }

#if 0
        critter[0][0] = pcritter[4];
        critter[0][1] = pcritter[1];
        critter[1][0] = pcritter[2];
       // critter[1][1] = pcritter[3];
         critter[4][4] = pcritter[0]; 
        
      //  *(*(critter+1) + 1) = critter; 
#endif

#if 1
for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < columns; j++)
            {
                if(critter[i][j] != NULL)
                   { grid[i][j] = 'h';
                    cout << "yes" << i << j << endl;}
                   // cout << "yes" << endl;
            }

        }

  //   critter[1][1] = pcritter[3];
    for(int i = 0; i < rows; i++)
       {
        for(int j = 0; j < columns; j++)
            {
              //  cout <<" dfa" << endl;
                cout << grid[i][j];
            }
           cout << endl;
        }





#endif

}
