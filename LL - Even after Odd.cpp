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

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *evenAfterOdd(Node *head)
{
    if( head == NULL ) // BASE CONDTION
    {
        return ( head );
    }

	Node * oddhead = NULL;
    Node * oddtail = NULL;
    Node * evenhead = NULL;
    Node * eventail = NULL;

    while ( head != NULL )
    {
        if ( head -> data % 2 == 0 )
        { //Its similar to the logic you used for takeinput() function.
            if( evenhead == NULL )
            {
                evenhead = head;
                eventail = head;
            }
            else
            {
                eventail -> next = head;
                eventail = head;// You cant put eventail = eventail -> next here because eventail is not being incremented by one node/ its not being traversed through the list through each node. Its supposed to move to the position of where head was found hence, you cant do eventail = eventail -> next.
            }
        }
        else
        { //Its similar to the logic you used for takeinput() function.
            if ( oddhead == NULL )
            {
                oddhead = head;
                oddtail = head; // You cant put oddtail = oddtail -> next here because oddtail is not being incremented by one node/ its not being traversed through the list through each node. Its supposed to move to the position of where head was found hence, you cant do oddtail = oddtail -> next.
            }
            else
            {
                oddtail -> next = head;
                oddtail = head;
            }
        }
        head = head -> next;
    }
 // Now these are the three conditions for this question:
       if( oddtail != NULL && eventail != NULL ) /// Usually we do a while loop in sums of arrays/strings where a similar concept is used, but here we are doing a if loop because its LL and in LL once we connect the head the rest of it continues till its null.
     {
       oddtail -> next = NULL;
       eventail -> next = NULL;
       oddtail -> next = evenhead;
       return ( oddhead );
     }
    else if( oddtail != NULL && eventail == NULL ) /// Usually we do a while loop in sums of arrays/strings where a similar concept is used, but here we are doing a if loop because its LL and in LL once we connect the head the rest of it continues till its null.
    {
        oddtail -> next = NULL;
        return( oddhead );
    }
    else  /// Usually we do a while loop in sums of arrays/strings where a similar concept is used, but here we are doing a if loop because its LL and in LL once we connect the head the rest of it continues till its null.
    {
        eventail -> next = NULL;
        return( evenhead );
    }

}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
