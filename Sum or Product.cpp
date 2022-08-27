#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//  int n,c;
//  cin >> n >> c;
//  int product = 1;
//  int sum = 0;
//  if ( c == 1)
//  {
//      for( int i =1; i <= n; i++ )
//      {
//          sum = sum + i;
//      }
//       cout << sum;
//  }
//  else if ( c == 2 )
//  {
//       for( int i =1; i <= n; i++ )
//      {
//          product = product * i;
//      }
//       cout << product;
//  }
//  else
//    cout << -1;
//}


int main(){
    int N, C;
    int sum = 0, product = 1;
    //cout << "Enter the interger and the choice";
    cin >> N;
    cin >> C;
    if( C == 1 ){
        for( int i = 1; i <= N; i++ ){
            sum = sum + i;
        }
        cout << sum;
    }
    else if( C == 2 ){
          for( int i = 1; i <= N; i++ ){
            product = product*i;
        }
        cout << product;
    }
    else{
        cout<< -1;
    }
    return 0;
}
