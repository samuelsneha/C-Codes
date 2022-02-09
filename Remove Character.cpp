#include<bits/stdc++.h>
using namespace std;
void removecharacter( char str[] , char c1 )
{   int j = 0;
    for( int i=0; str[i] !='\0'; i++ )
    {
        if ( str[i] != c1 )
        {
           str[j] = str[i];
           j++;
        }
    }
    str[j] = '\0';


}

int main()
{
    int size = 100;
    char str[size];
    cin >> str;
    char c1;
    cin >> c1;
    removecharacter( str , c1);
    cout << str;
}
