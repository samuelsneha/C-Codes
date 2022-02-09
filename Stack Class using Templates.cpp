/// THIS CAN BE DONE USING TWO WAYS  1)- ARRAYS  2) LINKED LIST
/// 1) ARRAYS

#include<bits/stdc++.h>
using namespace std;

template < typename t >
class StackusingArrays
{
      t  * data;
      t  nextIndex;
      t  capacity;

public:
// Constructor
    StackusingArrays()
    {
        capacity = 4;
        nextIndex = 0;
        data = new t  [ 4 ];
    }
// Function to insert elements
   void push( int element ) // O(1)
   {
       if( nextIndex == capacity )
       {
           t * newnode = new t  [ capacity * 2];
           for( int i = 0; i < capacity; i++ )
           {
               newnode[i] = data[i];
           }
           capacity = capacity * 2;
           delete data;
           data = newnode;
       }
           data[nextIndex] = element;
           nextIndex++;

   }

// Check whether it is Empty
bool isEmpty()  // O(1)
{
    if ( nextIndex == 0 )
    {
        return true;
    }
    else
        return false;
    // return nextIndex == 0;
}

// Function to delete element
  t  pop()  // O(1)
{
    if ( isEmpty())
    {
        cout << " STACK IS EMPTY ";
        return INT_MIN;
    }
    else
    {
      nextIndex--;
      return ( data [nextIndex] );
    }
}

// Function to access the topmost element
 t  top()   // O(1)
{
    if( isEmpty())
    {
        cout << "Stack is empty";
        return 0;
    }
    else
        return ( data[ nextIndex - 1 ] );
}

// Function to return the number of elements present
int size()   // O(1)
{
  return nextIndex;
}

};


int main()
{
    StackusingArrays <char> s;
    s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);

	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
}

/// 2) USING LINKED LISTS

/*template < typename T >
class Node
{
    public:
	T data;
	Node < T > *next;
	Node(T data)
	{
		this->data = data;
		this->next = NULL;
	}
};
template < typename T >
class StackusingLL
{

        Node < T > * head;
		int size;

public:
 //Constructor
        StackusingLL()
        {
            size = 0;
            head = NULL;
        }

 //Function to  insert elements
 void push( T element )
 {
      Node < T > * newnode = new Node < T > ( element);
     if ( head == NULL )
     {
         head = newnode;
         size++;
     }
     else
     {
       newnode -> next = head;
       head = newnode;
       size++;
     }
 }

 //Function to access the topmost element
 T top()
 {
   if( isEmpty() )
       {
          return -1;
       }
     return head -> data;
 }

 // Function to delete element
 T pop()
 {
       if( isEmpty() )
       {
          return -1;
       }
       Node  < T > * temp = head -> next;
       T ans = head -> data;
       delete head;
       head = temp;
       size--;
       return  ans;

 }
// Function to return the number of elements
 int getsize()
 {
     return size;
 }

 // Function to know whether it is empty
 bool isEmpty()
 {
     if ( head == NULL )
     {
         return true;
     }
     else
        return false;
   // return size == 0;
 }
};

 int main()
 {
    StackusingLL <char> s;
    s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);

	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.getsize() << endl;

	cout << s.isEmpty() << endl;
 } */

