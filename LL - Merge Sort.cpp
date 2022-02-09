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
Node *mergeSort(Node *head)
{

     if(head == NULL || head->next == NULL ) // BASE CONDITION
    {
        return head;
    }
    //SMALL CALCULATION
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* head2 = slow->next;//Storing value of head2
    slow->next = NULL;//putiing NULL so that the link breaks


    //RECURSION
    Node* head11 = mergeSort(head);//finding the midpoint for first half of LL
    Node* head12 = mergeSort(head2);//finding the midpoint for second half of LL
    // Dont think much about this, be assured that recursion will its job. Just understand the logic/concept from the picture shared by TA and from the code understand till the first level. For the code, dont go beyond lenvel1 else it will be too confusing.


    // SMALL CALCULATION
    if (head11 == NULL)
    {
        return head12;
    }
    if (head12 == NULL)
    {
        return head11;
    }
    Node * finalhead = NULL;
    Node * finaltail = NULL;
    while( head11 != NULL && head12 != NULL )
    {
        if( head11 -> data < head12 -> data )
        {
            if( finaltail == NULL )
            {
                finalhead = head11;
                finaltail = head11;
            }
            else
            {
                 finaltail->next = head11;
                finaltail = head11;

            }
              head11 = head11 -> next;
        }
        else
        {
             if( finaltail == NULL )
            {
                finalhead = head12;
                finaltail = head12;
            }
            else
            {
                finaltail->next = head12;
                 finaltail = head12;

            }
              head12 = head12 -> next;
        }
    }
    if( head11 != NULL )
    {
        finaltail -> next = head11;
    }
    if( head12 != NULL )
    {
        finaltail -> next = head12;
    }

    return( finalhead );
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}
	return 0;
}
