#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

    Node * reverse(Node* head)
 {
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(current != NULL)
   {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
  }


bool isPalindrome(Node *head)
{
    int count = 0;
    Node * temp = head;
    while( temp != NULL )
    {
        count++;
        temp = temp-> next;
    }
    if ( count == 0 || count == 1 )
        return true;
    int mid = (count ) /2;


    Node * temp1 = head;
    int i = 1;
    while(  i < mid )
    {
        temp1 = temp1 -> next;
        i++;
    }
    Node * head2 = temp1 -> next;
    temp1 -> next = NULL;


   head2 = reverse( head2 );


   Node * head1 = head;
  while( head2 != NULL && head1 != NULL )
  {
      if ( head2 -> data != head1 -> data )
      {
          return false;
      }
       head1 = head1 -> next;
       head2 = head2 ->next;
  }
    return true;

}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true"; // In strings
		else cout << "false"; // In strings

		cout << endl;
	}

	return 0;
}
