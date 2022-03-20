#ifndef FistfullODollars_H
#define FistfullODollars_H
#include "Player.h"
class FistfullODollars: public Player{
    public:
    FistfullODollars();
    char makeMove();
    static int count;  

};
#endif