/// The concept used in this code is exactly similar to Even After Odd sum.
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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail -> next = newNode;
			tail = newNode;
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
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
   if (head1 == NULL) // BASE CONDITION 1
    {
        return head2;
    }

    if (head2 == NULL) // BASE CONDITIION 2
    {
        return head1;
    }

    Node * finalhead = NULL;
    Node * finaltail = NULL;

    while( head1 != NULL && head2 != NULL )
    {
        if( head1 -> data < head2 -> data )
        {
            if( finaltail == NULL )
            {
                finalhead = head1;
                finaltail = head1;
            }
            else
            {
                 finaltail -> next = head1; // DONT FORGET THIS. FIRST YOU HAVE TO BUILD A LINK AND THEN MOVE THE POINTER.
                 finaltail = head1;

            }
              head1 = head1 -> next; //THIS IS WHERE YOU SHOULD WRITE IT, NOT INSIDE THE ELSE THE WAY YOU DID INITIALLY. ALSO UNDERSTAND WHY.
        }
        else
        {
             if( finaltail == NULL )
            {
                finalhead = head2;
                finaltail = head2;
            }
            else
            {
                finaltail -> next = head2;// DONT FORGET THIS . FIRST YOU HAVE TO BUILD A LINK AND THEN MOVE THE POINTER.
                finaltail = head2;

            }
              head2 = head2 -> next;//THIS IS WHERE YOU SHOULD WRITE IT, NOT INSIDE THE ELSE THE WAY YOU DID INITIALLY. ALSO UNDERSTAND WHY.
        }
    }
    if( head1 != NULL ) /// Usually we do a while loop in sums of arrays/strings where a similar concept is used, but here we are doing a if loop because its LL and in LL once we connect the head the rest of it continues till its null.
    {
        finaltail -> next = head1;
    }
    if( head2 != NULL ) /// Usually we do a while loop in sums of arrays/strings where a similar concept is used, but here we are doing a if loop because its LL and in LL once we connect the head the rest of it continues till its null.
    {
        finaltail -> next = head2;
    }

    return( finalhead );
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
