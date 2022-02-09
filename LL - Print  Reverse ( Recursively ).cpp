///HERE WE WILL CODE TO PRINT IN REVERSE RECURSIVELY,( NOT JUST PRINT BUT ACTUALLY REVERSE THEM ) BY 3 METHODS
///1) FIRST RECURSIVE METHOD
///Here the Time Complexity is : T(n) = T(n - 1) + ( n - 1 ) = ( n -1 ) + ( n - 2) + ( n - 3) + ...= O(n ^ 2) which is not good. Hence we go for its second method.
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
			//tail = tail -> next;
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
Node *reverseLinkedListRec(Node *head)
{
    if ( head == NULL || head -> next == NULL ) //BASE CONDITION if the length of the list is 1 or 0 then simply return.
    {
        return( head );
    }
    Node * temp = head;
    Node * ans = reverseLinkedListRec( temp -> next); //RECURSION
    Node * tempans = ans;
    while( tempans -> next != NULL ) //SMALL CALCULATION
    {
        tempans = tempans -> next;
    }
    tempans -> next = head;
    tempans -> next -> next = NULL;
    return ( ans ); //RETURNING  THE HEAD
}
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}
/// 2) SECOND RECURSIVE METHOD
/// What we can learn from this method is - Whenever we need to return multiple parameters from a function, create a class ( Create its object also ) and return the object  of that class. So by returning an object, we can access every property of that class ie. head and tail here.
/// Here the Time Complexity is T(n ) = T ( n - 1 ) + K  =  O ( n ) which is much better than its previous one of O( n ^ 2 ) complexity.
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

class Pair
{
    public:
    Node * head;
    Node * tail;
};
Pair reverseLinkedListRec ( Node * head )
{
     if ( head == NULL || head -> next == NULL ) //BASE CONDITION if the length of the list is 1 or 0 then simply return.
    {
      Pair ans; //Creating an object of Pair class
      ans.head = head; // If head is NULL, head of ans will also be NULL. If head has only 1 node,then that node will only be returned in tail of ans.
      ans.tail = head; //If head is NULL, tail of ans will also be NULL. If head has only 1 node,then that node will only be returned in tail of ans.
      return ( ans );
    }
    Node * temp = head;
    Pair tempans = reverseLinkedListRec( temp -> next); //RECURSION
    tempans.tail -> next = head;
    head -> next = NULL;
    Pair ans;//We created this object to update the tail of tempans. Also when we create a new object of a class, its our responsibility to initialize its every properties. So ...
    ans.head = tempans.head;
    ans.tail = head;
    return ( ans );
}
Node * reverseLinkedList( Node * head )//This we created because in int main Node * return type was needed at CN platform and not Pair
{
    return reverseLinkedListRec( head ).head;
}
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
			//tail = tail -> next;
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
int main()
{
    int t;
	cin >> t;
	while(t--)
  {
    Node * head = takeinput();
    head = reverseLinkedList( head );
    print( head );
  }
} */
/// 3) THIRD RECURSIVE METHOOD
/// Here we realize that the second node of our list is the tail we need after recursion. So by doing tail -> next = head and then putting NULL to the next of head we can get the required o/p and make things easier.
/// Its time complexity is O(n) which is good and same as previous one, but its code is better than previous one with same time complexity.
class Node
{
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
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
			//tail = tail -> next;
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
Node *reverseLinkedListRec(Node *head)
{
    if ( head == NULL || head -> next == NULL ) //BASE CONDITION if the length of the list is 1 or 0 then simply return.
    {
        return( head );
    }
    Node * temp = head;
    Node * ans = reverseLinkedListRec( temp -> next); //RECURSION
    Node * tail = temp -> next;// SMALL CALCULATION
    tail -> next = temp;
    temp -> next = NULL;
    return ( ans );
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}
	return 0;
}
