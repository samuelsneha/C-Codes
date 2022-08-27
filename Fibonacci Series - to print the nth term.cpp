#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//    int n;
//    cin>>n;
//    if ( n == 0 )
//       cout << 0;

//    int first =1;
//    int second=1;
//    int sum = 0;
//    int i=3;// Understand why starting from 3 is necessary here.

//    while ( i <= n )
//    {
//        sum=first+second;
//        first=second;
//        second=sum;
//        i++;
//     }
//      cout<<sum;// This handles the condition where n == 1 or n == 2
//}

int main(){ //THIS CODE WORKS FOR FIBBONACI SERIES: 1,1,2,3,5,8,13....
    int firstElement = 1 , secondElement = 1, sum = 0;
    int N;
    //cout << "Enter the value of N";
    cin >> N;
    if( N == 1 || N == 2 ){
        cout << 1;
    }
    else{
        for( int i = 3; i <= N; i++ ){
            sum = firstElement + secondElement;
            //cout << sum << " ";
            firstElement = secondElement;
            secondElement = sum;
        }
        cout << sum;
    }
    return 0;
}

// int main(){ //THIS CODE WORKS FOR FIBBONACI SERIES: 0,1,1,2,3,5,8,13....
//     int firstElement = 0 , secondElement = 1, sum = 0;
//     int N;
//     //cout << "Enter the value of N";
//     cin >> N;
//     if( N == 0 ){
//         cout << 0;
//     }
//     else if( N == 1 ){
//         cout << 1;
//     }
//     else{
//         for( int i = 2; i <= N; i++ ){
//             sum = firstElement + secondElement;
//             //cout << sum << " ";
//             firstElement = secondElement;
//             secondElement = sum;
//         }
//         cout << sum;
//     }
//     return 0;
// }
