/********************************************************************************** 

**  Program Filename : grid.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModC

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a critter moves on the grid making another critter after moving 3 times.
************************************************************************************/

#include "grid.hpp"

/********************************************************************* 
** Function : Grid Constructor
** Description : A constructor for a Grid class
** Parameters : int a, int b (size of rows and columns), and int c (the number of critters) 
** Pre-Conditions : getting the size of rows and columns, and the number of critters from the user
** Post-Conditions : making three grids; the first one is whre  critter(s) would move on,
                                         the second one is where critter(s)' position will be temporarily stored,
								     the third one is the grid to be used to display,
                                         and print out the grid made
*********************************************************************/
Grid::Grid(int r, int c, int a, int d)
{
    rows = r;
    columns = c;
    numOfAnt = a;
    numOfDoodleBug = d; 
/* grid 2d array of pointers to critter class */
    MakeGrid();

/*grid 2d array of chars to show */
    MakeShowGrid();
	MakeTempGrid();
}

/********************************************************************* 
** Function : Grid Destructor
** Description : A destructor for a Grid class
** Parameters : int a, int b (size of rows and columns), and int c (the number of critters) 
** Pre-Conditions :  the size of rows and columns, and the number of critters from the user
** Post-Conditions : deleting three grids; the first one is whre  critter(s) would move on,
                                         the second one is where critter(s)' position will be temporarily stored,
									     the third one is the grid to be used to display,
                                         and print out the grid made
*********************************************************************/

Grid::~Grid()
{
    for(int i = 0; i < rows; i++)
        delete(pCritter[i]);

     delete(pCritter);

    for(int j = 0; j < rows; j++)
        delete(grid[j]);

        delete(grid);


    for(int j = 0; j < rows; j++)
        delete(tempGrid[j]);

        delete(tempGrid);



    cout << "FINISHED" << endl;


}

/********************************************************************* 
** Function : MakeGrid
** Description : making a new grid
** Parameters : n/a
** Pre-Conditions : the size of the grid.
** Post-Conditions : this function makes a 2D array of pointer variables to Critter class.
*********************************************************************/
Critter***Grid::MakeGrid()
{
  

    pCritter = new Critter**[rows];
    for(int i = 0; i < rows; i++)
         pCritter[i] = new Critter*[columns];

     ResetGrid(pCritter);

    return pCritter;

}

/********************************************************************* 
** Function : ResetGrid
** Description : initializing a new grid with NULL
** Parameters : pointer variable which indicates the newly made grid.
** Pre-Conditions : the grid made by MakeGrid() function
** Post-Conditions : this function initialize every cells of  a 2D array of pointer variables to Critter class to NULL
*********************************************************************/
void Grid::ResetGrid(Critter ***p)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            p[i][j] = NULL;          
}


/********************************************************************* 
** Function : MakeShowGrid
** Description : making a new grid for display
** Parameters : n/a
** Pre-Conditions : the size of the grid.
** Post-Conditions : this function makes a 2D array of char variables to display the movements of critter(s).
*********************************************************************/
char** Grid::MakeShowGrid()
{
    grid = new char*[rows];
    for(int j = 0; j < rows; j++)
        grid[j] = new char[columns];

    ResetShowGrid(grid);

    return grid;

}

/********************************************************************* 
** Function : MakeTempGrid
** Description : making a new grid to store the temporary position of the critter(s)'s each move
** Parameters : n/a
** Pre-Conditions : the size of the grid.
** Post-Conditions : this function makes a 2D array of char variables to display the temporary movements of critter(s).
*********************************************************************/
char** Grid::MakeTempGrid()
{
    tempGrid = new char*[rows];
    for(int j = 0; j < rows; j++)
        tempGrid[j] = new char[columns];

    ResetTempGrid(tempGrid);

    return tempGrid;

}

/********************************************************************* 
** Function : ResetShowGrid
** Description : initializing a new grid with ' '
** Parameters : pointer variable which indicates the newly made grid for displaying critters.
** Pre-Conditions : the grid made by MakeShowGrid() function
** Post-Conditions : this function initialize every cells of  a 2D array of char pointer variables to ' '.
*********************************************************************/
void Grid::ResetShowGrid(char **p)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            p[i][j] = ' ';          
}

/********************************************************************* 
** Function : ResetTempGrid
** Description : initializing a new grid with ' '
** Parameters : pointer variable which indicates the newly made grid for displaying temporary positions of critters.
** Pre-Conditions : the grid made by MakeTempGrid() function
** Post-Conditions : this function initialize every cells of  a 2D array of char pointer variables to ' '.
*********************************************************************/
void Grid::ResetTempGrid(char **p)
{
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            p[i][j] = ' ';          
}


/********************************************************************* 
** Function : InitialPositionSet
** Description : initializing the first positions for each critters
** Parameters : none
** Pre-Conditions : the grid made by MakeGrid() function, the number of critters.
** Post-Conditions : this function initialize the first x_coordinate and y_coordinate of every critters on the grid.
*********************************************************************/
#if 1
void Grid::InitialPositionSet()
{
    int x, y;
    int val;
    unsigned seed;
    seed = time(NULL);
    srand(seed);
//initially setting ant's position
#if 1
	for(int i = 0; i < numOfAnt; i++)
    {
        do
        {
          x = rand() % rows;
          y = rand() % columns;
    
          val = ValidStartCheck(x, y);     
        }while(val);
            
         
		pCritter[x][y] = new Ant(0);
        cout << "new ant" << endl;
        grid[x][y] = 'A';
       // ShowGrid();
            
        pCritter[x][y]->SetOldX(x);
        pCritter[x][y]->SetOldY(y);

     //   pCritter[x][y]->SetCount(0);
     //   pCritter[x][y]->GetCount(); 
     //   cout << "a" << " " << a << endl;
    }
#endif
//initially setting doodle bug's position

	for(int i = 0; i < numOfDoodleBug; i++)
    {
        do
        {
          x = rand() % rows;
          y = rand() % columns;
    
          val = ValidStartCheck(x, y);     
        }while(val);
            
         
		pCritter[x][y] = new DoodleBug(0);
        grid[x][y] = 'D';
       // ShowGrid();
            
        pCritter[x][y]->SetOldX(x);
        pCritter[x][y]->SetOldY(y);

      //  pCritter[x][y]->SetCount(0);
      //  pCritter[x][y]->GetCount(); 
     //   cout << "a" << " " << a << endl;
    }
   
	system("clear");
	cout << "Initial Grid" << endl << endl;
	ShowGrid(grid);
	sleep(1);
//	system("clear");    
}
#endif
/********************************************************************* 
** Function : ValidStartCheck
** Description : Checking whether randomly chosen position for crriters is not occupied.
** Parameters :  randomly chosen x and y cooridinate.
** Pre-Conditions : the grid made by MakeGrid() function, ResetGrid() function.
** Post-Conditions : this function returns 0 if the chosen position is available and if not it returns 1. 
*********************************************************************/
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



/********************************************************************* 
** Function : PlayStart
** Description : After the position of critters are taken, the critter(s) starts to move following the certain rule.
** Parameters :  the steps of critters
** Pre-Conditions : every other functions other than this function and grid class destructor.
** Post-Conditions : this function lets critter(s) move and display grid to display the movement. 
*********************************************************************/
#if 1
void Grid::PlayStart(int n)
{

	
//printf("[%s:%d]\n",__FILE__,__LINE__);
	int step = n;

	int oldX, oldY, newX, newY, x, y, val;

    unsigned seed;
    seed = time(NULL);
    srand(seed);

    

	for(int m = 0; m < step; m++)
	{
            

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
       {
            
#if 1
            if(grid[i][j] == 'A')
            {
                int randVal = rand() % 4;

                /*move*/
                int move = pCritter[i][j]->CritterMove(randVal);
                
                oldX =  pCritter[i][j]->GetOldX();
                oldY =  pCritter[i][j]->GetOldY();

                newX =  pCritter[i][j]->GetXpos();
                newY =  pCritter[i][j]->GetYpos();
                
             
               if(move ==0)
               {
                   val = ValidMoveCheck(newX, newY);
                      if(val) //val is not possible to move. 
                        {
                            x = oldX;
                            y = oldY;
                			tempGrid[x][y] = 'T';    
						}
                        else
                        {//not deleting and making newly lets just change the pointer value. 
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'T';    
                            if(pCritter[oldX][oldY] != NULL)
                            {
                                pCritter[oldX][oldY]->SetOldX(oldX);
                                pCritter[oldX][oldY]->SetOldY(oldY);
                                tempGrid[oldX][oldY] = 'T';    
							    //pCritter[x][y] = new Ant(0);
                            }
                        }
               }
                    
               else if(move == 1)
               {
                  val = ValidMoveCheck(newX, newY);
                    if(val)
                    {
                          x = oldX;
                          y = oldY;
                		  tempGrid[x][y] = 'T';    
                     }
                     else
                     {

                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'T';    
                             //tempGrid[x][y] = 'T';    
                            if(pCritter[oldX][oldY] != NULL)
                            {
                              pCritter[oldX][oldY]->SetOldX(oldX);
                              pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'T';    
							//pCritter[x][y] = new Ant(0);
                            }
                    }
                } 
                else if(move == 2)
                {
                   val = ValidMoveCheck(newX, newY);
                     if(val)
                     {
                          x = oldX;
						  y = oldY;
		                  tempGrid[x][y] = 'T';    
                      }
                      else
                      {
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'T';    
							//pCritter[x][y] = new Ant(0);
                            if(pCritter[oldX][oldY] != NULL)
                            {
                              pCritter[oldX][oldY]->SetOldX(oldX);
                              pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'T';    
							//pCritter[x][y] = new Ant(0);
                            }
     
                     
                     }
                    
                 } 
                 else
                 {
					 val = ValidMoveCheck(newX, newY);
					 if(val)
					 {
                            x = oldX;
                            y = oldY;
	 	                    tempGrid[x][y] = 'T';    
                      }
                      else
                      {
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
                             
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'T';    
							//pCritter[x][y] = new Ant(0);
                            if(pCritter[oldX][oldY] != NULL)
                           {
                               pCritter[oldX][oldY]->SetOldX(oldX);
                               pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'T';    
							//pCritter[x][y] = new Ant(0);
                            }
                                              
                      
                      
                      }
                   } 
           
//printf("[%s:%d]\n",__FILE__,__LINE__);

            #if 0
                       if( pCritter[oldX][oldY] == NULL )
                          {
printf("[%s:%d]\n",__FILE__,__LINE__);
                             pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
printf("[%s:%d]\n",__FILE__,__LINE__);
                            // pAnt[oldX][oldY] = new Ant;
                             tempGrid[oldX][oldY] = 'T';
printf("[%s:%d]\n",__FILE__,__LINE__);
                          }
printf("[%s:%d]\n",__FILE__,__LINE__);
                                                                       
                   // pCritter[oldX][oldY]->SetOldX(oldX);
                //	pCritter[oldX][oldY]->SetOldY(oldY);   will be done below
                       
                    
            #endif

//printf("[%s:%d]\n",__FILE__,__LINE__);
                     pCritter[x][y]->SetOldX(x);
                     pCritter[x][y]->SetOldY(y);
            
             
             
                     #if 1
                      //setting count
                      int count = pCritter[x][y]->GetCount();
                      count++;
                      pCritter[x][y]->SetCount(count);
                      cout << pCritter[x][y]->GetCount() << endl;

                     #endif
             
             
             }
#endif          
       
#if 1
            if(grid[i][j] == 'D')
            {
                int randVal = rand() % 4;

                /*move*/
                int move = pCritter[i][j]->CritterMove(randVal);
                
                oldX =  pCritter[i][j]->GetOldX();
                oldY =  pCritter[i][j]->GetOldY();

                newX =  pCritter[i][j]->GetXpos();
                newY =  pCritter[i][j]->GetYpos();
                
             
               if(move ==0)
               {
                   val = ValidMoveCheck(newX, newY);
                      if(val) //val is not possible to move. 
                        {
                            x = oldX;
                            y = oldY;
                			tempGrid[x][y] = 'S';    
						}
                        else
                        {
                         
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'S';    
                            if(pCritter[oldX][oldY] != NULL)
                            {
                               pCritter[oldX][oldY]->SetOldX(oldX);
                               pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'S';    
							//pCritter[x][y] = new Ant(0);
                            }
                        }
               }
                    
               else if(move == 1)
               {
                  val = ValidMoveCheck(newX, newY);
                    if(val)
                    {
                          x = oldX;
                          y = oldY;
                		  tempGrid[x][y] = 'S';    
                     }
                     else
                     { 
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'S';    
                            if(pCritter[oldX][oldY] != NULL)
                           {
                              pCritter[oldX][oldY]->SetOldX(oldX);
                              pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'S';    
							//pCritter[x][y] = new Ant(0);
                            }
    
                }
                    } 
                else if(move == 2)
                {
                   val = ValidMoveCheck(newX, newY);
                     if(val)
                     {
                          x = oldX;
						  y = oldY;
		                  tempGrid[x][y] = 'S';    
                      }
                      else
                     {  
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'S';    
                            if(pCritter[oldX][oldY] != NULL)
                           {
                              pCritter[oldX][oldY]->SetOldX(oldX);
                              pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'S';    
							//pCritter[x][y] = new Ant(0);
                            }
                     }
                    
                 } 
                 else
                 {
					 val = ValidMoveCheck(newX, newY);
					 if(val)
					 {
                            x = oldX;
                            y = oldY;
	 	                    tempGrid[x][y] = 'S';    
                      }
                      else
                      {    
                            x = newX;
                            y = newY;
                            
                            pCritter[x][y] = pCritter[oldX][oldY];
                            pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
                            //pCritter[oldX][oldY] = NULL;
//printf("[%s:%d]\n",__FILE__,__LINE__);
                             tempGrid[x][y] = 'S';    
                            if(pCritter[oldX][oldY] != NULL)
                            {
                              pCritter[oldX][oldY]->SetOldX(oldX);
                              pCritter[oldX][oldY]->SetOldY(oldY);
                              tempGrid[oldX][oldY] = 'S';    
							}//pCritter[x][y] = new Ant(0);
   
                       }   
                   } 
            
            #if 0
                    int breed = pAnt[x][y]->Breed(m+1);        
                    if(breed)
                    {
                       if( pAnt[oldX][oldY] == NULL )
                          {
                             pAnt[oldX][oldY] = new Ant;
                             tempGrid[oldX][oldY] = 'T';
                          }
                                                                       
                    pAnt[oldX][oldY]->SetOldX(oldX);
                	pAnt[oldX][oldY]->SetOldY(oldY);
                       
                    }
            #endif

            #if 0
                       if( pCritter[oldX][oldY] == NULL )
                          {
                             pCritter[oldX][oldY] = pCritter[oldX][oldY]->Breed();
                            // pAnt[oldX][oldY] = new Ant;
                             tempGrid[oldX][oldY] = 'T';
                          }
            #endif
                     pCritter[x][y]->SetOldX(x);
                     pCritter[x][y]->SetOldY(y);
           

                     #if 1
                      //setting count
                      int count = pCritter[x][y]->GetCount();
                      count++;
                      pCritter[x][y]->SetCount(count);
                      cout << pCritter[x][y]->GetCount() << endl;

                     #endif
            
             }
#endif          
       
       
       
       
       
       }
   }

                cout << "#" << m+1 << " move" << endl;
                

        
                ResetShowGrid(grid);
                
	    for(int a = 0; a < rows; a++)
        {
            for(int b = 0; b < columns; b++)
            {
                if(tempGrid[a][b] == 'T')
                {
                    grid[a][b] = 'A';

                }
                else if(tempGrid[a][b] == 'S')
                {
                    grid[a][b] = 'D';
                }
            }
        }
   
    			ResetTempGrid(tempGrid);
               // system("clear"); 
   				ShowGrid(grid);
                sleep(1);
    			system("clear");
		        
        }


}
#endif
/********************************************************************* 
** Function : ShowGrid
** Description : This function displays the movement of critter(s).
** Parameters :  none
** Pre-Conditions : PlayStart function
** Post-Conditions : this function displays the movement of critter(s) after each movement.
*********************************************************************/
void Grid::ShowGrid(char **p)
{
    
    for(int a = 0; a < columns + 2; a++)
        cout << "#";
        cout << endl;
    for(int x = 0; x < rows; x++)
    {
        cout << "|";

        for(int y = 0; y < columns; y++)
        {
            cout << p[x][y];
        }
        
        cout << "|" << endl;
        
    }

    for(int a = 0; a < columns + 2; a++)
        cout << "#";
        cout << endl;
}

/********************************************************************* 
** Function : ValidMoveCheck
** Description : it decides whether the critter can move or not.
** Parameters :  the size of grid
** Pre-Conditions : StartPlay function
** Post-Conditions : this function lets StartPlay function whether a certain critte could move to randomly chosen position or not. 
*********************************************************************/

#if 1
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
#endif
