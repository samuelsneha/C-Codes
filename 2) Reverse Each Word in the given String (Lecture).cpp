#include<bits/stdc++.h>
using namespace std;
/*void reversedstring ( char str[] )
{
    int temp;
    int start=0;
    for( int i=0; str[i] != '\0'; i++ )
    {
        if( str[i] == ' ')
{
        int end = i-1;
        temp = str[start];
        str[start] = str[ end ];
        str[ end ] = temp;
        start = i+1;
}
    }
}
int main()
{
    int size = 1e6;
    char str[ size ];
    cin.getline ( str, size);
    reversedstring( str );
    cout << str;


} */
/*void rev(char *str){
    int start = 0, i = 0;
    for(i=0; str[i] != '\0'; i++){ // delimiter should be null
        if(str[i] == ' '){ // word ka end sirf space ke bad
            int end = i-1;
            while(start < end){
                swap(str[start], str[end]);
                start++, end--;
            }
            start = i+1;
        }
    }
    int end = i-1;
    while(start < end){
        swap(str[start], str[end]);
        start++, end--;
    }
}*/
/*void reverseEachWord( char input[] )
{
    int si = 0, ei = 0,current = 0;
    while( input[current] != '\0' )
    {
        while( input[current] != ' ' && input[current] != '\0' )
        {
            current++;
        }
        ei = current - 1;
        for( int j = si ; si <= ei;  si++,ei -- )
        {
            char temp = si;
            si = ei;
            ei = temp;
        }
        si = current + 1;
        current = si;
    }
}
int main()
{
    char input[100];
    cin.get(input, 100);
    reverseEachWord( input );
    cout << input;
}*/
///Using C String ( Not able to do this using Object String for some reason )
void reverseEachWord( char arr[] ){
    int start = 0, end = 0;
    for( int i = 0; i <= strlen( arr ); i++ ){
        if( arr[i] == ' ' || arr[i] == '\0' ){
            end = i -1;
            for( int j = start; j <= end; j++, end-- ){
                int temp = arr[j];
                arr[j] = arr[end];
                arr[end] = temp;
            }
            start = i + 1;
        }
    }
}
int main(){
    int size = 1e6;
    char arr[size];
    cin.get( arr, 1e6);
    reverseEachWord( arr );
    cout << arr;
}
