#include <bits/stdc++.h>
using namespace std;
/*int main(){
int i =1;
int N;
int C;
cin >> N >> C;
if ( C == 1){
int output =0;
while (  i <= N) {
output = i + output;
i ++;
   }
cout << output;
}
else if ( C ==2){
int output =1;
while ( i <= N  ) {
output = output *i;
i++;
   }
cout << output;

}
else if ( C != 1 && C!= 2)
cout << -1;
}*/

int main()
{
  int n,c;
  cin >> n >> c;
  int product = 1;
  int sum = 0;
  if ( c == 1)
  {
      for( int i =1; i <= n; i++ )
      {
          sum = sum + i;
      }
       cout << sum;
  }
  else if ( c == 2 )
  {
       for( int i =1; i <= n; i++ )
      {
          product = product * i;
      }
       cout << product;
  }
  else
    cout << -1;
}
