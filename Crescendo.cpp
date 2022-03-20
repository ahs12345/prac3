#include "Crescendo.h"

Crescendo::Crescendo(){}

int Crescendo::count = -1;

char Crescendo::makeMove(){
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