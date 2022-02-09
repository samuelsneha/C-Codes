// It is also called as Recursive Algorithm. Its very fast compared to other sorting algorithms we have done till now.
//Here in merge sort, first the recursion does its work of sorting and then we do our work which is merging the sorted indexes .
#include<bits/stdc++.h>
using namespace std;

void mergeSort( int input[], int n )
{
    if(  n == 0 || n == 1)
    {
        return;
    }
    int si =0;
    int ei = n -1;
    int mid = ( si + ei)/2;
    mergeSort( input,  mid + 1 );// ( input, si, mid +1) in terms of indexes  // here the length mid is calculated including 0 // (input, mid )  which means you are excluding mid element and hence mid element will be passed to the right sub array. You have done mid+1 which means you are including mid and hence its to the left side of sub array.  0 to mid actually means till (mid - 1) index
    mergeSort( input + 1 + mid, n - mid -1 ); //( input, mid +1, ei) in terms of indexes

    int i=0 , j = mid +1 , k = 0;
    int ans[n];
    while( i <= mid && j <= n -1 ) // When you merge 2 arrays, you will need another array, because if you merge them in the same array then some data/ values will be lost because you will be overwriting them with some other values in some certain cases.
    {
        if( input[i] < input[j])
        {
             ans[k] = input[i];
             i++;
             k++;
        }
        else
        {
           ans[k]= input[j];
           j++;
           k++;
        }
    }
    while ( i <= mid )
    {
        ans[k] = input[i];
        i++;
        k++;
    }
    while( j <= n -1 )
    {
        ans[k] = input[j];
        j++;
        k++;
    }
      for( int i =0; i < k; i++ )
    {
          input[i] = ans[i];
    }


}



int main()
{
  int n;
  cin >> n;
  int* input = new int[n];
  for( int i = 0; i < n; i++)
  {
      cin >> input[i];
  }
  mergeSort(input, n); //( input, 0 , n) in terms of indexes
  for(int i = 0; i < n; i++)
  {
    cout << input[i] << " ";
  }
}
