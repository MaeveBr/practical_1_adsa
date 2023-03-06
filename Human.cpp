#include "Human.h"
#include <iostream>
#include <string.h>
  Human::Human(std::string name){
    name = "Human";
  }
char Human::return_move( ){
  return move;
}
void Human::makeMove(){
  std::cout<<"Enter move:"<<std::endl;
  std::cin >> move;
}
void Human::getName(std::string name){
  this->name = name;
}