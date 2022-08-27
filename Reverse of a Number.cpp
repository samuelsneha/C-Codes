#include <bits/stdc++.h>
using namespace std;
// WORKS PERFECT ACCORDING TO THE GIVEN QUESTION.
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

int main(){
    int num, digit = 0;
    bool flag = true;
    bool done = false;
    //cout << "Enter the number";
    cin >> num;
    if( num == 0 )
        cout << 0;
    string numS = to_string(num);
    int length = numS.length();
    //cout << length;
    for( int i = 1; i <= length; i++ ){
        digit = num % 10;
        num = num/10;
        if( digit == 0 )
            flag = true;
        else{
            flag = false;
            done = true;
        }
        if( done == true )
        cout << digit;
    }
    return 0;
}
