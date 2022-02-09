/* void arrange(int *arr, int n)
{
    int left=0;
    int right=n-1;
    int counter=1;
    int num=1;

    while(left<=right)
    {
        if(counter==1)
        {
            arr[left]=num;
            counter=2;
            left++;
            num++;
        }
        else if(counter==2)
        {
            arr[right]=num;
            counter=1;
            right--;
            num++;
        }
    }
} */

#include <bits/stdc++.h>;
using namespace std;

/// Approach 1: Dividing the array in 2 parts on the basis of indices.
/*void arrange( int *arr, int size )
{
    int half1 = (( size - 1 )/2 ) + 1;
    int j = 1;
    for( int i = 0; i < half1; i++ , j = j + 2 )
    {
        arr[i] = j;
    }
    int k = 2;
    for( int i = size - 1; i >= half1; i-- , k = k + 2 )
    {
       arr[i] = k;

    }
    return;
}*/
/// Approach 2: Dividing on the basis of the element values in the array.
void arrange ( int *arr, int size )
{
    // int value = 1;
    int value;
    int left = 0;
    int right = size - 1;
    for( value = 1; value <= size; value++ )
    // while( left <= right )
    {
        if( value % 2 != 0 )
        {
            arr[left] = value;
            // value++;
            left++;
        }
        else
        {
            arr[right] = value;
            // value++;
            right--;
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
      int size;
      cin >> size;
      int arr[size];
      arrange ( arr, size );
      for( int i = 0; i < size; i++ )
      {
        cout << arr[i];
      }
    }
    return 0;
}
