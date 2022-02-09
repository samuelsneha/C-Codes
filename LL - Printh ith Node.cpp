///HERE  WE  PRINT  THE  ith  NODE  USING  RECURSION  AND  WITHOUT  USING  RECURSION.
///1) WITHOUT USING RECURSION
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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail-> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
int length ( Node * head )
{
      // if ( head == NULL )
     //
    //  return 0;
   //
    int count = 0;
    Node * temp = head;
    while( temp -> next != NULL )
    {
        count++;
        temp = temp-> next;
    }
    return( count + 1 );
}
void printIthNode(Node *head, int i)
{
    if( head == NULL ) //BASE CONDITION FOR ALL LL SUMS
    {
        return;
    }
    int catching = length( head );
    if ( i > catching - 1) // FIRST CONDITION
      {
         return;
      }
    Node * temp = head;
 // for( int j= 0; count < i; count++ )
//  {
//      temp=temp->next;
//  }
     for( int j = 1; j < i; j++ )
    {
        temp=temp->next;
    }
       temp = temp -> next;
       cout << temp -> data;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
} */

/// 2) USING RECURSION
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
			tail-> next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
void printIthNode(Node *head, int i)
{
    if(head==NULL)
    {
        return;
    }
    if(i==0)
    {
        cout<<head->data;
        return;
    }
    printIthNode(head->next,i-1);
    return;

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}
