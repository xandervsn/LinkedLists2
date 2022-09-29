// Header is in Node.h 

#include "Node.h"

using namespace std;

// Print the linked list fromt the first node 
void printList(Node* n) {
  while (n != nullptr) {
    Student* s = n->getStudent();
    cout << s->firstname << ' ' << s->lastname << ' ' << s->id << ' ' << s->gpa << '\n';
    n = n->getNext();
  }
  cout << endl; // Flush output stream and add new line 
}

int main() {
  // Make list 
  Node* listHead = new Node(new Student((char*)"StudentOne", (char*)"Lastname", 5, 5));
  listHead->setNext(new Node(new Student((char*)"StudentTwo", (char*)"Lastname", 3, 3)));
  listHead->getNext()->setNext(new Node(new Student((char*)"StudentThree", (char*)"Lastname", 69, 69)));
  // Print the list 
  printList(listHead);
  return 0;
}
