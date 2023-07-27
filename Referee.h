#include <iostream>
#include <string>
using namespace std;
#ifndef REFEREE
#define REFEREE
class Referee{
  public:
  Referee( ); // constructor
  Player* refGame(Player *player1, Player *player2);
  };

#endif