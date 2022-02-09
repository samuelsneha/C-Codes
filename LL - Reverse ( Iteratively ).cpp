/// SEE HERE, WE ARE ACTUALLY REVERSING THE ENTIRE LIST ( NOT JUST PRINTING IT ITERATIVELY ) ITERATIVELY. PREVIOUSLY IT WAS DONE IN 3 METHODS RECURSIVELY.
#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}
Node * reverseLinkedList( Node * head )
{

  Node * prev = NULL;//Initializing with NULL to be on the safer side.
  Node * current = head;
  Node * next = NULL ;//Initializing with NULL to be on the safer side.
    while( current != NULL )
    {
        next = current -> next; // Storing the next for future use.
        current -> next = prev; // Building the link / connection between current and prev.
        prev = current; // Moving the prev to the next node.
        current = next; // Moving the current to the next node.

    }
   return( prev ); // Prev holds the new head so returning the head.
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        head = reverseLinkedList(head);
        print(head);
    }

    return 0;
}
