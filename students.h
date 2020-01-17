//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>

using namespace std;

class Student{
 public:
  Student(); // constructor
  ~Student(); // destructor
  void setName(char newname[25]); // change name
  char* getName(); // return name
  void setId(int newId); // change id
  int getId(); // return id
  float getGPA();
  void setGPA(float newGPA);
  void setLastName(char newLast[25]);
  char* getLastName();
 private:
  char name[25];
  char lastName[25];
  int id;
  float gpa;
};
