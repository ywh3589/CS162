#ifndef CRITTER_HPP
#define CRITTER_HPP
#include "grid.hpp"



class Critter
{
    private:
        int oldX;
        int oldY;
        int x_pos;
        int y_pos;
     //   char shape;
    public:
       
       void SetOldX(int x);
       int GetOldX();
       void SetXpos(int x);
       int GetXpos();
       void SetOldY(int y);
       int GetOldY();
       void SetYpos(int y);
       int GetYpos();
       int CritterMove();

};

#endif
