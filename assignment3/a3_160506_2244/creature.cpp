#include "creature.hpp"
//each class has its own constructor creature can not have a constructor
//so this thing below will be deleted

void Creature::SetStrength(int s)
{
    strength = s;

}

int Creature::GetStrength()
{

    return strength;

}


