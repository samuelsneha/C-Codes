#include<bits/stdc++.h>
using namespace std;
void removeduplicates(char *input)
{
    if( input[0] == '\0')
   {
       return;
   }

removeduplicates( input + 1 );
{
  if( input[0] == input[1])
    {
        for( int i =0; input[i] != '\0'; i++ )
      {

           input[ i ] = input[i + 1];// the concept used is left shifting, similar to he one used in Remove X.
      }
            return;
    }
    else
        return;
}
}

int main()
{
    char str[100];
    char c1, c2;
    cin >>str; // DONT PUT ENDL IN CIN
    removeduplicates( str );
    cout << str << endl; // DONT FORGET TO WRITE THIS!
}
