#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string.h>
Referee::Referee( ){};
  Player* Referee::refGame(Player *player1, Player *player2){
    if(player1->move == 'R' && player2->move == 'S'){
      return player1;
    }
    if(player1->move == 'S' && player2->move == 'P'){
      return player1;
    }
    if(player1->move == 'P' && player2->move == 'R'){
      return player1;
    }
    if(player1->move == player2->move){
      return nullptr;
    }
    if(player2->move == 'R' && player1->move == 'S'){
      return player2;
    }
    if(player2->move == 'S' && player1->move == 'P'){
      return player2;
    }
    if(player2->move == 'P' && player1->move == 'R'){
      return player2;
    }

  };