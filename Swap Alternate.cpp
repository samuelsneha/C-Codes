#include <bits/stdc++.h>;
using namespace std;

void swapAlternate ( int *arr, int n )
{
    for( int i = 0; i <= n - 2; i = i + 2 )
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i+1] = temp;
        }
}
int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n ; i++ )
        {
            cin >> arr[i];
        }
        swapAlternate( arr, n );
        for( int i = 0; i < n ; i++ )
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
