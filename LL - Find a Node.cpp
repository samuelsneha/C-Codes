/// SEE HERE WE FIND A NODE USING TWO METHODS - 1) WITHOUT RECURSION  2) WITH RECURSION
///1) WITHOUT RECURSION
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
int findNode(Node *head, int n)
{
    Node * temp = head;
    int count = 0;
    while( temp != NULL )
    {
        if( temp -> data == n)
        {
            return( count );
        }
        else
        {
            count++;
            temp = temp -> next;
        }
    }
    return  -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}*/

///2) WITH RECURSION

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
int findNodeRec(Node *head, int n)
{
 // For node at 0th index, it wont enter inside the recursion,because it will return at line 116 itself , for indexes between 1 and last recursion happens ...it returns to tempans and from there onwards it goes down to ans and so on.
    int count = 0;
    if( head == NULL )
    {
        return -1;
    }

    if ( head -> data  == n )
    {
        return ( count );
    }
     count++;//EVEN IF YOU DONT WRITE THIS IT WONT MATTER, BECAUSE THIS COUNT++ IS NOT BEING USED ANYWHERE

  int tempans =  findNodeRec( head -> next, n );
  int ans = tempans + 1;
  if ( tempans == -1 )
  {
      return -1;
  }
   else
   {
       return ans;
   }
}int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNodeRec(head, val) << endl;
	}
}
