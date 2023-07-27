#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef COMPUTER
#define COMPUTER
class Computer:public Player{
  public:
  Computer();
  char C_move;
  void makeMove( );
  char return_move( );
  std::string getName();
};

#endif