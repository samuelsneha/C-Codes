#include<bits/stdc++.h>
using namespace std;
void printnumbers ( int n )
{
    if( n == 0)    // if( n == 1 )
    {             // cout << n;
        return ; // return;  this can also be done.
    }
     printnumbers( n -1);// see here you cant do cout << printnumbers( n - 1) because printnmbers function is of void return type and hence the function wont return anything. So if the function doesnt returns anything then how can you print something from it.
     cout << n;
}
/*#include<bits/stdc++.h>
using namespace std;
int printnumbers ( int n )
{
    if( n == 1)
    {
        cout << n;
        return 34566;// basically return has no use in this code. you are printing n which has no equation with ans/ return.
    }
      int ans = printnumbers( n -1);
      cout << n;
      return 23899;
}*/



int main()
{
    int n;
    cin >> n;
    printnumbers( n );// in case of int return type, even though there is nothing to hold the return, since you want to print n which has nothing to do with return/ans you are getting the correct ans.
}
