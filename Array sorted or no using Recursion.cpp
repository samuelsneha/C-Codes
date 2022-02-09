#include<bits/stdc++.h>
using namespace std;
bool sorted( int a[], int n )
{
    if( n == 0 || n == 1 )
    {
        return true;
    }
    if( a[0] > a[1])
    {
        return false;
    }
    bool output = sorted( a + 1, n - 1);
    return output;
}
 int main()
 {
     int n;
     cin >> n;
     int a[n];
     for( int i =0; i < n; i++)
     {
         cin >> a[i];
     }
     int output = sorted( a, n);
     cout << output;
 }
