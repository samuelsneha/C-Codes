#include <iostream>
using namespace std;
int main(){
int n;
int i=2;
bool result = true;
cin >> n;
while(  i<=n){
int j =2;
while ( j <= i-1 ) {
    if ( i % j == 0 ) {
       result = false;
       break;

    }

    else {
    result = true;
    cout << i ;
    }
    cout << endl;
    j++;
}
  i++;
}
}

