#include<bits/stdc++.h>
using namespace std;
// REMEMBER  FOR  BINARY  SEARCH  THE  INPUTED  ELEMENTS  SHOULD  BE  IN ASCENDING  ORDER  ONLY.  IF  YOU  DONT  GIVE  INPUTS  IN  ASCENDING  ORDER  THEN  YOU WONT  GET  THE  CORRECT  OUTPUT

/*int binarysearch( int str[] , int n , int x)
{

    int start = 0;
    int last = n -1;
    int mid = (start + last)/2.0;
    while ( start <= last)
 {
    if ( str[ mid] == x )
    {
        return mid;
    }
    else if ( str[mid] < x )
    {
        start = mid +1;
        mid = ( start + last )/2.0;
    }
    else if ( str[mid] > x )
    {
        last = mid -1;
        mid = ( start + last )/ 2.0;
    }

 }
       return -1;
}
int main()
{
     int n;
     cin >> n;
     int str[n];
     for(int i=0;i<n;i++)
     {
         cin >> str[i];
     }
     int tc;
     cin >> tc;
     while( tc --)
    {
        int x;
        cin >> x;
        cout << binarysearch( str , n , x);
    }
}*/

/*int binarySearch( int * arr, int size, int value )
{
    int start = 0;
    int end = size - 1;
    while( start <= end )
  {
    int mid = ( start + end )/2;
    if ( value == arr[mid])
        return mid;

    else if ( value < arr[mid] )
        end = mid - 1;

    else
        start = mid + 1;
  }
  return -1;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for( int i = 0; i < size; i++ )
    {
        cin >> arr[i];
    }
    int elements;
    cin >> elements;
    while( elements-- )
    {
        int value;
        cin >> value;
        cout << binarySearch( arr, size, value ) << endl;
    }
    return 0;
}*/

/*int binaryWork( int arr[], int size, int start, int mid, int end, int value ){

    while( end >= start || start <= end ){
    if( value == arr[mid] ){
        return mid;
    }
    else if( value < arr[mid] ){
        end = mid - 1;
        mid = (start + end)/2;
        binaryWork( arr, size, start, mid, end, value);
    }
    // else( arr[mid] < value ){
    else{
        start = mid + 1;
        mid = (start + end)/2;
        binaryWork( arr, size, start, mid, end, value);
    }
  }
  return -1;
}
int binarySearch( int arr[], int size, int x ){
    int mid, start = 0;
    int end = size - 1;
    if( size % 2 == 0 ){ //no need for this, could have done without figuring out whether size is even or odd.
        mid = (size/2) - 1;
    }
    else{
        mid = size/2;
    }
    int ans = binaryWork( arr, size, start, mid, end, x );
    return ans;
}*/

