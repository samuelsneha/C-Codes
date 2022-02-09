#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if ( n == 0 )
       cout << 0;

    int first =1;
    int second=1;
    int sum = 0;
    int i=3;// Understand why starting from 3 is necessary here.

    while ( i <= n )
    {
        sum=first+second;
        first=second;
        second=sum;
        i++;
     }
      cout<<sum;// This handles the condition where n == 1 or n == 2
}


