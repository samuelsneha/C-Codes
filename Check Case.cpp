#include<iostream>
using namespace std;

int main()
{
   char input;
   cin >> input;

// Write your code here
   if (  input >= 'A' && input <= 'Z' )// REMEMBER YOU CAN DO LIKE THIS IN CHARACTERS ALSO THE WAY YOU DO IN INTEGERS!!
         cout<< "1";
   else if ( input>='a' && input<= 'z')// REMEMBER YOU CAN DO LIKE THIS IN CHARACTERS ALSO THE WAY YOU DO IN INTEGERS!!
             cout<< "0";
   else
       cout<< "-1";
}
// Also, input is also a character variable so no single quotes but A, Z,a,z are characters so single quotes.
