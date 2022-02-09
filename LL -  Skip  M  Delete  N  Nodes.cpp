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
Node *skipMdeleteN(Node *head, int M, int N)
{
    if( head == NULL )
    {
        return ( head );
    }
    if ( N == 0 )
    {
        return( head );
    }
    if( M == 0 )  // This means you have nothing to skip, hence delete all
    {
        delete head;
        return( NULL ); //// NULL is also a pointer
    }
    Node * head1 = head;
   while( head1 -> next != NULL)
   {
       int i =1;
       while( i < M && head1 -> next != NULL )
       {
           head1 = head1 -> next;
           i++;
       }
       Node * head2 = head1 -> next;// // In this case we are having 5 in head1 coz after 5 its null it didnt enter inside the while loop. But if it would have been head1 != null then,it would enter the loop and then head1 = null, then wile doing this line we would get error coz head1 is null and we can't access next of null. But if it was(( head1 -> next) in while condition then head1 would be 5 and we would simply be putting the next of 5 which is null value into head2 pointer and not trying to access NULL ..
       head1-> next = NULL;// here it was already null , but we are overwriting null to it in while ( head1 -> next != NULL ) case.
       int j = 1;
       while( j < N  && head2 != NULL && head2 -> next != NULL ) //HERE IF YOU PUT HEAD2 KA NEXT WALA CONDITION FIRST AND THEN HEAD2 != NULL CONDITION, THEN YOU WOULD GET ERROR. UNDESTAND WHY.
       { // Why we added head2 != NULL condition in the while loop: We can check whether a particular node is null or no, but suppose if it was null then we cant check whether the next of null is null or no and that was what we were doing earlier before we put the condition head2 != null and we used to get error.
         // Also we can put as many as  ANDS we want in a statement.  Also, these multiple ANDS is executed left to right.
         // These above explanations remain same for wherever these changes are made in the code.
           head2 = head2 -> next;
           j++;
       }
       if( head2 != NULL && head2->next!=NULL) //DONT FORGET ABOUT THIS STATEMENT AND ITS IMPORTANCE
       {
        Node * head3 = head2 -> next;
        head2 -> next = NULL;
        head1-> next = head3;
        head1 = head3;
       }
        delete head2;
   }
       head1 -> next = NULL; //DONT FORGET ABOUT THIS
       return( head );
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
