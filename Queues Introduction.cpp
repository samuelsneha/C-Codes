/// Queue is a FIFO. It is a Abstract Data Type. Both entry and exit points are different.

#include<bits/stdc++.h>
using namespace std;

template<typename t>
class QueueusingArray
{
     t * data;
     t NextIndex;// Holds the index value where we have to insert the next element.
     t FirstIndex;// Holds the index value of the first element in your Queue. If this is -1 then it indicates that the Queue is empty.
     t capacity;
     t size;

    public:
    QueueusingArray( t s )
    {
        data  = new t [s];
        NextIndex = 0;
        FirstIndex = -1;
        capacity = s;
        size = 0;
    }

  // Function to check the number of elements present in the Queue
  t getSize()
  {
      return size;
  }

  // Function to check whether the Queue is empty or no
  bool isEmpty()
  {
      return size == 0;
  }

  // Function to insert an element into the Queue
  void enqueue( t element )
  {
          if( size == capacity)
        {
          cout<< " Queue is full" << endl;
          return;
        }
        data[ NextIndex ] = element;
          NextIndex = ( NextIndex + 1 ) % capacity;// So that we can circularly go back to the 0th index.
          if( FirstIndex == -1 )
              FirstIndex = 0; // Here you had initially done FirstIndex == 0
           size ++;
  }

  // Function to delete an element in a Queue
  t dequeue ()
  {
      if( isEmpty() ) // if( size == 0 )
      {
          cout << " Queue is empty " << endl;
          return 0;
      }
      t ans = data[ FirstIndex ];
      FirstIndex = ( FirstIndex + 1 )% capacity;
      size--;
      if(size == 0)
        {
			FirstIndex = -1;
			NextIndex = 0;
		}
      return ans;
  }

  // Function to access the topmost element in the Queue
  t front()
  {
      if( isEmpty())
      {
          cout << " Queue is empty!" << endl;
          return 0;
      }
      return data [ FirstIndex ];
  }
};

int main()
{
    QueueusingArray < int > q(5);
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

/// DYNAMICALLY


/*template<typename t>

class QueueusingArray
{
    t * data;
    t NextIndex;
    t FirstIndex;
    t capacity;
    t size;

    public:
 // Constructor
    QueueusingArray( t s )
    {
        capacity = s;
        data = new t [ s ];
        NextIndex = 0;
        FirstIndex = -1;
        size = 0;
    }

 // Function to return the number of elements present in the Queue
 t getSize()
 {
     return size;
 }
 //   Function to check whether the Queue is empty or no
 bool isEmpty()
 {
     if( size == 0 )
        return true;
     else
        return false;
 }
 // Function to insert an element
 void enqueue( t element )
 {
     if( size == capacity )
     {
         t * newdata = new t [ 2 * capacity];
         int j= 0;
         for( int i = FirstIndex; i < capacity; i++ )
         {
             newdata[j] = data[i];
             j++;
         }
         for( int i = 0; i < FirstIndex; i++ )
         {
             newdata[j] = data[i];
             j++;
         }

         delete data;
         data = newdata;
         FirstIndex = 0;
         NextIndex = capacity;
         capacity = capacity *2;
     }
         data[ NextIndex ] = element;
         NextIndex = ( NextIndex + 1 ) % capacity;
         if(FirstIndex == -1)
			FirstIndex = 0;
         size++;
  }

 // Function to delete an element from a queue
  t dequeue ()
  {
      if( isEmpty() ) // if( size == 0 )
      {
          cout << " Queue is empty " << endl;
          return 0;
      }
      t ans = data[ FirstIndex ];
      FirstIndex = ( FirstIndex + 1 )% capacity;
      size--;
      if(size == 0)
        {
			FirstIndex = -1;
			NextIndex = 0;
		}
      return ans;
  }

  // Function to access the topmost element in the Queue
  t front()
  {
      if( isEmpty())
      {
          cout << " Queue is empty!" << endl;
          return 0;
      }
      return data [ FirstIndex ];
  }
};


int main()
{
	QueueusingArray<int> q(5);

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
*/
