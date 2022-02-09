
#include <bits/stdc++.h>;
using namespace std;

/*int main() {
int t;
int n;
int arr[n];
int x;
cin >> t;
cout << endl;
while ( t > 0){
       cin >> n;
       cout << endl;
for( int i=0; i < n; i++){
    cin >> arr[i];
    }
cout << endl;
cin >> x;
for (int i=0; i< n; i++){
     if ( x == arr[i]){
     cout << i;
     exit;
     }
    else if ( i < n -1 )
             continue;
    else
         cout << -1;
     }
   t--;
 }
} */

/// Approach 1: Using 2 Functions. Doing like this is better in exams and interviews.

/*int linearSearch( int n, int *arr, int value )
{
    for( int i = 0; i < n; i++ )
       {
           if( arr[i] == value )
           {
               return i ;
           }
       }
     return -1;
}
int main()
{
   int tc;
   cin >> tc;
   while( tc-- )
   {
       int n;
       cin >> n;
       int arr[n];///ITS ALWAYS NECESSARY TO MENTION THE SIZE OF THE ARRAYS WHILE DECLARING IT. IF YOU DONT INITIALIZE THE ELEMENTS ITS OKAY BUT MENTIONING THE SIZE IS COMPULSORY.
       for( int i = 0; i < n; i++ )
       {
           cin >> arr[i];
       }
       int value;
       cin >> value;
       cout << linearSearch( n, arr, value );/// PRACTISE THIS MORE OFTEN
   }
   return 0;
}*/

/// Approach 2: WITHOUT USING ANY FUNCTION, DIRECTLY PUTTING EVERYTHING INTO MAIN FUNCTION. TRY AVOIDING THIS.
int main()
{
   int tc;
   cin >> tc;
   while( tc-- )
   {
       int n;
       cin >> n;
       int arr[n];///ITS ALWAYS NECESSARY TO MENTION THE SIZE OF THE ARRAYS WHILE DECLARING IT. IF YOU DONT INITIALIZE THE ELEMENTS ITS OKAY BUT MENTIONING THE SIZE IS COMPULSORY.
       for( int i = 0; i < n; i++ )
       {
           cin >> arr[i];
       }
       int value;
       cin >> value;
       int i = 0;
       for( i = 0; i < n; i++ )
       {
           if( arr[i] == value )
           {
               cout << i << endl ;
               break;
           }
       }
       if ( i == n )
       cout << -1 << endl;

    }
}
