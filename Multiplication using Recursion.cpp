#include<bits/stdc++.h>
using namespace std;

int multiplyNumbers(int m, int n)
 {
 if( n == 0 || m == 0 )
 {
     return 0;
 }
 if( n == 1 )
 {
     return m;
 }
 if ( m == 1)
 {
     return n;
 }

 int halfoutput = multiplyNumbers( m, n-1);
 int output = halfoutput + m;
 return output;

}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) ;
}


