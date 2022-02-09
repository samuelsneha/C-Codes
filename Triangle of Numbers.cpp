#include<iostream>
using namespace std;
int main() {
int i=1;
int n;
cin >> n;
while( i<=n){
int space=1;
while( space <= n-i){
cout << " ";
space++;
      }
int value=i;
int j=1;
while ( j<=i ){
cout << value;
value++;
j++;
      }
//int k=i-2;
//int m=1;
//int n=i+k;
//for ( i>= 2; m<=i-1; n--){
//cout << n;
//m++;
//      }


int m=2*i-2;
int k=1;
for( i>=2; k<=i-1;m-- ){
cout << m;
k++;
}

cout << endl;
i=i+1;
    }
}
