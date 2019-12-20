//Kyle Werstlein
//12/6/19
//Linked List

#include <iostream>
#include <vector>

using namespace std;

class Student{
 public:
  Student(); // constructor
  ~Student(); // destructor
  void setName(char newname[25]); // change name
  vector<char> getName(); // return name
  void setId(int newId); // change id
  int getId(); // return id
 private:
  vector<char> name;
  int id;
};
