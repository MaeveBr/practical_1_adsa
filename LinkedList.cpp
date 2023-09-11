#include <iostream>
#include "Node.h"
#include "LinkedList.h"
LinkedList::LinkedList(){
  head = nullptr;
}
LinkedList::LinkedList(int* array, int len){
  Node *prev = head;
  Node *curr;
    for(int i = 0;i<len;i++){
      curr = new Node(array[i],nullptr);
      prev->link = curr;
      prev = curr;
    }
}
LinkedList::insertPosition(int pos, int newNum){
  
}
~LinkedList::LinkedList();
void LinkedList::insertPosition(int pos, int newNum){
  if (pos == 0){
    head = new Node(newNum,head);
    return; 
  }
}
bool deletePosition(int pos){
  
}

Node *preNode = traverse(pos-1);
Node *newNode = new Node(pos,preNode->next) ;
preNode->next =newNode;

