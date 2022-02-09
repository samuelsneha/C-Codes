#include<iostream>
using namespace std;

int main(){
int i=1;
int n;
cin >> n;
while (i<=n){
int space=1;
while( space <= n-i){
cout << " ";
space++;
}
int value=i;
int j=1;
while ( j<= i){
cout << value;
value--;
j++;
}

  int m=1;
  int n=2;
  for ( i>= 2; m<=i-1; n++){
  cout << n;
  m++;
     }
cout << endl;
i=i+1;
   }
}
