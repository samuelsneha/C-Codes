#include<bits/stdc++.h>
using namespace std;
/*void secondlargestelement( int arr[], int n)
{
    int firstmax = arr[0];
    int secondmax = INT_MIN;
    if( n < 2)
    {
        cout << INT_MIN;
    }
    for( int i=0; i < n; i++ )
 {

    if( arr[i] > firstmax )
    {
         secondmax = firstmax;
         firstmax = arr[i];
    }
    else if ( arr[i] > secondmax && arr[i] != firstmax ) //suppose you have an array 10,20,30,25 . Initially firstmax = 10. At the third iteration you will realize that 25 is greater than secondmax and is also not equal to firstmax, so 25 is assigned to secondmax.
    {
        secondmax = arr[i];
    }
 }
    cout<<  secondmax; // You can do cout in void, but you cant do return in void function type cause it cant return anything. Its void.
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
        secondlargestelement( arr, n ); // see its a void function, so we cant return / print anything from it. So you cant do like cout << secondlargestelement( arr, n) because it cant print or return anything cause its void. So just call the function the way you have done it now. Now inside the called function you cant print anything the way you have done.

    }
}*/

/* See another approach towards this sum is, first find the max element from the array and assignit to firstmax and then find the second largest element in the array using the condition
int secondmax = INT_MIN
if( aar[i] > secondmax && arr[i] != firstmax )
{
    secondmax = arr[i];
} */


int findSecondLargest ( int * arr, int size )
{
    int max = INT_MIN, secondMax = INT_MIN;
    for( int i = 0; i < size; i++ )
    {
        if( arr[i] > max )
        {
           secondMax = max;
           max = arr[i];
        }

        else if( secondMax < arr[i] && arr[i] < max )
        {
             secondMax = arr[i];
        }
    }
    return secondMax;

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
        for( int i = 0; i < size; i++ )
        {
            cin >> arr[i];
        }
        cout << findSecondLargest( arr, size ) << endl;

    }
    return 0;
}
