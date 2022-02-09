#include<iostream>
using namespace std;
int main() {
int i=0 ;
int sum =0;
int  N;
cin >> N;
for ( i=1;i<= N;i++){
        if ( i%2 ==0){
            sum= sum + i;
        }
}
    cout << sum;
}
