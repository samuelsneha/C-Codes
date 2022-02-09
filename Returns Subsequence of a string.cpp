#include<bits/stdc++.h>
using namespace std;
int subsequence( string input, string output[] )  // 2nd function ie. subs
{
    if( input.empty())
    {
        output[0] = " ";
         return 1;
    }
    string smallstring = input.substr( 1 );
    int smallOutputSize = subsequence( smallstring, output );
    for( int i = 0; i < smallOutputSize; i++ )
    {
        output[ i + smallOutputSize ] = input[0] + output[i];
    }
    return 2* smallOutputSize;
}

int main()
{
    string input;
    cin >> input;
    string* output = new string[1000];
    int num = subsequence( input, output );
    for( int i = 0 ; i < num ; i++ )
    {
        cout << output[i] << endl;
    }

}


// We are bringing the entire output corresponding to bc (ie. returning it), storing it, doubling it and then returning it.
// So here first recursion is doing the work of bringing the outputs  of bc and then we are doing the work of adding a to it.




/*int main() // 1st function ie. main
{
    string input;
    cin >> input;
    string* output = new string [1000];// the actual size should be, find its length and then do 2 ^ length.
    int count = subsequences( input, output);// REMEMBER, OUPUT IS AN ARRAY OF STRINGS.
    for( int i=0; i < count; i++ )
    {
        cout << output[i] << endl;
    }
}*/
