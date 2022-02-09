#include<iostream>
using namespace std;
int main(){
int alphabets =0;
int spaces=0;
int numbers =0;
char n;
n= cin.get();
while ( n != '$') {
if ( n >= 97 && n <= 122){
alphabets++;
   }
else if  ( n >= 48 && n <= 57 ){
numbers++;
   }
 else if ( n == 32 || n==10 || n == 9 ) {
spaces ++;
     }
n = cin.get();
  }

cout << alphabets << " " << numbers << " " <<spaces;

}

