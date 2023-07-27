#include "Human.h"
#include <iostream>
#include <string.h>
Human::Human( ){
  name = "Human";
  // std::cout<<"Enter move:";
  // std::cin >> H_move ;
}
Human::Human(std::string name){
  this->name = "Human";
  std::cout<<"Enter move:";
  // std::cin >> H_move ;
  // this->name = name;
  }
char Human::return_move( ){
  return H_move;
}
void Human::makeMove(){
  std::cout<<"Enter move:";
  std::cin >> H_move ;
}
std::string Human::getName(){return name;}