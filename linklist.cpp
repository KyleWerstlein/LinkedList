//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include <cstring>
#include <iomanip>


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
  float gpaInput = 0;
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
	cout << "What is the student's GPA?";
	cin >> gpaInput;
	current->setGPA(gpaInput);
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
  cout << "Name: " << firstNode->getStudent()->getName() << endl;
  cout << "ID: " << firstNode->getStudent()->getId() << endl;
  cout <<  "GPA: " << fixed << setprecision(2) << firstNode->getStudent()->getGPA() << endl;
  cout << endl;
  if(firstNode->getNext() != NULL) {
    print1(firstNode->getNext());
  }
}

void delete1(int nodeCount, Node* firstNode) {
  int input;
  Node* node = firstNode;
  Node* newNext = node->getNext();
  cout << "Enter the ID of the student you would like to delete." << endl;
  cin >> input;
  cout << "input: " << input << endl;
  /*for(int i = 0; i < nodeCount; i++) {
    if(node->getStudent()->getId() == input) {
      findNode(node->getStudent()->getId() - 1, firstNode, node->getNext());
    }
    }*/
  while(node->getStudent()->getId() != input && input <= nodeCount) {
    cout << "newtest" << endl;
  }
}

Node* findNode(int id, Node* firstNode, Node* newNext) {
  cout << "test" << endl;
  if(firstNode->getStudent()->getId() == id) {
    delete firstNode->getNext();
    firstNode->setNext(newNext);
  }
  else {
    findNode(id, firstNode->getNext(), newNext);
  }
}
