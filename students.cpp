#include "students.h"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

Student::Student() {
  
}

Student::~Student() {
  
}

void Student::setName(char newname[70]) {
  name.clear();
  for (int i = 0; i <my_sizeof(newname); i++) {
    name.push_back(newname[i]);
  }
}

vector<char> Student::getName() {
  return name;
}

void Student::setId(int newId) {
  id = newId;
}

int Student::getId() {
  return id;
}
