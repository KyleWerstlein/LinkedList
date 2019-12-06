//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>

class Node{
 public:
  Node();
  ~Node();
  void setValue(int newvalue);
  int getValue();
  void setNext(Node* nextnext);
  Node* getNext();
 private:
  int value;
  Node* next;
};
