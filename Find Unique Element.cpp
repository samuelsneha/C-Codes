
/// This code is designed in such a way that if 2 unique elements are present then it will ONLY print the first unique element in the array.
/// Also note that this code is designed in such a way that there will be one unique element compulsorily present in the code.
/// You can also do this question using bool datatype.
#include <bits/stdc++.h>;
using namespace std;

int findUnique ( int *arr, int size )
{
    if ( size == 1 )
    return arr[0];

    for( int i = 0; i < size; i++ )
    {
        int j;
        for(  j = 0; j < size; j++ )
        {
            if( arr[i] == arr[j] && i != j )
               break;
        }

        if ( j == size )
         return arr[i];
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
        cout << findUnique( arr, size );
    }
    return 0;
}
