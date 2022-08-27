#include<bits/stdc++.h>
using namespace std;
/*void printSubstrings ( char input [] )
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
} */

///Using String Object
/*void printSubstrings( string input ){
    int length = input.length() ;
    for( int i = 0; i < length; i ++ ){
    string s; //here if you do string s = " " you get the wrong o/p and if you do string s = ' ' you get error of conversion. So it's better to not define it.
        for( int j = i; j < length; j++ ){
            s = s + input[j];
            cout << s << endl;
        }
    }
}
int main(){
   string s;
   getline(cin,s);
   printSubstrings(s);
   return 0;
}*/

///Using C String
void printSubstrings( char input[] ){
    int length = strlen( input );
    for( int i = 0; i < length; i ++ ){
    string s; //here if you do string s = " " you get the wrong o/p and if you do string s = ' ' you get error of conversion. So it's better to not define it.
        for( int j = i; j < length; j++ ){
            s = s + input[j];
            cout << s << endl;
        }
    }
}
int main(){
   int size = 1e6;
   char arr[size];
   cin.get( arr, 1000 );
   printSubstrings( arr );
   return 0;
}
