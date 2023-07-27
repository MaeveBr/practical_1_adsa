#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
#ifndef HUMAN
#define HUMAN
class Human:public Player{
  public:
  char H_move;
  Human();
  Human(std::string name);
  void makeMove();
  char return_move( );
  std::string getName();
};

#endif