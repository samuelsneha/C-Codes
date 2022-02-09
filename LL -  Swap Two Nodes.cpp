/// SEE HERE IN THIS CODE, IN THE QUESTION ITSELF IT IS GIVEN THAT THE INDEXING STARTS FROM 0. SO WE STARTED THE FOR LOOP FROM 0. IF IN THE QUESTION IT WAS GIVEN AS INDEXING STARTS FROM 1/ FROM THE SAMPLE OUTPUTS IT WAS SHOWN THAT INDEXING STARTS FROM 1 THEN THE INITIALIZATION IN THE FOR LOOP WOULD HAVE BEEN FROM 1.
///  SEE THE CONCEPT OF a < ( i - 1) OR  (a < i) REMAINS SAME, ONLY DIFFERENCE IS FROM WHERE IT STARTS AND THAT DEPENDS ON THE INDEXING GIVEN IN THE QUESTION.

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

Node* swapNodes(Node *head, int i, int j )
{
    Node *p1=head;
	Node*c1=head;
    for(int a=0; a < i - 1; a++ )//If i would have been 0, it wouldnt have entered this for loop.
    {
        p1=p1->next;
    }
    if(i!=0)
    c1=p1->next; // c1 has the ith element and p1 has ( i - 1)th element.


    Node *p2=head;
    Node*c2=head;
    for(int b=0; b < j - 1; b++)//If j would have been 0, it wouldnt have entered this for loop.
    {
        p2=p2->next;
    }
    if(j!=0)
    c2=p2->next; // c2 has the jth element and p2 has ( j - 1 )th element.


    if(i!=0)
    {
        p1->next=c2;
    }
    else
    {
        head=c2; // This is where i= 0 ka condition is handled.if i is 0 then c2 becomes head.
    }
    if (j != 0)
    {
    	p2->next = c1;
    }
    else
    {
    	head = c1; // This is where j= 0 ka condition is handled. if j is 0 then c1 becomes head
    }


    Node *temp=c2->next; //Storing the value of c2 ka next in temp
    c2->next=c1->next; // Whatever was after c1, that we are putting after c2.
    c1->next=temp; // And whatever was after c2, put them after c1.
    return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
