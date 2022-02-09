#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node * link;

    Node( int data ) // Node() using DC
    {
        this -> data = data;// this -> data = 10; using  DC
        this -> link = NULL; //this -> link = NULL; using  DC
    }
};
    void print( Node * head )
    {
        Node * temp = head;
        cout << temp -> data << " "; // Head / Temp are node pointers, so it will be arrow operator ONLY irrespective of whether its dynamically or statically made.
        while( temp ->link != NULL )
        {
        // Head / Temp are node pointers, so it will be arrow operator ONLY irrespective of whether its dynamically or statically made.
         temp = temp->link;
         cout << temp->data << " ";
        }
    }
   /* Node * takeinput()
    {
        int data;
        cin >> data;
     // Node n1 ( data ); This cant be done because once it goes outside the loop the memory is deallocated. So we have to use Dyna   mic memory allocation only so that the value stays.
        Node * head = NULL;
        while( data != -1 )
        {
          Node * n = new Node( data );
          if ( head == NULL )
          {
                head = n;
          }
          else
        {
          Node * temp = head;//
          while( temp -> link != NULL )
          {
              temp = temp -> link;
          }
          temp -> link = n;
        }
          cin >> data;
      }
          return ( head );
   }*/
   Node * takeinputbetter()
   {
        int data;
        cin >> data;
     // Node n1 ( data ); This cant be done because once it goes outside the loop the memory is deallocated. So we have to use Dyna   mic memory allocation only so that the value stays.
        Node * head = NULL;
        Node * tail = NULL;
        while( data != -1 )
        {
          Node * n = new Node( data );
          if ( head == NULL )
          {
                head = n;
                tail = n;
          }
          else
        {
           tail-> link = n; // Assigning new value to the position where next tail is going to be.
           tail = tail-> link;// Shifting the position of tail to the next node.
           // tail = n;
        }
          cin >> data;
      }
          return ( head );

   }
int main()
{
    /// 1).a) DYNAMICALLY
   /* Node * n1 = new Node( 10 );//Node * n1 = new node(); using DC
    Node* head = n1;
    Node * n2 = new Node ( 20 );
    n1 -> link = n2;
    Node * n3 = new Node( 30 );
    n2 -> link =  n3;
    Node * n4 = new Node ( 40 );
    n3 -> link = n4;
    Node * n5 = new Node ( 50 )
    cout << n1 -> data << " " << n2 -> data << " " << n3 -> data << " " << n4 -> data << " " << n5 -> data;
    /// 1) .b) STATICALLY
    Node n1 (10);
    Node * head = &n1;
    Node n2 (20);
    n1.link = &n2;
    Node n3 (30);
    n2.link = &n3;
    Node n4 (40);
    n3.link = &n4;
    Node n5 (50);
    n4.link = &n5;
    cout << n1.data << " " << n2.data << " " << n3.data << " " << << n4.data << " " <<  << n5.data;
    ///2) .a) STATICALLY
    Node n1 (10);
    Node * head = &n1;
    Node n2 (20);
    n1.link = &n2; //Here n1, n2, n3, are simple nodes, so they will be represented depending on whether its dynamically/statically made. Here since its statically represented, so its using dot operator.
    Node n3 (30);
    n2.link = &n3;
    Node n4 (40);
    n3.link = &n4;
    Node n5 (50);
    n4.link = &n5;
    print( head );
    cout << endl;
    print( head );
    ///2) .b) DYNAMICALLY
    Node * n1 = new Node( 10 );//Node * n1 = new node(); using DC
    Node* head = n1;
    Node * n2 = new Node ( 20 );
    n1 -> link = n2; //Here n1, n2, n3, are simple nodes, so they will be represented depending on whether its dynamically/statically made. Here since its dynamically represented, so its using arrow operator.
    Node * n3 = new Node( 30 );
    n2 -> link =  n3;
    Node * n4 = new Node ( 40 );
    n3 -> link = n4;
    Node * n5 = new Node ( 50 );
    n4 -> link = n5;
    print( head );
    cout << endl;
    print( head );

    ///3)
    Node * head = takeinput();
    print(head);*/

    ///4)
    Node * head = takeinputbetter();
    print (head);
}



