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
  Node* listHead = new Node(new Student((char*)"First", (char*)"Student", 123456, 5)); 
  Node* n = listHead;
  srand(time(NULL));
  for (int i = 0; i < 9; i++) {
    Node* nn = new Node(new Student((char*)"Firstname", (char*)"Lastname",
				    (rand() % 900001) + 100000, (float)(rand() % 401 + 101) / 100.f)); 
    n->setNext(nn);
    n = nn;
  }

  // Print the list 
  printList(listHead);
  return 0;
}
