//The concept of shifting is important in this question and do not forget it.
//CONCEPT OF SHIFTING IS EXACTLY SAME TO PAIR STAR QUESTION.
#include<bits/stdc++.h>
using namespace std;
void replacePi( char input[])
{
    int len = strlen( input );
    if( len == 0 || len == 1 )
    {
        return;
    }
    replacePi( input + 1 );
    if( input[0] == 'p' && input[1] == 'i')
    {
       int len = strlen( input );
      //  int i =0;
      //int count =0;
      // while( input[i] != '\0')
      //  {
      //      i++;
      //      count++;
      //  }
       for( int j = len - 1; j > 0; j-- )
       {
            input[ j + 2 ] = input[j];
       }
      input[0] = 51;
      input[1] = 46;
      input[2] = 49;
      input[3] = 52;
      input[len + 2 ]= '\0'; //WE ARE DOING RIGHT SHIFTING HERE SO WE PUT NULL. IN LEFT SHIFTING WE DONT PUT NULL.
      return;
    }
}
int main()
 {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
 }
