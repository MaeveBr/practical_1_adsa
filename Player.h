#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER
#define PLAYER
class Player{
  public:
  Player();
  char move;
  public:
  std::string name;
  virtual void makeMove( ) = 0;
  virtual char return_move( ) = 0;
  std::string getName();
};
#endif
