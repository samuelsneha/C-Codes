#include <bits/stdc++.h>
using namespace std;
/*int length ( char str[]){
int count = 0;
for ( int i=0; str[i] != '\0'; i++)
{
            count++;
}
       return count;

}
     void checkpalindrome ( char str[]){
        int len = length( str );
         int end = len -1;
        for ( int i=0; i < len; i++)
        {
            if ( str[i]!= str [ end])
            {
                cout << false;
            }
            else
            {
                cout << true;
            }

        }

     }


int main()
{
     int size = 1000;
    char str[ size];
    cin >> str;
    checkpalindrome( str );
} */



 /* #include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int size=1000;
    char str[size];
    cin >> str;


    int length ( char str[])
    {
        int count = 0;
        for ( int i=0; str[i] != '\0'; i++)
        {
            count++;
        }
        return count;
    }



   bool checkpalndrome (char str[])
    {
        int len=length(str);
        int end=len-1;

        for( int i=0; i<len ; i++)
        {
            if ( str[i]!= str [ end])
                cout << false;
                end--;
        }

        return true;
    }

}
#include <iostream>
#include <cstring>
using namespace std;

int length(char str[]){
   int count=0;

   for(int i=0;str[i]!='\0';i++){
       count++;
   }
   return count;
}
bool palindrome(char str[]){
    int len = length(str);
    int start=0;
    int end=len-1;

    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}




int main()
{
    int size = 100;
    char str[size];
    cin >> str;
    cout << palindrome( str );

}*/

bool palindrome( char sneha[] )
{
    int count = 0;
    bool answer = true;
    for( int i = 0; sneha[i] != '\0'; i++ )
    {
        count++;
    }
    int j = count - 1;
    for( int i = 0; i <= j; i++, j-- )
    {
        if( sneha[i] != sneha[j] )
        {
              answer = false;
              return answer;
        }
    }
    return answer;
}
int main()
{
    char sneha[100];
    cin >> sneha;
    bool answer = palindrome( sneha );
    if( answer )
        cout << "true";
    else
        cout << "false";
}
