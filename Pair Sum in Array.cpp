/// HERE IN THIS SUM, WE CANT HAVE THE SAME PAIRS. FOR EG. IF ( 0 + 5 = 5 ) IS ONE PAIR THEN, ( 5 + 0  = 5 ) CANT HAPPEN. UNLESS THERE ARE DUPLICATE ELEMENTS OF 0 OR 5 IN THE ARRAY.
/// WHAT I MEAN TO SAY IS, SAME PAIR FROM THE SAME POSITIONS OF BOTH CANT HAPPEN. LIKE 0 ( 2ND INDEX ) + 5 ( 4TH INDEX ) = 5 & 5 ( 4TH INDEX ) + 0 ( 2ND INDEX ) = 5 CANT HAPPEN . BUT DUPLICATES LIKE 0 ( 2ND INDEX ) + 5 ( 7TH INDEX ) = 5 CAN HAPPEN.
/// SO TO AVOID THIS: 0 ( 2ND INDEX ) + 5 ( 4TH INDEX ) = 5 & 5 ( 4TH INDEX ) + 0 ( 2ND INDEX ) = 5, WE WIL PUT A CONITION THAT ONY IF THE iTH ELEMENT IS SMALLER THAN THE jTH ELEMENT, THEN ONLY WE WILL COUNT IT.
/// IN THIS CASE, ( 0,5 ) WILL BE CONSIDERED BUT ( 5, 0 ) WILL NOT BE CONSIDERED.
/// SO BY USING THIS CONDITION, IF TWO POSITIONS SATISFYING THE SUM VALUE ARE THERE THEN ONLY THE ONE WHICH HAS SMALLER i WILL BE CONSIDERED. THUS SAME PAIRS WITH SAME POSITIONS WONT BE ENTERTAINED AND DUPLICATES WILL BE ALLOWED.
/// BASICALLY WE ARE USING THE PROPERT THAT A PAIR CAN OCCUR TWICE- FIRST USING THE iTH INDEX FIRST AND THEN USING THE jTH INDEX FIRST. SO WE WILL BE SELECTING ONLY ONE FROM BOTH OF THESE AND THAT WILL BE THE ONE HAVING SMALLER i. SO TWICE SAME PAIR WONT BE COUNTED AND THIS SAME CONDITION WILL HANDLE DUPLICATES ALSO. SO NO ISSUES ;)
#include<bits/stdc++.h>
using namespace std;

//int pairSum( int *arr, int size, int sum )
//{
//    int count = 0;
//    for( int i = 0; i < size; i++ )
//    {
//        for( int j = 0; j < size; j++ )
//        {
//            if( ( arr[i] + arr[j] == sum ) && ( i != j ) && ( arr[i] < arr[j] ) )
//            count++;
//        }
//    }
//  return count;
//}
int pairSum( int arr[], int size, int x ){
    int count = 0;
    for( int i = 0; i < size; i++ ){
        for( int j = 0; j < size; j++ ){
            if( arr[i] + arr[j] == x && i != j && i < j ){ //You can do either i < j OR arr[i] < arr[j]. Both intend the same.
                // arr[i] = INT_MAX; Understand why doing this, all the testcases wont work
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
        int size;
        cin >> size;
        int arr[size];
        for( int i = 0; i < size; i++ )
         {
             cin >> arr[i];
         }
         cout << endl;
         int sum;
         cin >> sum;
         cout << pairSum( arr,size, sum );
    }
    return 0;
}
