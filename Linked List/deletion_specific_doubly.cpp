// C++ Program to delete a node at a specific position
// in Doubly Linked List

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        data = d;
        prev = nullptr;
      	next = nullptr;
    }
};

// Function to delete a node at a specific position
// in the doubly linked list
Node *delPos(Node *head, int pos) {
  
    // If the list is empty
    if (head == nullptr) {
        return head;
    }

    Node *curr = head;

    // Traverse to the node at the given position
    for (int i = 1; curr != nullptr && i < pos; ++i) {
        curr = curr->next;
    }

    // If the position is out of range
    if (curr == nullptr) {
        return head;
    }

    // Update the previous node's next pointer
    if (curr->prev != nullptr) {
        curr->prev->next = curr->next;
    }

    // Update the next node's prev pointer
    if (curr->next != nullptr) {
        curr->next->prev = curr->prev;
    }

    // If the node to be deleted is the head node
    if (head == curr) {
        head = curr->next;
    }

    // Deallocate memory for the deleted node
    delete curr;
    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
  
    // Create a hardcoded doubly linked list:
    // 1 <-> 2 <-> 3
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head = delPos(head, 2);
    printList(head);

    return 0;
}
