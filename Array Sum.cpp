#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int sum=0;
	int n;
	cin >> n;
    int input[n];
    for(int i=0;i<n;i++){
		cin >> input[i];
    }
	for ( int i=0; i <= n-1; i++  ) {
		sum= sum+ input [i];
	}
	cout << sum;
} */


void sumOfArray( int n , int arr[] ){
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        sum = sum + arr[i];
    }
    cout << sum;
}

int main(){
    int n;
    //cout << "Enter the number of elements in the array";
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    sumOfArray( n, arr );
    return 0;
}
