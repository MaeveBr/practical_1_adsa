#include "Human.h"
#include <iostream>
#include <string.h>
Human::Human( ){}
Human::Human(std::string name){
    name = "Human";
  }
char Human::return_move( ){
  return H_move;
}
void Human::makeMove(){
  std::cout<<"Enter move:";
  std::cin >> H_move ;
}