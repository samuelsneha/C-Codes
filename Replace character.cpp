/// IN THIS CODE YOU WILL LEARN HOW TO RETURN CHARACTER ARRAYS AND STRINGS FROM FUNCTIONS.
/// IT IS EXACTLY SIMILAR TO HOW WE RETURN INTEGER ARRAYS
#include<bits/stdc++.h>
using namespace std;
/*
int length( char str[] )
{
  int count =0;
  for( int i=0; str[i] != '\0'; i++)
  {
      count++;
  }
   return count;
}
void replacecharacter( char str[], char c1, char c2 )
{
int len = length( str );
for ( int i=0; i < len; i++)
{
    if( str[i] == c1)
    {
      str[i] = c2;
    }
}
}
#include<iostream>
using namespace std;
int main()
{
int size = 100;
char str[size];
char c1,c2;
cin >> str >> c1 >> c2;
replacecharacter( str, c1,c2);
cout << str;
}*/

///a) - Using C String
/*char * replaceCharacter( char input[], char a1, char a2 )
{
    for( int i = 0; input[i] != '\0'; i++ )
    {
        if( input[i] == a1 )
          input[i] = a2;/// DONT DO THE MISTAKE OF a1 = a2
    }
    return input;
}
int main()
{
    char input[100];
    cin.get( input , 100 );
    char a1, a2;
    cin >> a1 >> a2;
    char * answer = replaceCharacter( input, a1, a2 );
    cout << answer;
    return 0;
}*/

///b)- Using String Object
string replaceCharacter( string s, char c1, char c2 ){
   for( int i = 0; s[i] != '\0'; i++ ){
        if( s[i] == c1 )
          s[i] = c2;
   }
   return s;
}
int main(){
   string ans;
   getline(cin, ans );
   char c1, c2;
   cin >> c1 >> c2;
   cout << replaceCharacter( ans, c1, c2 );
}


