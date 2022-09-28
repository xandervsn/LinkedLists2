#include <iostream>
#include <cstring>

class Student {
 public:
  char firstname[35];
  char lastname[35];
  int id;
  float gpa;
  
  Student(char*, char*, int, float); // Constructor 
};

class Node {
 private:
  Student* student;
  Node* next;
 public:
  Node* getNext(); // Get pointer to next node
  Student* getStudent(); // Get pointer to student 
  void setNext(Node*); // Set next node pointer
  Node(Student*); // Constructor
  ~Node(); // Destructor 
};
