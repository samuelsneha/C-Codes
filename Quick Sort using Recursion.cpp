//Here in quick sort, first we do our work of doing the partition and then the recursion function is called to sort, once we are finished. Its opposite to merge sort where first recursion is called.
// See here once you do your part of partition and call quicksort recursion, remember that we DONT INCLUDE that pivot element in the parameters of the recursion because that pivot element is already at its correct position due to the partion we ourselves did.
#include<bits/stdc++.h>
using namespace std;
int partitionfunc( int input[], int n )
{
    int pivot = input[0];
    int num = 0;
    for( int i = 1; i < n; i++ ) //YOU HAD FORGOTTEN TO WRITE THIS FOR LOOP
    {
        if( input[i] <= pivot )
        {
            num++;
        }
    }

    int temp = input[0];
    input[0] = input[num];
    input[num] = temp;
    int i;
    int j= n - 1;
    for( i =0; i < num && j > num ;  )
{
    if( input[i] <= pivot )
    {
     i++;
    }
    else if( input[j] > pivot )
    {
        j--;
    }
    else
    {
      int temp1 = input[i];
      input[i] = input[j];
      input[j] = temp1;
      i++;
      j--;
    }
  }
  return num; // We are returning the index of the pivot element.
}
void quicksort( int input [], int n ) // ( int input [], int si, in ei )
{
    if( n == 0 ||  n == 1) // REMEMBER-  You cant use NULL in INTEGER ARRAYS
    {
        return;
    }
    int catching = partitionfunc(   input, n );
    quicksort( input,  catching  ); // understand why its only catching in the arguments. Refer to merge sort code in CB, your notes and recordings for more info //( input , si, catching ) in terms of indexes // see here in the formal arguments n is the size of the array, so in actual arguments also you should pasa size ONLY. You cant pass the index.
    quicksort( input +1 + catching, n - catching -1  ); //( input , 1+ catching, ei ) in terms of indexes // see here these arguments are your arrays and the size of those arrays.
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    quicksort( input, n ); // ( input,0,n) in terms of indexes
    for( int i =0; i < n; i++ )
    {
        cout << input[i] << " ";
    }
}
