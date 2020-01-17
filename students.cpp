#include<vector>
#include "students.h"
#include <iostream>

using namespace std;

Student::Student() {
  id = 0;
  for(int i = 0; i < 25; i++) {
    lastName[i] = ' ';
  }
}

Student::~Student() {
  delete &id;
}

void Student::setGPA(float newGPA) {
  gpa = newGPA;
}

float Student::getGPA() {
  return gpa;
}

void Student::setName(char newname[25]) {
  for (int i = 0; i < 25; i++) {
    name[i] = ' ';
  }
  for (int i = 0; i <25; i++) {
    name[i] = newname[i];
  }
}

char* Student::getLastName() {
  return lastName;
}

void Student::setLastName(char newLast[25]) {
  for (int i = 0; i < 25; i++) {
    lastName[i] = newLast[i];
  }
}

char* Student::getName() {
  return name;
}

void Student::setId(int newId) {
  id = newId;
}

int Student::getId() {
  return id;
}
