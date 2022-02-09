include<bits/stdc++.h>
using namespace std;
int factorial( int n )
{
    if ( n == 0)
    {
        return 1;
    }
    int halfoutput = factorial ( n-1 );// you had done the mistake of putting n in the actual arguments
    int output = n * halfoutput;
    return output;

}

int main()
{
    int n;
    cin >> n;
    int output = factorial( n );
    cout << output;
}
