#include<bits/stdc++.h>
using namespace std;
//int main(){
//    int alphabets =0;
//    int spaces=0;
//    int numbers =0;
//    char n;
//    n= cin.get();
//    while ( n != '$') {
//    if ( n >= 97 && n <= 122){
//    alphabets++;
//       }
//    else if  ( n >= 48 && n <= 57 ){
//    numbers++;
//       }
//     else if ( n == 32 || n==10 || n == 9 ) {
//    spaces ++;
//         }
//    n = cin.get();
//      }

//    cout << alphabets << " " << numbers << " " <<spaces;

//}

int main(){
    int characters = 0, numbers = 0, spaces = 0;
    string input;
    //cout << "Enter the character array";
    getline( cin, input, '$' ); //getline can be used to take multiple lines of input and '$' is the delimiter. And this getline() function can be used with strings only I guess.
    int length = input.length();
   // cout << length;
    for( int i = 0; i < length; i++ ){
        if( input[i] >= 'a' && input[i] <= 'z'){
            characters++;
           // cout << character
        }
        else if( input[i] >= '0' && input[i] <= '9' ){
            numbers++;
           // cout << numbers;
        }
        else if( input[i] == ' ' || input[i] == '\t' || input[i] == '\n' ){
            spaces++;
           // cout << spaces;
        }
    }
    cout << characters << " " << numbers << " " << spaces;
}

