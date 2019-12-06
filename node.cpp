//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include "students.h"

Node::Node() {
  value = 0;
  next = NULL;
}

Node::~Node() {
  delete &value;
  next = NULL;
}

void Node::setValue(int newvalue) {
  value = newvalue;
}

int Node::getValue() {
  return value;
}

void Node::setNext(Node* nextnext) {
  next = nextnext;
}

Node* Node::getNext() {
  return next;
}
