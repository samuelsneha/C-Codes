///WE ARE FINDING THE LENGTH OF THE SCREEN USING RECURSION AND WITHOUT USING RECURSION.
/// 1)  WITHOUT RECURSION
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
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
int length(Node *head)
{
    if ( head == NULL )
    {
        return 0;
    }
    int count = 0;
    Node * temp = head;
    while( temp -> next != NULL )
    {
        count++;
        temp = temp-> next;
    }
    return( count + 1 );

    ///OR

   // if ( head == NULL )
  //  {
  //      return 0;
  //  }
  //  int count = 1;
  //  Node * temp = head;
  //  while( temp -> next != NULL )
  //  {
  //     count++;
  //    temp = temp-> next;
  //  }
   // return( count );
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		cout << length(head) << endl;
	}
	return 0;
} */

/// 2) WITH RECURSION

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
        } else
        {
            tail->next = newNode;
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
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int length(Node *head)
{

    if( head == NULL) ///BASE CONDITION
        return 0;

  // if( head -> next == NULL )
 //        return 1;

    int ans = length( head -> next);
    return ( ans + 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        cout << length(head) << "\n";
    }
}
