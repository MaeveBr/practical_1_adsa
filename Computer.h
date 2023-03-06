#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef COMPUTER
#define COMPUTER
class Computer:public Player{
  public:
  char C_move;
  Computer();
  void makeMove( );
  char return_move( );
  
};

#endif