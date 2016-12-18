#include "critter.hpp"

void Critter::SetXpos(int x)
{
    x_pos = x;
}
       
int Critter::GetXpos()
{
    return x_pos;
}
       
void Critter::SetYpos(int y)
{
    y_pos = y;
}

int Critter::GetYpos()
{
    return y_pos;
}



#if 0
int Critter::CritterMove()
{

    unsigned seed;
    seed = time(0);
    srand(seed);

    int direction_flag = rand() % 4;
    
    if(direction_flag == 0)
    {
        x_pos = x_pos + 1;
        return x_pos;
    }
    else if(direction_flag == 1)
    {
        x_pos = x_pos - 1;
        return x_pos;
    }
    else if(direction_flag == 2)
    {
        y_pos = y_pos + 1;
        return y_pos;
    }
    else if(direction_flag == 3)
    {
        y_pos = y_pos - 1;
        return y_pos;
    }
    
   
}
#endif
#if 0
int Critter::GetMove()
{
    int move = Move();
    return move;
}
#endif
