#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER
#define PLAYER
class Player{
  protected:
  // char move;
  std::string name;
  public:
  virtual void makeMove( ) = 0;
  virtual char return_move( ) = 0;
  virtual std::string getName() = 0;
};
#endif