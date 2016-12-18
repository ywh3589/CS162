/********************************************************************************** 

**  Program Filename : grid.cpp

**	Author: Woohyuk Yang

**  Date: April. 16th. 2016

** Description: CS162 ModB

** Input : grid size(rows, columns), the number of critters, the number of steps for critters to take

** Output :  A simulating program in which a ant moves on the grid till it gets squashed or as many as steps which the user input.
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
Grid::Grid(int a, int b, int c)
{
    rows = a;
    columns = b;
    numOfCritters = c;

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
        delete(pAnt[i]);

     delete(pAnt);

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
Ant***Grid::MakeGrid()
{
  

    pAnt = new Ant**[rows];
    for(int i = 0; i < rows; i++)
         pAnt[i] = new Ant*[columns];

     ResetGrid(pAnt);

    return pAnt;

}

/********************************************************************* 
** Function : ResetGrid
** Description : initializing a new grid with NULL
** Parameters : pointer variable which indicates the newly made grid.
** Pre-Conditions : the grid made by MakeGrid() function
** Post-Conditions : this function initialize every cells of  a 2D array of pointer variables to Critter class to NULL
*********************************************************************/
void Grid::ResetGrid(Ant ***p)
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
void Grid::InitialPositionSet()
{
    int x, y;
    int val;
    unsigned seed;
    seed = time(NULL);
    srand(seed);
  
	for(int i = 0; i < numOfCritters; i++)
    {
        do
        {
          x = rand() % rows;
          y = rand() % columns;
    
          val = ValidStartCheck(x, y);     
        }while(val);
            
         
		pAnt[x][y] = new Ant;
        grid[x][y] = 'C';
        ShowGrid();
            
        pAnt[x][y]->SetOldX(x);
        pAnt[x][y]->SetOldY(y);


    }
	
	system("clear");
	cout << "Initial Grid" << endl << endl;
	ShowGrid();
	sleep(1);
	system("clear");    
}

/********************************************************************* 
** Function : ValidStartCheck
** Description : Checking whether randomly chosen position for crriters is not occupied.
** Parameters :  randomly chosen x and y cooridinate.
** Pre-Conditions : the grid made by MakeGrid() function, ResetGrid() function.
** Post-Conditions : this function returns 0 if the chosen position is available and if not it returns 1. 
*********************************************************************/
int Grid::ValidStartCheck(int x, int y)
{
   
    
    if(pAnt[x][y] == NULL)
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
void Grid::PlayStart(int n)
{

	
	int step = n;

	int oldX, oldY, newX, newY, x, y, val, c;

 	
	for(int m = 0; m < step; m++)
	{
    

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(grid[i][j] == 'C')
            {
               /* count */
                pAnt[i][j]->SetCount(0);
                c = pAnt[i][j]->GetCount();

                /*move*/
                int move = pAnt[i][j]->CritterMove();
                
                oldX =  pAnt[i][j]->GetOldX();
                oldY =  pAnt[i][j]->GetOldY();

                newX =  pAnt[i][j]->GetXpos();
                newY =  pAnt[i][j]->GetYpos();
                
             
               if(move ==0)
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
                            pAnt[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            tempGrid[x][y] = 'T';    
							pAnt[x][y] = new Ant;
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
                          pAnt[oldX][oldY] = NULL;
                          x = newX;
                          y = newY;
                          pAnt[x][y] = new Ant;
             		      tempGrid[x][y] = 'T';    
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
                          pAnt[oldX][oldY] = NULL;
                          x = newX;
						  y = newY;
						  pAnt[x][y] = new Ant;
		                  tempGrid[x][y] = 'T';    

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
                            pAnt[oldX][oldY] = NULL;
                            x = newX;
                            y = newY;
                            pAnt[x][y] = new Ant;
      			            tempGrid[x][y] = 'T';   
					  }
                   } 
                	
                    c++;
                    pAnt[x][y]->SetCount(c);
                    c = GetCount();
                    
                    if(c == 3)
                    {
                        Breed(oldX, oldY);        
                        tempGrid[x][y] = 'T';
                    
                       for(int i = 0; i < rows; i++)
                         for(int j = 0; j < columns; j++)
                            pAnt[i][j]->SetCount(0);
                       
                    }
				 	
                    pAnt[x][y]->SetOldX(x);
                	pAnt[x][y]->SetOldY(y);
                    
                    
            
             }
          }
       }
         



                
       			ResetShowGrid(grid);
   
        
	    for(int a = 0; a < rows; a++)
        {
            for(int b = 0; b < columns; b++)
            {
                if(tempGrid[a][b] == 'T')
                {
                    
                    grid[a][b] = 'C';
                }
            
            }
        }
   
  
    			ResetTempGrid(tempGrid);
   
   				ShowGrid();
    			sleep(1);
    			system("clear");
		}


}

/********************************************************************* 
** Function : ShowGrid
** Description : This function displays the movement of critter(s).
** Parameters :  none
** Pre-Conditions : PlayStart function
** Post-Conditions : this function displays the movement of critter(s) after each movement.
*********************************************************************/
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

/********************************************************************* 
** Function : ValidMoveCheck
** Description : it decides whether the critter can move or not.
** Parameters :  the size of grid
** Pre-Conditions : StartPlay function
** Post-Conditions : this function lets StartPlay function whether a certain critte could move to randomly chosen position or not. 
*********************************************************************/
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
    else if ( pAnt[x][y] != NULL )
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

