
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x ;
  int n;
  int answer = 1;
  cin >> x >> n;

  if (  n == 0 )
      cout << 1;
  else if ( x == 0 )
      cout << 0;
  else
   {
      for( int i = 1; i <= n; i++ )
      {
         answer = answer * x;
      }
         cout << answer;
   }
}
