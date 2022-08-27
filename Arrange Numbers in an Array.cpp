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
//void arrange ( int *arr, int size )
//{
    // int value = 1;
//    int value;
//    int left = 0;
//    int right = size - 1;
//    for( value = 1; value <= size; value++ )
    // while( left <= right )
//    {
//        if( value % 2 != 0 )
//        {
//            arr[left] = value;
            // value++;
//            left++;
//        }
//        else
//        {
//            arr[right] = value;
            // value++;
//            right--;
//        }
//    }
//}

///Approach 3:
//void arrange( int arr[], int n ){
//    int start = 0, last = n - 1;
//    for( int i = 1; start <= last;  start++, last-- ){
//        if( start == last ){
//            arr[start] = i;
//            break;
//        }
//        arr[start] = i;
//        i++;
//        arr[last] = i;
//        i++;
//    }
//}



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
