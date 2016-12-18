#include "critter.hpp"


Critter::Critter()
{
    moveCount = 0;

#if 0
    //Grid grid;
    Grid *pgrid;
    pgrid = &grid;
#endif

    int r = pgrid->getRows();
    int c = pgrid->getColumns();

    unsigned seed;
    seed = time(0);
    srand(seed);

    XCoord = rand() % c;
    YCoord = rand() % r;
}



void Critter::moveCritter()// grid size needed. to get a random number and to find out when the critter squashes, size is needed x,y = size
{

    std::cout << "moveCritter1" << std::endl;
    int r = pgrid->getRows();
    int c = pgrid->getColumns();

    std::cout << "r = " << r << std::endl;
    std::cout << "c = " << c << std::endl;


    while( ((0 <= XCoord) && (XCoord <= c)) && ((0 <= YCoord) && (YCoord <= r)))
    {
//XCoord and YCoord will be created using srand function
    unsigned seed;
    seed = time(0);
    srand(seed);

    int number = rand() % 4;

    if( number == 0 ) 
    XCoord = XCoord + 1;

    else if( number == 1)
    XCoord = XCoord - 1;

    else if( number == 2)
    YCoord = YCoord + 1;

    else if( number == 3 )
    YCoord = YCoord - 1;
    
    pgrid->updateLocation(XCoord, YCoord);
    pgrid->showGrid();

    moveCount++;
   }

    std::cout << "Count = " << moveCount << std::endl;
}
