#include <bits/stdc++.h>
using namespace std;

/*int main(){

 // 1 ST METHOD
    long int n,ans,rem;
    ans = 0;
  long  int z=1;
    long int y;
    cin >> n;
    while(n > 0){
        rem = n % 2;
        y=rem*z;
        ans=ans+y;;
        z*=10;
        n = n / 2;


    }
    cout << ans ;
// 2 ND METHOD
 #include <iostream>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    long bin = 0, power = 1;

    while (num>0){
         int rem = num %2;
         num = num /2;
         bin = bin + rem*power;
         power = power*10;
    }

    cout<<bin;
} */

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int power =1;

    while( num != 0 )
    {
       int individual = num % 2;
       num = num/2;
       sum = individual  * power + sum;
       power = power * 10;
    }
    cout << sum;
}


/* Now see dont get confused between the logic of Reverse of a Number and this code.
See in reverse of a number eg- 123 -> 321, after doing mod the first number we would get is 3 then 2 and then 1.
And here eg- 12 -> 0011 -> 1100, when we do mod and check top to bottom first we get 0 then 0 then 1 and 1.
So in reverse the 3 needs to be shifted towards the left till the length of the number.  So to shift it towards the left we multiply it and keep adding whatever remainder we are getting.
In this, the first 0 needs to go to the right and our reversed number ( 1100 ) doesnt needs to be started with 0 which means w can multiply it ( manipulate it ) with power.
But in reverse, our final output needs to start with the first number we get after mod ie. 3 here. So we cant manipulate it ( cant multiply it ). So  Making a logic in such a way that initially our lastdigit itself becomes the reverse number ka starting
In reverse, we need to shift the elements towards the left . So the power is by 10 every iteration. But here in this sum we are moving the elements towards the right most end directly. We are not shifting one by one. We are directly putting it towards the units place, then tens , then hundreds and so on. So the power is multiplied by 10 in every iteration.
Just sit down and try to analyze closely the difference between ( 123 -> 321 ) & ( 0011 -> 1100 ). You will understand that both are different and needs two different logics to be implemented. */

