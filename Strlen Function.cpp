#include<bits/stdc++.h>
using namespace std;
/*int main()
{
   int size = 100;
  char str[ size];
  cin.get( str, size ) ;
  int len = strlen( str );
  cout << len;
}*/
///It tells us its size without the null character at the end.
int main()
{
   string str;
   getline( cin, str );
   int len = strlen( str );
   cout << len;
}
