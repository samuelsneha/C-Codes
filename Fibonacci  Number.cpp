#include <bits/stdc++.h>
using namespace std;

bool fibbonaciNumber( int n , int sum , int second , int third )
{
    bool temp = true;
    for( int i = 1; sum <= n; i++  )// Running a for loop till our updated sum reaches till the number we want to search for.
    {
        sum = second + third;
        if( sum == n )
        {
            temp = true;
            return temp;
        }
        second = third;
        third = sum;
     }
     temp = false;// after the for loop is finished and we still haven found our number then it means its not present and hence return false.
     return temp;
}
int main()
{
    int n;
    cin >> n;
    if ( n == 0 || n == 1 )// Conitions for n == 0 or n == 1 then it should print true
     {
         cout << "true";// if we get that number then return true
         return 0;
     }
    int sum = 0;
    int first = 0;
    int second = 1;
    int third = 1;

    bool ans = fibbonaciNumber( n, sum , second , third );
    if ( ans == true )
        cout << "true";
    else
        cout << "false";
    return 0;
}
