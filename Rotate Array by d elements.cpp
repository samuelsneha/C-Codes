#include<bits/stdc++.h>
using namespace std;
/*
void rotatearray( int arr[], int n, int d )
{

    for( int i=0; i < n /2; i++) //This should be n/2 not n
    {
        int start1 =0;
        int last1 = n-1;
        int temp;
        temp = arr[start1];
        arr[start1] = arr[last1];
        arr[last1] = temp;
        start1++;
        last1--;
    }
    for( int i= 0; i <= (n-d) /2; i++ ) //  this should be n/2 and not n
    {
        int temp;
        int start2 = 0;
        int last2 = n-d;
        temp = arr[start2];
        arr[start2] = arr[last2];
        arr[last2] = temp;
        start2++;
        last2--;
    }
    for( int i = n - d +1; i < n; i++ )
    {
        int temp;
        int start3 = n-d+1;
        int last3 = n-1;
        temp = arr[start3];
        arr[start3] = arr[last3];
        arr[last3] = temp;
        start3++;
        last3--;

    }

}
int main()
{
    int tc;
    cin >> tc;
    while( tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for ( int i =0; i < n; i++ )
        {
            cin >> arr[i];
        }
        int d;
        cin >> d;
        rotatearray( arr, n, d );
        for( int i=0; i < n; i++)
        {
            cout << arr[i];
        }
    }
}

// See here the logic is we are trying to shift the ith index ( actually they are starting from dth index )  elements by d positions,, because the first d positions have been shifted to another array. So the dth index element needs to be brought at the starting position of thr array which is bescially they need to be shifted by d positions.
//And then we add the d elements from another array to the back of the array.

void rotatearray( int arr[], int n , int d)
{

  int temp[d];
  for( int i=0; i <d ; i++ ) // shifting the first d elements from the initial array to another array
 {
     temp[i]= arr[i];
 }
  for( int i = d; i < n; i++ )
 {
     arr[i - d] = arr[i]; // shifting the left elements in the initial array by d positions
 }
  int j=0;
  for( int i = n -d; i < n; i++ )   // placing the first d elements from the other array back to the ending of the initial array
  {
    arr[i] = temp[j];
    j++;
  }
}
int main()
{
    int tc;
    cin >> tc;
    while( tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for ( int i =0; i < n; i++ )
        {
            cin >> arr[i];
        }
        int d;
        cin >> d;
        rotatearray( arr, n, d );
        for( int i=0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }
    }
}*/

void rotate( int * arr, int d, int size )
{
    int arrNew[size];
    for( int i = 0; i < d; i++ )
    {
      arrNew[i] = arr[i];
    }
    int i;
    for(  i = d; i < size; i++ )
    {
         arr[ i - d] = arr[i];
    }
    int k = 0;
    for( int j = i - d ; j < size; j++)
    {
        arr[j] = arrNew[k];
        k++;
    }
    return;
}
int main()
{
    int tc;
    cin >> tc;
    while( tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for ( int i =0; i < n; i++ )
        {
            cin >> arr[i];
        }
        int d;
        cin >> d;
        rotate( arr, d, n );
        for( int i=0; i < n; i++)
        {
            cout << arr[i] << " " ;
        }
    }
}

/// HERE THE TIME COMPLEXITY IS 3 * O(n) == O(n)
/// In The earlier submission you had worst time complexity of O(n^2). And here N == D == 10^6, so basically 10 ^ 12 times per second but approximately only 10^8 is allowed per second. So you got TLE.
/// Even though our space complexity increases in this method compared to last method, but atleast we don't get TLE by this method.
