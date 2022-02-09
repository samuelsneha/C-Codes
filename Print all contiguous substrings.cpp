#include<iostream>
using namespace std;
int length( char str[] )
{
  int count =0;
  for ( int i =0; str[i] != '\0'; i++)
  {
      count++;
  }
    return count;
}
    void printcontiguoussubstrings( char str[] )
{
    int len = length( str );
    for ( int i=0; i <= len; i++)
    {
        for ( int j = len-1; j >= i; j--)
        {
          for ( int k=i; k <=j; k++)
          {
           cout << str[k];

          }
           cout <<endl;
        }

     }
}
int main()
{
    int size = 100;
    char str[size];
    cin>> str;
    printcontiguoussubstrings ( str );
}
