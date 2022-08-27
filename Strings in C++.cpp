///What is String ? String is a group of characters surrounded by double quotes. Examples of String are - "Sneha Samuel", "Sneha Samuel is intelligent and beautiful"
///Strings are the form of 1D character arrays which are terminated by null character (C Strings ). Null character is a special character with a symbol '\0’.

///There are two types of Strings in C++: 1) C Strings 2)String Objects.

///Both the types are declared in different ways:
///1)C Strings: C Strings are arrays of datatype char terminated with '/0'. We can define such a string like
///             char input[] = "C++"; //notice the double quotes over here
///             char input[] = {'C','+','+','\0'};
///             char input[4] = {'C','+','+','\0'};
///To find length of a C String - a) Use a for loop till it reaches null OR while loop till it does not reach null
///                               b) Use strlen eg. strlen(arr)
///2)String Object: String is a C++ class while the string variables are objects of this class. It is used for holding strings and has many inbuilt functions. We can define such a string like
///             string s;
///             getline(cin, s);
///To find length of a String Object - a) Use a for loop till it reaches null OR while loop till it does not reach null
///                                    b) s.length() OR s.size()

///Remember while taking the input for strings, << considers space as a terminating character. So we use cin.get(str,100) OR getline(cin,bio) for String Objects AND cin.get() for C Strings instead. But if our string is only of one word then we can do cin.

///To traverse through a String whether it belongs to C String type or String Object type, we do it similarly like:
///     string s;                                                     OR               char arr[1000];
///     cin.get(s, 100);                                                               cin << arr; (since it is of 1 word we are assuming here,we are doing this, else we would had done cin.get())
///     for( int i = 0; s[i] != '\0' || i < s.length(); i++ ){                         for( int i = 0;  arr[i] != '\0' || i < strlen(arr); i++ ){
///         if( s[i] != s[i+1]){                                                           if( arr[i] != arr[i+1]){
///            ans = false;                                                                ans = false;
///            return ans;                                                                 return ans;
///          }                                                                            }
///      }                                                                             }
///See even though String Objects do not end in '\0' theoretically unlike C String, but still above if you see for String Object we have used the condition s[i] != '\0' and it gives us the correct answer also. So theoretically C String ends in '\0' and String Object does not ends in '\0' but still while coding in String Object we can code the condition s[i] != '\0'.

///The code below shows how Strings can be passed and used in functions.
#include<bits/stdc++.h>
using namespace std;

void displayString1(string input1){
    cout << "String1 is:" << input1 << endl;
}
void displayString2( char input2[]){
    cout << "String2 is:" << input2 << endl;
}
//void displayString3( char input3[]){
//    cout << "String3 is:" << input3 << endl;
//}

int main(){
   string input1;
   char input2[1000];
//   char input3[1000];

   cout << "Enter string1:" << endl;
   getline( cin, input1 );

   cout << "Enter string2 :" << endl;
   cin.get( input2, 500);

//   cout << "Enter string3" << endl;
//   cin.get( input3, 20 );

   displayString1( input1 );
   displayString2( input2 );
//   displayString3( input3 );

   return 0;
}
///Use this as the input for input1 as well as input2 to see the difference between both the outputs - hi this is sneha. aspiring to be a siftware engineer or a full stack developer. my skills include c++, html, css, js, node.js,bootstrap . aspriring to learn java and react.
