#include <iostream>
using namespace std;
int main () {
int i=1;
int n;
cin >> n;
while( i<=n){
int space =1;
while ( space <= n-i){
cout << " ";
space++;
     }
int j=1;
while ( j <=i) {
cout << j;
j++;
    }
cout << endl;
i=i+1;
 }
}
