//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include <cstring>
#include <iomanip>


void print1(Node* firstNode); // print all nodes
void delete1(int nodeCount, Node* node); // delete node
int findNode(int id, Node* firstNode, Node* newNext, int nodeCount); // walk through the nodes until the right one is found

using namespace std;

int main() {
  bool isActive = true; // variables
  char input[25];
  int nodeCount = 0;
  Node* previousNode = 0;
  Node* firstNode = 0;
  Node* averageNode = 0;
  float gpaInput = 0;
  float gpaAverage = 0;
  while(isActive) { // select action
    cout << "What would you like to do?" << endl;
    cout << "ADD, DELETE, PRINT, QUIT, AVERAGE" << endl;
    cin.clear();
    cin.getline(input, 8, '\n');
    if(strcmp(input, "QUIT") == 0) {
	isActive = false;
      }
      else if (strcmp(input, "ADD") == 0) {
	cout << "What is the student's first name?" << endl;
	cin.get(input, 25);
	Student* current = new Student();
	cout << "What is the student's last name?" << endl;
	current->setName(input);
	cin >> input;
	current->setLastName(input);
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
      else if(strcmp(input, "AVERAGE") == 0) {
	averageNode = firstNode;
	for(int i = 0; i < nodeCount; i++) {
	  gpaAverage = gpaAverage + averageNode->getStudent()->getGPA();
	  averageNode = averageNode->getNext();
	}
	gpaAverage = gpaAverage / nodeCount;
	cout << fixed << setprecision(2) << "Average: " << gpaAverage << endl;
      }
      else if(strcmp(input, "PRINT") == 0) {
		  if(nodeCount > 1) {
			 print1(firstNode); 
		  }
		  else {
			 cout << "Please enter more than one student first." << endl;
		  }
      }
      else if(strcmp(input, "DELETE") == 0) {
	delete1(nodeCount, firstNode);
      }
  }
  return 0;
}

void print1(Node* firstNode) {
  cout << "Name: " << firstNode->getStudent()->getName() << " " << firstNode->getStudent()->getLastName() << endl;
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
  /*for(int i = 0; i < nodeCount; i++) {
    if(node->getStudent()->getId() == input) {
      findNode(node->getStudent()->getId() - 1, firstNode, node->getNext());
    }
    }*/
  findNode(input, firstNode, node->getNext(), nodeCount);
}

int findNode(int id, Node* firstNode, Node* newNext, int nodeCount) {
  cout << id << endl;
  cout << firstNode->getStudent()->getId() << endl;
  if(firstNode->getStudent()->getId() == id) {
    delete firstNode->getNext();
    firstNode->setNext(newNext);
    nodeCount--;
    return nodeCount;
  }
  else if(id > nodeCount) {
    cout << "Invalid ID" << endl;
  }
  else {
    findNode(id, firstNode->getNext(), newNext, nodeCount); // go until it reaches the correct node
  }
}
