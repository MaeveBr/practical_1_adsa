#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER
#define PLAYER
class Player{
  public:
  char move;
  virtual void makeMove( ) = 0;
  virtual void getName(std::string name) = 0;
  virtual char return_move( ) = 0;
};

#endif
