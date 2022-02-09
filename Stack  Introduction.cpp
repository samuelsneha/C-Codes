#include<bits/stdc++.h>
using namespace std;

/*class StackusingArray
{
    int * data;
    int nextIndex;
    int capacity;
    public:
StackusingArray ( int totalsize )
{
    data = new int [ totalsize ]; // Dynamically
    nextIndex = 0;
    capacity = totalsize;
}

// Function to insert elements
void push( int element )
{
    if( nextIndex == capacity )
    {
        cout <<" STACK IS FULL " << endl;
        return;
    }
    data[ nextIndex ] = element;
    nextIndex ++;
}

// Check whether it is empty or no
bool isEmpty()
{
    if( nextIndex == 0 )
    {
        return true;
    }
    else
        return false;
    // return nextIndex == 0;
}

//Function to delete elements
int pop ()
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

// Function to return the number of elements present
int size ( )
{
    return nextIndex;
}

// Function to access the topmost element
int top()
{
    if( isEmpty())
    {
        cout << "Stack is empty";
        return INT_MIN;
    }
    else
        return ( data[ nextIndex - 1 ] );
}

};

int main()
{
    StackusingArray s(4);
    s.push( 10);
    s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
} */

/// NOW WE ARE TRYING TO ACHEIVE THE SAME THING BUT AFTER REMOVING THE SIZE CONSTRAINTS ( HOW MUCH USER SAID AT THE STARTING, ONLY THAT MUCH WE COULD MAKE), AND THAT WE CAN DO BY USING DYNAMIC ARRAYS.
/// SO NOW IN DYNAMIC ARRAYS, WE CREATE A NEW ARRAY WITH DOUBLE THE CAPACITY OF THE ORIGINAL ARRAY, COPY THE ELEMENTS FROM THE ORIGINAL ARRAY TO THE NEW ARRAY, DELETE THE ORIGINAL ARRAY AND MOVE THE POINTER TO THE NEW ARRAY.

class StackusingArray
{
    int * data;
    int capacity ;
    int nextIndex;
public:
// Constructor
    StackusingArray()
    {
        capacity = 4;
        nextIndex = 0;
        data = new int [ 4 ];
    }
// Function to insert elements
void push ( int element )
{
    if( nextIndex == capacity )
    {
        int * newdata = new int [ capacity * 2 ];
        for ( int i = 0; i < capacity ; i++ )
        {
            newdata[ i ]= data[ i ];
        }
        capacity = capacity * 2;
        delete data;
        data = newdata;
    }
    data[ nextIndex ] = element;
    nextIndex ++;
}
  // Check whether it is empty or no
bool isEmpty()
{
    if( nextIndex == 0 )
    {
        return true;
    }
    else
        return false;
    // return nextIndex == 0;
}
//Function to delete elements
int pop ()
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

// Function to return the number of elements present
int size ( )
{
    return nextIndex;
}

// Function to access the topmost element
int top()
{
    if( isEmpty())
    {
        cout << "Stack is empty";
        return INT_MIN;
    }
    else
        return ( data[ nextIndex - 1 ] );
}
};

int main()
{

    StackusingArray s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
}

