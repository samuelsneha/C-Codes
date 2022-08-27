#include <bits/stdc++.h>
using namespace std;
///1
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
 */
///2
/*bool checkpalndrome (char str[])
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
*/
///3
/*int length(char str[]){
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
///4
/*bool palindrome( char sneha[] )
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
}*/
///5 a) - Using C String
/*bool checkPalindrome( char str[] ){
    int length = strlen( str ); //Could have also done a for/while loop/
    bool ans = true;
    int z = length - 1;
    for( int i = 0; i <= z; i++, z-- ){
        if( str[i] != str[z]){
            ans = false;
            return ans;
        }
    }
    return ans;
}
int main(){
    int size = 1e6;
    char arr[size];
    cin >> arr;
    cout << (checkPalindrome( arr )? "true":"false");
}*/
///5 b)- Using String Object
bool checkPalindrome( string s ){
    int length = s.size();
    bool ans = true;
    int z = length - 1;
    for( int i = 0; i <= z; i++, z-- ){
        if( s[i] != s[z]){
            ans = false;
            return ans;
        }
    }
    return ans;
}
int main(){
   string s;
   getline(cin,s);
   cout << (checkPalindrome( s )? "true":"false");
}


