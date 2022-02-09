#include<iostream>
using namespace std;

/*int length( char str[] )
{
  int count =0;
  for ( int i =0; str[i] != '\0'; i++)
  {
      count++;
  }
    return count;
}

void reversedstringwithreversedwords ( char str[] )
{
 int len = length( str );
 int end = len -1;
 char temp; //DONT DO THE MISTAKE OF INITIALIZING THIS TEMP AS INT AS HERE NOW ITS CHAR
 for ( int i=0; i < end; i++) // DONT DO THE MISTAKE OF THE CONDITTION
  {
    temp = str[i];
    str [i] = str[end];
    str [end] = temp;
    end--;           // See basically here also its n/2, but because we ae decrementing one from the bak also while incrementing one from the front n/2 is not written. In actual the concept of swapping deals with n/2 and not n. But here we write n beause we are decrementing also. Suppose you dont decrement it then it will have to use n/2. But If you are decrementing it also while incrementing it then use n and no n/2.
  }
}*/
reversedstringwithreversedwords ( char input[] )
{
    /* int count = 0;
     for( int i = 0; input[i] != '\0'; i++ )
     {
        count++;
     }
     int j = count - 1;
     for( int i = 0; i <= j ; i++, j-- )
     {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
     }*/
     for( int i = 0; input[i] != '\0'; )
     {
         int count = 0;
      /*   for( int i = 0; count < 2; i++ )
       {
           i--;
           cout << input[i];
           count++;
       }*/
       cout << input[i] << input[i+1] << " ";
       i++;
     }
}
int main()
{
  char str[100];
  cin.getline( str, 100);
  reversedstringwithreversedwords( str );
  cout << str;
}

