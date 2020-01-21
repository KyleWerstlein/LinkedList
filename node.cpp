//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"

Node::Node(Student* student1) {
  node = NULL;
  student = student1;
}

Node::~Node() {
  delete &student;
  delete &node;
}

// getters and setters

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* nextNode) {
  node = nextNode;
}

Node* Node::getNext() {
  return node;
}
