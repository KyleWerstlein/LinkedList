//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include <vector>

using namespace std;

class Student{
 public:
  Student();
  ~Student();
  void setName(char newname[70]);
  vector<char> getName();
  void setId(int newId);
  int getId();
 private:
  vector<char> name;
  int id;
};
