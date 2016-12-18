#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"

class Critter
{
    private:
        int x_pos;
        int y_pos;
        char shape;
    public:
       void SetXpos(int x);
       int GetXpos();
       void SetYpos(int y);
       int GetYpos();
      // void  MoveCritter(int x, int y);

};

#endif
