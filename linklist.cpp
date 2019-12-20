//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include "node.h"
#include "students.h"
#include <cstring>

void print1(vector<Node*> nodes, vector<Student*> students, int nodeCount, int id);

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
    cin.getline(input, 8, '\n');
    //cin.get();
    if(strcmp(input, "QUIT") == 0) {
	isActive = false;
      }
      else if (strcmp(input, "ADD") == 0) {
	Student* current = new Student();
	Node* currentNode = new Node(current);
	//currentNode->setValue(nodeCount);
	current->setId(nodeCount);
	nodeCount++;
	cout << "What is the student's name?" << endl;
	cin.get(input, 25);
	current->setName(input);
	nodes.push_back(currentNode);
	students.push_back(current);
      }
	  else if(strcmp(input, "PRINT") == 0) {
	print1(nodes, students, nodeCount, 1);
    }
      
  }
  return 0;
}

void print1(vector<Node*> nodes, vector<Student*> students, int nodeCount, int id) {
  Node* currentNode = nodes[id];
  if(nodeCount < 2) {
    cout << "You need at least two entries" << endl;
  }
  else {
    //if(id == 1) {
    //char name[50] = students[i]
    //cout << students.at(id)->getName() << endl;
      id++;
      if(currentNode->getNext() != NULL) {
	print1(nodes, students, nodeCount, id);
      }
      //cout << currentNode->getNext->getName();
      //}
  }
}
