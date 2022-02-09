#include<bits/stdc++.h>
using namespace std;
void highestoccuringcharacter( char str[], int freq[] )
{   char res;
    for( int i=0; str[i] != '\0'; i++ )
    {
            int a = str[i]; // CONVERTING CHARACTER TO INTEGER
            freq[a] = freq[a] + 1;
    }

            int maximum = freq[0];
            int i;
            for( i =1; i < 256; i++ ) //DONT DO MISTAKE IN THE CONDITION
            {
                if( freq[i] > maximum )
                {
                  maximum = freq[i];      // MAXIMUM HAS INTEGER VALUES LIKE 2 ,3 ,0, 5.
                  res =i;

                }
            }



         /* for(int i=0;str[i]!='\0';i++)
    {
        if(freq[int(str[i])] == maximum)  // ( SUPPOSE i is 5 ( i is an integer ), str[i] = a ( str[i] is a char ) , we are typecasting a into integer which becomes 97. Then we are checking whether the freq[97] is maximum )
            {
              res = str[i];
              break;
            }
    }*/

     cout << res;

}
int main()
{

    int freq[256] = {0}; // REMEMBER FREQUENCY ARRAY SHOULD BE OF INT
    char str[100];
    cin >> str;
    highestoccuringcharacter( str , freq );

}
