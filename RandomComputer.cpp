#include "RandomComputer.h"
#include <stdlib.h>

RandomComputer::RandomComputer(){}

char RandomComputer::makeMove(){
    char myArray[] = "RPS";
    return myArray[rand() % 3];
} 