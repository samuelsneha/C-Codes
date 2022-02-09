///HERE WE INSERT NODES USING TWO DIFFERENT METHODS- 1) WITHOUT RECURSION 2) WITH RECURSION
///1) WITHOUT RECURSION
//Here in insertion, we are adding the new inserted element, not overwriting them. So the size increases automatically
#include<bits/stdc++.h>
using namespace std;

/*class Node
{
    public:
    int data;
    Node * link;

    Node( int data )
    {
      this-> data = data;
      this -> link = NULL;
    }
};


int length ( Node * head )
{
   // if ( head == NULL )
  //  {
  //      return 0;
  //  }
    int count = 0;
    Node * temp = head;
    while( temp -> link != NULL ) //NULL NEXT CANT BE ACCESSED SO RUN TIME ERROR .FOR COUNT == 0, RETURN 0
    {
        count++;
        temp = temp-> link;
    }
    return( count + 1 );
}


Node * insertnode( Node * head, int i, int data )
{
    Node * temp = head;
    Node * newnode = new Node( data );

    if ( head == NULL ) ///BASE CONDITION
    {
        return ( head );
    }


    int catching = length ( head ); ///FIRST CONDITION
    if ( i > catching - 1 )
    {
        return ( head ) ;
    }


    if( i == 0 )    ///SECOND CONDITION
    {
      newnode -> link = temp; //Assigning the current head value to the next of the new node created. So in this way link is created between the latest node and the previous head by putting the address of the first node into the next of the new node created.
      temp = newnode; //Shifting the head from the previous value to the new value.
      return ( temp );///REMEMBER TO WHOMEVER YOU ARE ASSIGNING NEWNODE, THAT ONLY YOU SHOULD RETURN.
///FOR EG. IF YOU ASSIGN NEWNODE TO HEAD THEN YOU SHOULD RETURN HEAD, IF YOU ASSIGN NEWNODE TO TEMP THEN YOU SHOULD RETURN HEAD
    }

    for( int j =1;j < i -1 ; j++ )/// BY DOING (j < i - 1) WE REACH TO AN ELEMENT BEFORE THE ith INDEX. BY DOING (j < i) WE REACH AT THE ith ELEMENT. IN SUMS OF INSERT AND DELETE, WE HAVE TO REACH AN ELEMENT BEFORE SO (j < i - 1)
    {
      temp = temp -> link;
    }
    temp = temp -> link;/// FOR j = 0, no need to write this statement.
    Node * a = temp -> link;//Storing the address ie. next of temp in a new node because we will require it afterwards.
    temp -> link = newnode; //Creating a link between temp and newnode by putting the address of newnode into the link of temp.
    newnode -> link = a; //Creating a link between newnode and a by putting a into the address ie. link of newnode.
    return ( head );//Here you can return head ONLY because temp is somewhere in the middle and we need the starting only which is the head.
}


 Node * takeinput()
{
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while( data != -1 )
  {
        Node * n = new Node ( data );
        if( head == NULL )
    {
        head = n;
        tail = n;
    }
    else
    {
        tail -> link = n; //Assigning new value of tail to its link to build a link
        tail = tail -> link;//Traversing the tail to its next node
    }
    cin >> data;
  }
  return ( head );
}


void print( Node * head )
{
    Node * temp = head;
    //cout << temp -> data << " ";
  // while( temp -> link != NULL )
  //  {
 //      temp = temp -> link;
//       cout << temp -> data << " " ;
//    }
     while( temp != NULL )
     {
        cout << temp -> data << " " ;
        temp = temp -> link;
     }
}


int main()
{
   Node * head =  takeinput();
   print( head );
   int pos , value ;
   cin >> pos >> value ;
   head = insertnode( head, pos, value );
   print( head );
}*/


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
 Node * takeinput()
{
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while( data != -1 )
  {
        Node * n = new Node ( data );
        if( head == NULL )
    {
        head = n;
        tail = n;
    }
    else
    {
        tail -> next = n; //Assigning new value of tail to its link to build a link
        tail = tail -> next;//Traversing the tail to its next node
    }
    cin >> data;
  }
  return ( head );
}


void print( Node * head )
{
    Node * temp = head;
    //cout << temp -> data << " ";
   //while( temp -> link != NULL )
  //  {
    //    temp = temp -> link;
   //     cout << temp -> data << " " ;
  //  }
     while( temp != NULL )
     {
        cout << temp -> data << " " ;
        temp = temp -> next;
     }
}

Node* insertNode(Node *head, int i, int data)
{
// Node * newnode = new Node( data ); OR AT IS OTHER POSITION
    Node * temp = head;
    if( head == NULL )
    {
        return head;
    }
/// You can add the (i > j -1) condition if you want. But it wont matter because eventually the base cond will be satisfied.
    if( i == 0 )
    {
        Node * newnode = new Node( data );
        newnode -> next = temp;
        head = newnode;
        return( head );
    }
    Node *temp1 = insertNode( head->next, i - 1, data );
    head->next=temp1;
    return head;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}

