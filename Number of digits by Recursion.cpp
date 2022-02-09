#include<bits/stdc++.h>
using namespace std;
int numberofdigits( int n )
{
    if( n < 10 )
    {
        return 1;
    }
    int output = numberofdigits( n/10);
    output = output +1;
    return output;

}

int main()
{
    int n;
    cin >> n;
    int output = numberofdigits( n );
    cout << output;
}
