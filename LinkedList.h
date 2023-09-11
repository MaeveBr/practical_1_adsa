#include <iostream>
#include "Node.h"
class LinkedList{
  private:
    Node* head;
  public:
    LinkedList();
    LinkedList(int* array, int len); //A constructor that creates a list of from a C-array of length len
    ~LinkedList();
    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int search(int target);
    void printList();
}