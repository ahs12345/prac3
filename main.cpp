#include "Referee.h"
#include "Bureaucrat.h"
#include <iostream>
using namespace std;
int main() {
    Human player1;
    Bureaucrat player2;
    Referee myReferee;

    cout << myReferee.refGame(&player1,&player2);
}