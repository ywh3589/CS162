#include "ant.hpp"



void Ant::SetCount(int x)
{
    count = x;
}

int Ant::GetCount()
{
    return count;
}

void Ant::Breed(int x, int y)
{

    pAnt[x][y] = new Ant;

}




