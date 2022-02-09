/// This code is designed in such a way that if 2 duplicate elements are present then it will ONLY print the first dupicate element in the array.
/// Also note that this code is designed in such a way that there will be one duplicate element compulsorily present in the code.
#include <bits/stdc++.h>;
using namespace std;

int duplicateNumber ( int *arr, int size )
{
    if ( size == 1 )
    return 0;

    for( int i = 0; i < size; i++ )
    {
        for( int j = i + 1; j < size; j++ )
        {
            if( arr[i] == arr[j] )
               return arr[i];
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
        for( int i = 0; i < size; i++ )
        {
            cin >> arr[i];
        }
        cout << duplicateNumber( arr, size );
    }
    return 0;
}

