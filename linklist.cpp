//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include <cstring>


void print1(Node* firstNode);

using namespace std;

int main() {
  bool isActive = true;
  char input[25];
  int nodeCount = 0;
  Node* previousNode = 0;
  Node* firstNode = 0;
  while(isActive) {
    cout << "What would you like to do?" << endl;
    cout << "ADD, DELETE, PRINT, QUIT" << endl;
    cin.getline(input, 8, '\n');
    //cin.get();
    if(strcmp(input, "QUIT") == 0) {
	isActive = false;
      }
      else if (strcmp(input, "ADD") == 0) {
	cout << "What is the student's name?" << endl;
	cin.get(input, 25);
	Student* current = new Student();
	current->setName(input);
	current->setId(nodeCount);
	Node* currentNode = new Node(current);
	if(nodeCount > 0) {
	  currentNode->setNext(previousNode);
	}
	previousNode = currentNode;
	nodeCount++;
	if(nodeCount == 1) {
	  previousNode->setNext(currentNode);
	  firstNode = previousNode;
	}
      }
      else if(strcmp(input, "PRINT") == 0) {
	print1(firstNode);
      }
  }
  return 0;
}

void print1(Node* firstNode) {
  while(firstNode->getNext != NULL) {
    
  }
}
