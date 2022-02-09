/// IN THIS CODE YOU WILL LEARN HOW TO RETURN CHARACTER ARRAYS FROM FUNCTIONS.
/// IT IS EXACTLY SIMILAR TO HOW WE RETURN INTEGER ARRAYS
/// EVEN THOUGH IN THE PROBLEM STATEMENT THEY HAVE MENTIONED TO USE STRING DATATYPE AS THE INPUT, ITS NOT POSSIBLE TO SOLVE THIS QUESTION USING STRING DATATYPE SO WE USE CHARACTER ARRAYS.
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

char * replaceCharacter( char input[], char a1, char a2 )
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
}

