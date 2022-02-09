/*#include<iostream>
using namespace std;
int main(){
int sum=0;
int n;
int input[n];
cin >>n;
cin >> input[n];
for ( int i=0; i <= n-1; i++  ) {
sum= sum+ input [i];
}
cout << sum;
} */
#include<iostream>
using namespace std;
int main(){
    int sum=0;
	int n;
	cin >>n;
    int input[n];
    for(int i=0;i<n;i++){
		cin >> input[i];
    }
	for ( int i=0; i <= n-1; i++  ) {
		sum= sum+ input [i];
	}
	cout << sum;
}
