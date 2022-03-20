#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){}

int FistfullODollars::count = -1;

char FistfullODollars::makeMove(){
    count++;
    if (count == 5){
        count = 0;
    }
    switch(count % 3){
        case 0:
            return 'P';
            break;
        case 1:
            return 'S';
            break;
        default: 
        return 'R';

    }
} 