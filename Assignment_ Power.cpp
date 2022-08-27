#include<iostream>
#include <cmath>
using namespace std;

//int main() {
//int x;
//int n;
//int answer;
//cin >> x >> n;
//if( x ==0 && n==0){
//cout << 1;
//}
//else{
//answer = pow (x,n);
//cout << answer;
//}
//}

int main(){
    int x, n;
    int sum = 1;
   // cout<< "Enter the values of x and n";
    cin >> x >> n;
    for( int i = 1; i <= n; i++ ){
        sum = sum * x;
    }
    cout << sum;
    return 0;
}
