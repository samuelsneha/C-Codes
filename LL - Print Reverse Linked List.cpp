/// SEE HERE WE ARE JUST PRINTING THEM IN REVERSE, NOT ACTUALLY REVERSING THEM. UNDERSTAND THE DIFFERENCE BETWEEN THIS QUESTION, AND ACTUALLY REVERSING QUESTION.
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
void printReverse(Node *head)
{
    if ( head == NULL )
    {
        return;
    }
    Node * temp = head;
    if( temp -> next == NULL )
    {
        cout << temp -> data << " ";
        return;
    }
    printReverse( temp -> next );
    cout << temp -> data << " ";
    return;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		printReverse(head);
		cout << endl;
	}
	return 0;
}
