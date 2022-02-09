#include<bits/stdc++.h>
using namespace std;
void removex( char str[] )
{

    if( str[0] == '\0') // str[0] == '\0' is a better practice than doing len == 0. You can get correct ans using len also but its just not a good practise.
    {
        return;
    }
    removex( str + 1);
    if( str[0] == 'x')
{

        for( int i =0; str[i] != '\0'; i++ ) // for loop so that the entire string gets shifted to the left and not just a single character of str0 and str1
    {
        str[i] = str[i+1]; // see here we are doing left shifting so no need of writing str[i] = '\0' because in left shifting the null character itself gets shifted to the right by itself.
    } // if the above would have been str[i+1] = str[i] ie. right shifting then we would have done str[i] = '\0' t the end
    return; // not compulsory to write
}
    else // not compulsory to writ
        return; // not compulsory to write
}
int main()
{
    char str[100];
    cin >> str;
    removex( str );
    cout << str << endl; // DONT FORGET TO WRITE THIS!
}
