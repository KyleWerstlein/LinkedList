//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include <cstring>


void print1(Node* firstNode);
void delete1(int nodeCount, Node* node);
Node* findNode(int id, Node* firstNode, Node* newNext);

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
	  previousNode->setNext(currentNode);
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
      else if(strcmp(input, "DELETE") == 0) {
	delete1(nodeCount, firstNode);
      }
  }
  return 0;
}

void print1(Node* firstNode) {
  cout << firstNode->getStudent()->getName() << ", " << endl;
  if(firstNode->getNext() != NULL) {
    print1(firstNode->getNext());
  }
}

void delete1(int nodeCount, Node* firstNode) {
  char input[25];
  Node* node;
  Node* newNext = node->getNext();
  cout << "Which student would you like to delete? (Case sensative)" << endl;
  cin >> input;
  for(int i = 0; i < nodeCount; i++) {
    if(strcmp(node->getStudent()->getName(), input) == 0) {
      findNode(node->getStudent()->getId() - 1, firstNode, node->getNext());
    }
  }
}

Node* findNode(int id, Node* firstNode, Node* newNext) {
  if(firstNode->getStudent()->getId() == id) {
    delete firstNode->getNext();
    firstNode->setNext(newNext);
  }
  else {
    findNode(id, firstNode->getNext(), newNext);
  }
}
