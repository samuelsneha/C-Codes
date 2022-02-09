#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int even = 0;
    int odd = 0;
    int individual =0;
    int leftover = number;
    while( leftover >= 10 )
    {
        int individual = leftover % 10;
        leftover = leftover/ 10;

        if( individual % 2 == 0)
            even = even + individual;
        else
            odd = odd + individual;
    }
    if ( leftover % 2 == 0 )
        even = even + leftover;
    else
        odd = odd + leftover;
     cout << even << " " << odd;

}
