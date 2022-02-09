#include<iostream>
using namespace std;
int main() {
int rem;
int number;
int even =0;
int odd = 0;
cin>>number;

while(number!=0)  {
int rem=number%10;
number=number/10;


if ( rem % 2==0){
 even= even + rem;
   }
 else {
 odd = odd +rem;
   }
 }

 cout << even <<" "<< odd;
}
