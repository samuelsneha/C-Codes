#include <bits/stdc++.h>;
using namespace std;

/// Approach: Using 2 Functions. Doing like this is better in exams and interviews.

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

void linearSearch( int n , int arr[], int x ){
    int i;
    for( i = 0; i < n; i++ ){
        if( arr[i] == x ){
            cout << i;
            break;
        }
    }
    if( arr[i] != x ){
        cout << -1;
    }
    cout << endl;
}
int main(){
    int tc;
    cin >> tc;
    while( tc > 0 ){
        int n;
        // cout << "Enter the number of elements"
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ){
            cin >> arr[i];
        }
        int x;
        cin >> x;
        linearSearch( n , arr, x );
        tc--;
    }
    return 0;
}
