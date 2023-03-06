#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef HUMAN
#define HUMAN
class Human:public Player{
  protected:
  std::string name;
  public:
  Human();
  Human(std::string name);
  void makeMove();
  void getName(std::string name);
  char return_move( );
};

#endif