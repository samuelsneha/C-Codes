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
Node *appendLastNToFirst(Node *head, int n)
{
    if(head == NULL)//BASE CONDITIONS
    {
        return head;
    }
    if(n == 0)//BASE CONDITIONS
    {
        return head;
    }


    int count =1;
    Node * temp = head;
    while( temp -> next != NULL )
    {
        count ++;
        temp = temp -> next;
    } //Finding the length of the Linked List



    temp = head;
    int i =1;
    while( i < count - n )
 // We are doing < count - n instead of <= count - n because after this we are doing temp = temp -> next. So eventually in the temp the next value ie. n here would go. So we do < count - n. If it would have been temp in place of temp-> next, then we would have done <= count - n
    {
        temp = temp -> next;
        i++;
    }// Reaching till the nth node of the Linked List


    Node * head2 = temp -> next;
    temp -> next = NULL;//Breaking the link of the Linked Lists into 2 parts.


  //  Node * tail = head2;
    Node * temp1 = head2;
    while( temp1 -> next != NULL  )
    {
         temp1 = temp1-> next;
        // tail = temp1;
    }
    temp1 -> next = head; //Attaching the head of first list to the end of second list.
    return ( head2 );// Returning the head of second list
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
