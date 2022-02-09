#include<bits/stdc++.h>
using namespace std;

bool helperfunc( char input[], int si, int ei )
{
/// B.C + Your calculation + Recursion needs to be done in the same function. You CAN'T DO B.C in one function and then recursion in another function.
    if( input[si]  != input[ei])
    {
        return false;
    }
    if( si == ei )
    {
        return true;
    }
    while( si < ei )
    {
       bool catching1 =  helperfunc( input , si + 1, ei - 1 ); // Remember if you re using si and ei then there is no use of input +1.
       return catching1;
    }
}
 bool checkPalindrome( char input[]  )
{
    int si = 0;
    int len = strlen( input );
    int ei = len - 1;
   bool catching2 =  helperfunc( input , si, ei );
   return catching2;
}
int main()
{
    char input[50];
    cin >> input;

    if(checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
