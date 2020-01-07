#include<vector>
#include "students.h"
#include <iostream>
//#include<bits/stdc++.h>

using namespace std;

Student::Student() {
  id = 0;
}

Student::~Student() {
  delete &id;
}

void Student::setName(char newname[25]) {
  for (int i = 0; i < 25; i++) {
    name[i] = ' ';
  }
  for (int i = 0; i <25; i++) {
    name[i] = newname[i];
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
