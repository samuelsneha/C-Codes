#include<bits/stdc++.h>
using namespace std;

template<typename t>
class Node
{
    public:
    t data;
    Node <t> * next;

    Node( t data )
    {
     this -> data = data;
     next = NULL;
    }
};

template<typename t>
class QueueusingLL
{
    Node <t> * head;
    Node <t> * tail;
    t size;

public:
    QueueusingLL()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

//Function to get the number of elements present in the node.
t getSize()
{
    return size;
}

// Function to check whether the Queue is empty or no.
bool isEmpty()
{
    return size == 0;
}

// Function to insert elements into the Queue.
void enqueue( t element )
{
    Node <t> * newnode = new Node <t> ( element );
    if( tail == NULL )
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
      tail -> next  = newnode;
      tail = newnode;
    }
    size++;
}

// Function to delete elements from the Queue.
t dequeue()
{
    if( size == 0 )
    {
        cout << " Queue is full"<< endl;
        return 0;
    }
    t ans = head -> data;
    Node <t> * temp = head;
    head = head -> next;
    delete temp;
    size --;
    return ans;
}

// Function to access the top most element in the Queue
t front()
{
    if( size == 0 )
    {
        cout<< " Queue is full" << endl;
        return 0;
    }
    return head ->data;
}
};

int main()
{
    QueueusingLL <int> q;

    q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
}
