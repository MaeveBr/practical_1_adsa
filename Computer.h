#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef COMPUTER
#define COMPUTER
class Computer:public Player{
  public:
  std::string name;
  Computer(){
    move = 'R';
  }
  void makeMove( );
  char return_move( );
  void getName(std::string name);
  
};

#endif