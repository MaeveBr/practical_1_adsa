#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string.h>
Referee::Referee( ){};
Player* Referee::refGame(Player *player1, Player *player2){
    if(player1->return_move( ) == 'R' && player2->return_move( ) == 'S'){
      return player1;
    }
    if(player1->return_move( ) == 'S' && player2->return_move( ) == 'P'){
      return player1;
    }
    if(player1->return_move( ) == 'P' && player2->return_move( ) == 'R'){
      return player1;
    }
    if(player1->return_move( ) == player2->return_move( )){
      return nullptr;
    }
    if(player2->return_move( ) == 'R' && player1->return_move( ) == 'S'){
      return player2;
    }
    if(player2->return_move( ) == 'S' && player1->return_move( ) == 'P'){
      return player2;
    }
    if(player2->return_move( ) == 'P' && player1->return_move( ) == 'R'){
      return player2;
    }

  };