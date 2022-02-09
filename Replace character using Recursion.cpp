#include<bits/stdc++.h>
using namespace std;
void replacecharacter( char str[], char c1, char c2 )
{
    if( str[0] == '\0')
    {
        return;
    }
    replacecharacter( str +1 , c1, c2 );
    if( str[0] == c1 )
    {
        str[0] = c2;
    }

    else
        return;
}
int main()
{
    char str[100];
    char c1, c2;
    cin >>str; //  dont put endl in cin
    cin >>c1>>c2; // don't  put  endl  in  cin.
    replacecharacter( str, c1, c2 );
    cout << str << endl; // DONT FORGET TO WRITE THIS!
}
