#include<iostream>
using namespace std;
int main(){
/*❏ Let us dry run the code:
 5
 9 8 4 5 6
● N=5, prev=9
count=2, isDec=true
● curr=8
curr<prev and isDec is true:
prev=curr=8, count=3
● curr=4
curr<prev and isDec is true:
prev=curr=4, count=4
● curr=5
curr>prev and isDec is true:
So isDec=false
prev=curr=5, count=5
● curr=6
curr>prev and isDec is false.
prev=curr, count becomes greater than 5, i.e. equal to 6
So, print true.
● So, final output:
true
}


1. Take the number of integers N as input from the user, and then take the 1st number as
input from the user, in variable previous.
2. Initialize the number count by 2, and an isDec by true.
3. Run a loop until count becomes equal to N, increment it in each iteration.
4. In each iteration, take the current number as input from the user. Check whether the
current number is equal to the previous number, if yes then we print false directly.
5. If the current number is less than the previous number, then we will check if isDec is
false, then we will directly print false. If isDec is true, then we will continue.
6. But if the current number is greater than the previous number, then we will check if isDec
is true. If isDec is true then make it as false, as we have found an increase in the sequence
here. If isDec is false, then we will continue

Input=N, prev
Count=2, isDec=true
while count is less than or equal to N:
 Input=curr
 If(curr=prev):
 print(false)
 Return
 If(curr<prev):
 If isDec=false:
 print(false)
 Return
 else:
 If isDec = true:
 isDec = false
 prev = current
 Increment count by 1.
print (true)  /*
