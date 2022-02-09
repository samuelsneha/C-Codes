#include <bits/stdc++.h>
using namespace std;

/*int main(){
// FIRST METHOD - WORKS FOR 4 DIGITS ONLY
int num;
cin >> num;
int fourth,third,second,first,rem1,rem2,rem3;

fourth = num %10;
rem1 = num /10;
third = rem1 %10;
rem2 = rem1 /10;
second = rem2 %10;
rem3 = rem2 / 10;
first = rem3;

if ( fourth == 0){
cout << third<<second<<first;
   }
else {
cout << fourth<<third<<second<<first;
   }
}

// 2ND METHOD - WORKS PERFECT BUT NOT FOR THE 0'S RULE. LIKE 1000 WILL GIVE THE O/P 0001
 {int num;
 cin >> num;

    int temp=num;
    int reverse=0;
    while(temp>0)
    {
        int lastdigit=temp%10;
        temp=temp/10;
        cout << lastdigit;  */




//3 RD  METHOD - WORKS PERFECT ACCORDING TO THE GIVEN QUESTION.
// This is the only method which i am aware of which works.
// So over here, instead of trying from the last digit of 1234, we are moving the last digit towards the beginning (left) by multiplying with 10 and adding the latest one.
// This works perfectly fine for all testcases. Suppose its 1234 then, 4 -> 4*10 + 3 -> 43 * 10 + 2 -> 4321.
// Whatever we have got till now as the reversed number, that we are multiplying by 10 so that the number gets shifted towards the left and then we add the latest last digit from the current iteration to the product.
int main()
{
    int num;
    cin >> num;

    int temp=num;
    int reverse=0;
    while(temp>0)
    {
        int lastdigit=temp%10;
        temp=temp/10;
        reverse = reverse *10 + lastdigit;
// Making a logic in such a way that initially our lastdigit itself becomes the reverse number
    }
    cout<<reverse;
/* Now see dont get confused between the logic of Reverse of a Number and this code.
See in reverse of a number eg- 123 -> 321, after doing mod the first number we would get is 3 then 2 and then 1.
And here eg- 12 -> 0011 -> 1100, when we do mod and check top to bottom first we get 0 then 0 then 1 and 1.
So in reverse the 3 needs to be shifted towards the left till the length of the number.  So to shift it towards the left we multiply it and keep adding whatever remainder we are getting.
In this, the first 0 needs to go to the right and our reversed number ( 1100 ) doesnt needs to be started with 0 which means w can multiply it ( manipulate it ) with power.
But in reverse, our final output needs to start with the first number we get after mod ie. 3 here. So we cant manipulate it ( cant multiply it ). So  Making a logic in such a way that initially our lastdigit itself becomes the reverse number ka starting
In reverse, we need to shift the elements towards the left . So the power is by 10 every iteration. But here in this sum we are moving the elements towards the right most end directly. We are not shifting one by one. We are directly putting it towards the units place, then tens , then hundreds and so on. So the power is multiplied by 10 in every iteration.
Just sit down and try to analyze closely the difference between ( 123 -> 321 ) & ( 0011 -> 1100 ). You will understand that both are different and needs two different logics to be implemented. */
}

//4th Method - i DID THIS AND FAILED.
// This method which I tried works for some Testcases but it doesn't work for testcases which has 0 as a prominient digit.
// So in his method, where i start to build the reverse fromm the last digit doesnt works everytime especially when there is 0.
// Here i tried the method of, suppose 1234 = 4*10^3 + 3*10^2 + 2*10^1 + 1*10^0.
//But in examples like 80, 504 which has 0's it doesnt works.
/*int main()
{
    int num;
    cin >> num;
    int count = 0;
    int leftover1 = num;
    int leftover2 = num;
    int sum = 0;

    while( leftover1 > 0 )
    {
        int individual = leftover1 % 10;
        leftover1 = leftover1/10;
        if( individual != 0 )
           count++;
    }
    while( count-- )
    {
        int individual = leftover2 % 10;
        leftover2 = leftover2/10;
        sum = sum + individual *pow( 10, count - 1 );

    }
}*/

