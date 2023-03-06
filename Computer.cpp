#include "Computer.h"
#include <iostream>
#include <string.h>
Computer::Computer( ){
    C_move = 'R';
    name = "Computer";
}
void Computer::makeMove( ){}
// void Computer::getName(std::string name){this->name = name;} 
char Computer::return_move( ){ 
  return C_move;
};