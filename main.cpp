#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"
#include "Player.h"
#include "Tournament.h"
#include <array>
#include <typeinfo> 

#include <iostream>
using namespace std;

int main() {
    Avalanche player1;
    Avalanche player2;
    Avalanche player3;
    Avalanche player4;
    Avalanche player5;
    Bureaucrat player6;
    Avalanche player7;
    Avalanche player8;
    

    array<Player *, 8> myArray = {&player1, &player2, &player3, &player4, &player5, &player6, &player7, &player8};
    Tournament myTournament;
    Player * winner = (myTournament.run(myArray));
    cout << typeid(*winner).name();
    
    
    


    // cout << myReferee.refGame(&player1,&player2);
}