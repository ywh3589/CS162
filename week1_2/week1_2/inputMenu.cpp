
void Critter::StartPoint(Grid *pGrid)
{
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
        int x, int y;
        /*user setting*/
        cout << "input x position" << endl;
        cin x;
        while((x < rows_size) || (x > rows_size) )
        {
            cout << "invalid position, enter the valid position" << endl;
            cin >> x;
        }
        cout << " input y position" << endl;
        cin y;
        while( (y < column_size) || (y > column_size) )
        {
            cout << "invalid position, enter the valid position" << endl;
            cib >> y;
        }

    
    }
    else 
    {
               
        StartPoint(pGrid)
    
        
    }


    return 0;

}
