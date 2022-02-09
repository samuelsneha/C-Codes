// Here we are not swapping non zeros with zeros, we are swapping non zeros with where it should actually be in the array.
#include<bits/stdc++.h>
using namespace std;
/*void pushzerostoend( int arr[], int n )
{
    int i;
    int k=0;
    int temp;
    for(  i=0; i < n; i++)
    {
        if( arr[i] != 0 )
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k++;
        }
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
        pushzerostoend( arr, n );
        for( int i=0; i < n; i++)
        {
            cout << arr[i];
        }
    }
}
*/

void pushZeroesEnd ( int * arr, int size )
{
    int j =0;
    for ( int i = 0; i < size; i++ )
    {
        if( arr[i] != 0 )
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    return;
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
        pushZeroesEnd( arr, size );
        for( int i = 0; i < size; i++ )
        {
            cout << arr[i];
        }
    }
    return 0;
}


