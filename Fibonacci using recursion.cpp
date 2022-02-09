//see in this code, each number/value calls other function two times. So each value will have 2 other functions ie.  n - 1 and n - 2.
//in this code, 0th element is 0, 1st element is 1, 2nd element is 1, 3rd element is 2, 4th element is 3, 5th element is 5 and so on...
#include<bits/stdc++.h>
using namespace std;
int fib ( int n )
{
    if( n == 0)
    {
        return 0;
    }
    if ( n == 1)
    {
        return 1;
    }
    int smalloutput1 = fib( n -1);
    int smalloutput2 = fib( n -2 );
    return smalloutput1 + smalloutput2;

}
int main()
{
    int n;
    cin >> n;
    int output = fib( n );
    cout << output;


}



