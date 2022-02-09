#include<bits/stdc++.h>
using namespace std;

void printSubstrings ( char input [] )
{
    for( int i = 0; input[i] != '\0'; i++ )
    {
        for( int j = i; input[j] != '\0'; j++ )
        {
            for( int k = i; k <= j; k++ )
            {
                cout << input[k];
            }
            cout << endl;
        }
    }
    return;
}
int main()
{
    char arr[100];
    cin >> arr;
    printSubstrings( arr );
    return 0;
}
