//THE CONCEPT OF SHIFTING IS IMPORTANT TO UNDERSTAND HERE.
//THE CONCEPT OF SHIFTING IS EXACTLY SIMILAR TO THE REPLACEPI QUESTION.
#include<bits/stdc++.h>
using namespace std;

void pairstar( char input[])
{
    int len = strlen( input );
    if( len == 0 || len == 1 )
    {
        return;
    }
    pairstar( input + 1 );
    if( input[0] == input[1] )
    {
        int len = strlen( input );
        for( int i = len - 1; i > 0; i-- )
        {
             input[i + 1] = input[i];
        }
        input[len + 1 ] = '\0';//WE ARE DOING RIGHT SHIFTING HERE SO WE PUT NULL. IN LEFT SHIFTING WE DONT PUT NULL.
        input[1] = '*';
        return;
    }
    else
        return;
}

int main()
{
    char input[1000];
    cin >> input;
    pairstar( input );
    cout << input << endl;
}
