#include<bits/stdc++.h>
using namespace std;

/*void removeconsecutiveduplicates( char str[])
{
    int j =0;
    for( int i =1; str[i]!= '\0'; i++ )
    {
        if( str [j] != str[i])
        {
            j++;
            str[j] = str[i];
        }
    }
    j++;
    str[j] = '\0';

}*/
/// Approach 1) - Using left shifting method
void removeConsecutiveDuplicates ( char input[] )
{
    int len = strlen( arr );
    for( int i = 0; i < len - 1; i++ )
    {
        if( input[i + 1] == input[i] )
        {
            for( int j = i + 2; input[j] != '\0'; j++ )
            {
                 input[j - 1] = input[j];
            }
        }
    }
    input[j] = '\0'
}

/// Approach 2)- Without shifting
void removeConsecutiveDuplicates ( char input[] )
{
    int j = 0;
    input[j] = input[0];
    for( int i = 1; input[i] != '\0'; i++ )
    {
        if( input[i] != input[j] )
        {
            j++;
            input[j] = input[i];
        }
    }
    input[j] = '\0';
}
int main()
{
    int size = 100;
    char arr[ size ];
    cin >> str;
    removeConsecutiveDuplicates( arr );
    cout << arr;
}
