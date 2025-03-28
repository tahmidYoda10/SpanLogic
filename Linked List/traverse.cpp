#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

class Node{
public:
   int data;
   Node *next;

   //create node
   Node(int new_data){
    this -> data = new_data;
    this -> next = nullptr;
   }
};

void traverselist(Node *head){
    while (head != nullptr){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << nl;
}

int main(){
    
    //assign values

    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    //call the function
    traverselist(head);

    return 0;
}