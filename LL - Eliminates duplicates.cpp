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
Node *removeDuplicates(Node *head)
{

    if( head == NULL || head -> next == NULL )//THIS MEANS ITS EITHER A NULL LL OR A LL WHICH HAS ONLY ONE NODE.
    {
        return ( head );
    }
    Node * t1 = head;
    Node *t2 = head -> next;

    while( t2 != NULL )
    {
        if( t2 -> data == t1 -> data )
        {
            t2 = t2 -> next;
        }
        else
        {
           t1 -> next = t2;// Creating a link between t1 and t2.
            // t1 = t2;  OR  AS DONE BELOW IN LINE 39
           t1 = t1 -> next;//Shifting the t1 pointer to its next location.
           t2 = t2 -> next; //Shifting the t2 pointer to its next mode.
        }
    }
     t1 -> next = t2;
  //  t1 = t1 -> next;
    return ( head );
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}
