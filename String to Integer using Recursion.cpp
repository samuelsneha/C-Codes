#include<bits/stdc++.h>
using namespace std;
//UNDERSTAND THE CONCEPT HERE. ITS EASY.
//ITS LIKE FOR EG.1234, 3*10 + 4 = 34; 2*100 + 34 = 234; 1 * 1000 + 234 = 1234.
//REMEMBER HERE 1234 IS IN STRING AND WE CONVERT THEM TO INTEGER
int stringToNumber(char input[])
{

int len = strlen( input );
 if( len == 1 )
 {
    int b = input[0] - '0';
    return b;
 }
    int halfans1 = stringToNumber ( input +1 );
    int halfans2 = input[0] - '0';
    int output = halfans2 * pow( 10, len-1) + halfans1;
    return output;
}
int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}



