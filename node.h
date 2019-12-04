#include <iostream>

using namespace std;

class Node{
 public:
  Node();
  ~Node();
  void setValue();
  int getValue();
  void setNext();
  Node* getNext();
 private:
  int value;
  Node* next;
};
