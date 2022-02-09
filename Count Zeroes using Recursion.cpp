#include<bits/stdc++.h>
using namespace std;
int countZeros(int n)
{
   if(n<=9) // To handle 0001, 0000 like conditions
   { //DO NOT FORGET THIS CONDITION

    if ( n == 0)
 		return 1;
      else
          return 0 ;
   }

    int smallernum = countZeros( n / 10);
    int lastdigit = n % 10;
    if( lastdigit == 0 )
    {
        smallernum ++;
    }
    return smallernum;

}

int main()
 {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
