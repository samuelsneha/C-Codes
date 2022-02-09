#include<bits/stdc++.h>
using namespace std;

/*int main(){
int n;
int number;
int max;
int secMax;
//int INT_MIN;
secMax = max= INT_MIN;
cin >> n;
for(int i=0;i<n;i++)
{
cin >>  number;
if ( number > max ){
secMax = max;
max = number;
}
else if (number > secMax  && number!=max) {
 secMax =number;
}
}
    cout<<secMax;
}*/

int main()
{
    int n;
    cin >> n;
    int previous;
    cin >> previous;
    int largest = previous;// assumption
    int secondlargest = INT_MIN;// assumption
    if ( n == 0 || n == 1 )// BC
    cout << INT_MIN;

     else
     {
       for ( int i = 2; i <= n; i++ )
       {
         int current;
         cin >> current;
         if( current >= largest  )// if current is larger
         {
             secondlargest = largest;// swapping between largest and secondlargest
             largest = current;
         }
         if( current < largest && current >= secondlargest ) // if current is smaller
            secondlargest = current;
       }
       if ( secondlargest == largest )// given in the question itself
       cout << INT_MIN;
       else
       cout << secondlargest;//output
     }
    return 0;
}
