#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef HUMAN
#define HUMAN
class Human:public Player{
  protected:
  public:
  Human();
  Human(std::string name);
  void makeMove();
  char return_move( );
};

#endif