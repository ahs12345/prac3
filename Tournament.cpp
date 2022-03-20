#include "Tournament.h"

Tournament::Tournament(){}

Player* Tournament::run(array<Player *, 8>  competitors) {
    Player* q1 = winner(competitors[0], competitors[1]);
    Player* q2 = winner(competitors[2], competitors[3]);
    Player* q3 = winner(competitors[4], competitors[5]);
    Player* q4 = winner(competitors[6], competitors[7]);

    Player * s1 = winner(q1,q2);
    Player * s2 = winner(q3,q4);
    
    Player *champion = winner(s1,s2);

    return champion;


}

Player* Tournament::winner(Player *player1, Player *player2){
    int player1W, player2W = 0;

    for (int i =0; i<5;i++){
        Referee myReferee;
        char result = myReferee.refGame(player1, player2);
        if (result == 'W'){
            player1W++;
        }
        else if(result == 'L'){
            player2W++;
        }
    }
    if (player1W>=player2W){
        return player1;
    }
    else return player2;
}
