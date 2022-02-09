//Usually we call the recursion and then check the logic. But here we are doing the logic and then we are calling the recursion.
// See here in this code,first analyze all the given rules. Its aa, abb and bba are the rules allowed. The logic used over here is, increment to the next a so that again we can jump to the condition whether i/p[0] == a.
#include<bits/stdc++.h>
using namespace std;

bool checkAB(char input[])
{
  bool ans;
  if( input[0] == '\0')
  {
      return true;
  }
    if( input[0] == 'a') //Here ans is the variable which stores the bool return type . So we cant store them in different variables. Make the variable global and keep updating the value of that variable according to the situations.
    {
      if( input[1] == 'b' && input[2] == 'b')
      {
          ans = checkAB( input +3 );
      }
      else
        {
        	ans = checkAB( input +1);
        }
   }
    else{
        ans = false;
    }
    return ans;
}
int main()
{
    char input[1000];
    cin >> input;
    bool catching =  checkAB(input );
    //cout << catching; if we do only this then we will get answer only in terms of 0 and 1
    if( catching == true )
        cout << "true ";
    else
        cout << "false ";

}


