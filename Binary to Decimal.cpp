#include <bits/stdc++.h>
using namespace std;

/*
// This method I have no idea about what is going on
int main(){
int i=0;
int sum =0;
int num;
int last;
cin >> num;
while ( num > 0) {
last = num%10;
num = num/10;


if ( last == 0){
sum = 0;
cout << sum;
}
else {
for ( ;; i++)
last = pow( 2,i);
   }
sum = sum +last;
}
cout << sum;
}

// In this, the method which they are doing is, suppose 1101. Then 1101 = 1*8 + 1*4 + 0*2 + 1*1 .
// Its similar to mine, but they have expanded it more.
// This is the hint video method.
int main()
{
	int n;
    int x,y,z=1,sum=0;
    cin>>n;
    while(n!=0){
        x=n%10;
        y=z*x;
        z=2*z;
        sum=sum+y;
        n=n/10;

    }
    cout<<sum;
}*/

// In this method, each time we encounter 1 we are adding 2's nth power to the sum.
//The nth power is the count of the number of digits. We need to add the values by (nth -1) power of 2.
// Like for 1101 = ( 2^3 + 2^2 + 2^0 ).
//Its my method.
//int main()
//{
//    int num;
//    cin >> num;
//    int count = 0;
//    int sum = 0;
//    int leftover = num;

//    while( leftover > 0 )
//    {
//      int individual = leftover % 10;
//      leftover = leftover/10;

//      if( individual == 1 )
//      {
//          count++;
//          sum = sum + pow( 2, count-1 );
//      }
//       else
//           count++;
//    }
//    cout << sum;
//}

int main(){
    int num, digit = 0, position = 0, x = 0, total = 0;
    // cout << "Enter the number";
    cin >> num;
    string numS = to_string(num);
    int length = numS.length();
    for( int i = 1; i <= length; i++ ){
        digit = num % 10;
        num = num / 10;
        position++;
        if( digit == 1 ){
          x = position - 1;
          int sum = 1;
          while( x > 0 ){
            sum = sum * 2;
            x--;
          }
          total = total + sum;
        }
    }
    cout << total;
    return 0;
}
