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
/*void removeConsecutiveDuplicates ( char input[] )
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
}*/
/// Approach 2)- Without shifting
/*void removeConsecutiveDuplicates ( char input[] )
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
}*/
void removeConsecutiveDuplicates( char arr[] ){//the same code can be done using string object but we didn't do it because it was too easy
    int j = 0;
    int length = strlen(arr);
    arr[j]= arr[0];
    j++;
    for( int i = 1; i < length - 1; i++ ){
        if( length == 1 ){
           cout << arr[0];
            break;
        }

        if( arr[i] != arr[i + 1] ){//focussing on the ones that are not duplicates is an easier approach
            if( arr[i] != arr[i-1] && arr[i] != arr[j-1] ){
                arr[j] = arr[i];
                j++;
            }
            arr[j] = arr[i+1];
            j++;
        }
    }
    arr[j] = '\0';
}
int main(){
    int size = 1e6;
    char arr[size];
    cin >> arr;
    removeConsecutiveDuplicates( arr );
    cout << arr;
}
