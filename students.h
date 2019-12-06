//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>

class Student{
 public:
  Student();
  ~Student();
  void setName(char newname[50]);
  char* getName();
  void setId(int newId);
  int getId();
 private:
  char name[50];
  int id;
};
