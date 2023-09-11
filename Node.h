#include <iostream>
#ifndef __NODE__
#define __NODE__
class Node{
  private:
  Node(int data,Node* link);
  int data;
  Node* link;
};
#endif