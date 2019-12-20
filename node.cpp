//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include "students.h"

Node::Node(Student* student) {
  node = NULL;
  student = student;
}

Node::~Node() {
  delete &student;
  delete &node;
}

/*void Node::setStudent(Student* newStudent) {
  student = newStudent;
  }*/

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* nextNode) {
  node = nextNode;
}

Node* Node::getNext() {
  return node;
}
