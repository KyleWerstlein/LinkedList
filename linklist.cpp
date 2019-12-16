//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include "students.h"
#include <cstring>

void print(vector<Node*> nodes, vector<Student*> students, int id);

using namespace std;

int main() {
  bool isActive = true;
  char input[25];
  int nodeCount = 1;
  vector<Node*> nodes;
  vector<Student*> students;
  while(isActive) {
    cout << "What would you like to do?" << endl;
    cout << "ADD, DELETE, PRINT, QUIT" << endl;
    cin.getline(input, 7, '\n');
    if(strcmp(input, "QUIT") == 0) {
	isActive = false;
      }
      else if (strcmp(input, "ADD") == 0) {
	Student* current = new Student();
	Node* currentNode = new Node();
	currentNode->setValue(nodeCount);
	current->setId(nodeCount);
	nodeCount++;
	cout << "What is the student's name?" << endl;
	cin.get(input, 25);
	current->setName(input);
	nodes.push_back(currentNode);
	students.push_back(current);
	if(nodeCount > 2){
	  nodes[nodeCount - 1]->setNext(currentNode);
	}
      }
      else if(strcmp(input, "PRINT") == 0) {
	print(nodes, students, 1);
      }
  }
  return 0;
}

void print(vector<Node*> nodes, vector<Student*> students, int id) {
  Node* currentNode = nodes[id];
  if(currentNode->getNext != NULL) {
    cout << "test";
  }
}
