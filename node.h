//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>

class Node{
 public:
  Node(); // constructor
  ~Node(); // destructor
  void setValue(int newvalue); // change the number of value
  int getValue(); // return value
  void setNext(Node* nextnext); // change next node
  Node* getNext(); // return next node
 private:
  int value;
  Node* next;
};
