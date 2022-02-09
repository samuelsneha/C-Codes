///HERE WE CAN DO THIS QUESTION BY TWO METHODS 1) USING LENGTH  2) WITHOUT USING LENGTH
/// 1) WITHOUT USING LENGTH
//Over here basically, we will be using 2 pointers fast and slow. Slow moves forward by one mode while fast moves forward by two nodes at run time. Thus because fast is moving 2 times as compared to slow, slow reaches the midpoint ( the first midpoint in case of even ) by the time fast reaches null/ end.

#include<bits/stdc++.h>
using namespace std;

/*class Node
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
Node *midPoint(Node *head)
{
       if( head == NULL  ) // BASE CONDITION
      {
        return ( head );
      }
      Node * temp = head;
      Node * slow = temp;
      Node * fast = temp -> next;

     while( fast != NULL && fast -> next != NULL  )
     {
     slow = slow -> next;
     fast = fast -> next -> next;
     }
     return ( slow );
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}*/
/// 2) USING LENGTH
// See here its safe to use ( length -1 ) for all even as well as odd cases.
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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
Node * midpoint(Node *head)
{
    if ( head == NULL )
    {
        return 0;
    }
    int count = 0;
    Node * temp = head;
    Node * temp1 = head;
    while( temp != NULL )
    {
        count++;
        temp = temp-> next;
    }
    int i;
    while( i < (count - 1)/2 )
    {
        temp1 = temp1 -> next;
        i++;
    }
    return ( temp1 );
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node * mp = midpoint( head );
		cout << mp -> data;
	}
	return 0;
}
