#include "Computer.h"
#include <iostream>
#include <string.h>
std::string getName( ){return "Computer";};
void Computer::makeMove( ){}
void Computer::getName(std::string name){this->name = name;} 
char Computer::return_move( ){ 
  return move;
};
