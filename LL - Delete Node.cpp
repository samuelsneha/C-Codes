///HERE WE DELETE NODES USING TWO DIFFERENT METHODS- 1) WITHOUT RECURSION 2) WITH RECURSION
///SEE IN THIS QUESTION EVEN THOUGH JUST BY BREAKING THE LINK/ SHIFTING THE HEAD YOU MIGHT GET THE ANSWER, BUT ITS A GOOD PRACTISE TO DELETE THEM MANUALLY.
///1) WITHOUT RECURSION

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

 int length(Node* head )
 {
     if ( head == NULL )
     {
         return 0;
     }
     int count = 0;
     Node * temp = head;
     while( temp->next != NULL ) //NULL NEXT CANT BE ACCESSED SO RUN TIME ERROR .FOR COUNT == 0, RETURN 0
     {
         count++;
         temp = temp-> next;
     }
     return ( count + 1 );
 }


 Node *deleteNode(Node *head, int pos)
 {
     Node * temp = head;
     if ( head == NULL ) //BASE CONDITION
     {
         return ( head );
     }

     int catching = length( head);//FIRST CONDITION
     if( pos > catching -1 )
     {
         return ( head );
     }


     if ( pos == 0 )
    {
          head = temp -> next; //head is shifted to the next node
          temp -> next = NULL; //link is broken by putting NULL at its next instead of the address of the next node
          delete temp; // deleting the node on who's next NULL was overwritten
          return( head );
 // Here since the next of temp was assigned to head in the first statement we are returning head. If we would have done like temp = temp -> next then we would have returned temp in the last statement.
     }



     for( int j =1; j < pos -1 ; j++ )
     {
         temp = temp -> next;
     }
         temp = temp -> next;
         Node * a = temp -> next; //Storing the value of next of the current variable say in 'a' , for future use.
         Node * b = a -> next;//Storing the value of the next of a in b ( say ) for future use.
         temp -> next = b;// For ith node, making a link/connection between the (i - 1) and ( i+1)th node.
         a -> next = NULL;//Breaking the connection between i and ( i+1).
         delete a;//Deleting that variable manually forever.
         return( head );
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
		head = deleteNode(head, pos);
		print(head);
	}
}


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

Node *deleteNodeRec(Node *head, int pos)
{

    if( head == NULL ) //BASE CASE
    {
        return ( head );
    }
    if( pos == 0 )
    {
        Node* abc=head; //Storing the current head in another variable for future use
        head = head -> next; // Shifting the head to the new node.
        abc -> next = NULL; //Breaking the connection between the original head and new head.
        delete abc; //Manually deleting the original head.
        return( head );
        //return ( head -> next ); iF YOU JUST WRITE THIS ONE LINE INSTEAD OF THE ABOVE 5 LINES STILL YOU WILL  GET THE CORRECT ANSWER. BUT THE ONLY THING IS YOU WONT BE DELETING IT MANUALLY AND BREAKING THE LINK, YOU ARE ONLY SHIFTING THE HEAD.
    }
    Node * temp = deleteNodeRec( head -> next, pos - 1 );

    head -> next = temp;
    return( head );
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
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
} */

