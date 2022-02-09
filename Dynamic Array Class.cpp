#include<bits/stdc++.h>
using namespace std;

class DynamicArray
{
    int *arr;
    int capacity;
    int nextindex;
    public:

    DynamicArray() // Understand why DC and not PC.
    {
         arr = new int[5]; // Thta how we write, ignoring the dataype and the pointer.
         capacity = 5;
         nextindex =0;
    }
   void insertelements(int num )
    {
        if( nextindex == capacity )//if because we were doing it in order like after 2 then 3 then 4 and so on. Its never like after 2, 4 will come. Its in a continuous serial order.
        {
            int * newarr = new int[capacity *2];
            for( int i =0; i < nextindex; i++ )
            {
                newarr[i] = arr[i];
            }
            delete [] arr; // First we delete the array from the heap, but its pointer will still be present in the stack. So then assign the address of the new array to the pointer of the original aarray which is present in the stack.
            arr = newarr;
            capacity =capacity *2;
        }
           arr[nextindex] = num;
           nextindex++;
    }
    int getelement( int i )
    {
       if(i < nextindex )
       {
           return arr[i];
       }
       else return -1;
    }
    void assignelement( int index, int element )
    {
        if( index < nextindex )
        {
            arr[index] = element;
        }
        else if( index == nextindex )
        {
            insertelements( element) ;
        }
        else
          {
            return; // See here basically the concept is like, the elements are filled in a continuous manner. So suppose you have filled upto 7 elements and you are saying that in the 9th index you want to substitute 40 thats not possible because then we will have to put a gap after 7 for 9th and so on.
          }     // So instead of putting that gap, we directly return because the given index is not within our range of elements we have filled till now.
                // So basically this code inserts elemets only continuously and if we get a index larger than the indexes filled till now then thats not possible for us to do and hence we return.
                // Remember this code works only when are inserting elements continuously and this function is for assigning elements randomly. So we return,
    }          // If the given index is equal to the nextindex then call the function again and repeat the steps. And if the given index is smaller than the nextindex then directly assign.
    void print()
    {
        for( int i =0; i < nextindex; i++ )
        {
            cout << arr[i] << " ";
        }
           cout << endl;
    }
    DynamicArray( DynamicArray const &d1 )
    {
      /*   DynamicArray( DynamicArray const &d1)
    {
        int *newarr = new int[d1.capacity];
        for( int i =0; i < d1.capacity; i++ )
        {
            newarr[i] =  d1.arr[i];
        }
        this->arr = newarr;
        this-> nextindex = d1.nextindex;
        this-> capacity = d1. capacity;

    }*/ ///Creating a new array, copying the elements into the new array and then giving the address of this new array to our original one.

        this-> arr = new int[ d1.capacity ];
        for( int i =0; i < d1.capacity; i++ )
        {
            this->arr[i] =  d1.arr[i];
        }
        this-> nextindex = d1.nextindex;
        this-> capacity = d1. capacity;
    } /// Directly copying the elements into our original array which is more efficient way to solve.
    void operator=( DynamicArray const &d1 )
    {
      /*  void operator=( DynamicArray const &d1 )
      {
        int * newarr = new int[ d1.capacity ];
        for( int i =0; i < d1.capacity; i++ )
        {
            newarr[i] =  d1.arr[i];
        }
        this->arr = newarr;
        this-> nextindex = d1.nextindex;
        this-> capacity = d1. capacity;
      } */ /// Same as above, create a new array, copy things and then giving the address of this new array to the original one.
        this -> arr = new int[ d1.capacity ];
        for( int i =0; i < d1.capacity; i++ )
        {
            this->arr[i] =  d1.arr[i];
        }
        this-> nextindex = d1.nextindex;
        this-> capacity = d1. capacity;
    } /// Directly copying the elements into ou original array  which is a more efficient way.
};

int main()
{
    DynamicArray d1;
    d1.insertelements( 10 );
    d1.insertelements( 20 );
    d1.insertelements( 30 );
    d1.insertelements( 40 );
    d1.insertelements( 50 );
    d1.insertelements( 60 );
    int catching = d1.getelement( 7 );
    d1.assignelement(4, 70 );
   // d1.print();
    DynamicArray d2(d1);//Copy Constructor
    DynamicArray d3;
    d3 = d1; //Copy Assignment Operator
    d1.assignelement( 3,100);
    d1.print();
    d2.print();
    d3.print();
}
