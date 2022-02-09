/// IN THIS METHOD YOU WILL LEARN ABOUT HOW TO MARK AN ELEMENT AS USED, SO AS TO NOT TO USE THAT SAME ELEMENT AGAIN.
#include <bits/stdc++.h>;
using namespace std;

/// Approach 1 - USING RETURN TYPE OF VOID
/*void intersection( int *arr1, int *arr2, int size1, int size2 )
{
    int maximum = max( size1, size2 );
    int answer[maximum];
    int k = 0;
    for( int i = 0; i < size1; i++ )
    {
        for( int j = 0; j < size2; j++ )
         {
             if( arr1[i] == arr2[j] )
             {
                 answer[k] = arr1[i];
                 k++;
                 arr2[j] = INT_MAX;/// THIS IS THE MEHOD OF HOW YOU MARK AN ELEMENT IS DONE.
                 break;
             }
         }
    }
    for( int i = 0; i < k; i++ )
    {
        cout << answer[i] << " ";
    }
    return;
}*/

/// APPROACH 2 - USING RETURN TYPE OF INT*
int * intersection( int *arr1, int *arr2, int size1, int size2, int &k )
// Since k is modified in this function, so to use the modified value of k outside the function its passed by reference.
{
    int maximum = max( size1, size2 );
    int *answer = new int[maximum];
    for( int i = 0; i < size1; i++ )
    {
        for( int j = 0; j < size2; j++ )
         {
             if( arr1[i] == arr2[j] )
             {
                 answer[k] = arr1[i];
                 k++;
                 arr2[j] = INT_MAX;/// THIS IS THE METHOD OF HOW YOU MARK AN ELEMENT IS DONE.
                 break;
             }
         }
    }
    return answer;///WHENEVER YOU RETURN AN ARRAY FROM A FUNCTION, MAKE SURE THAT ARRAY WAS DYNAMICALLY CREATED TO AVOID ERRORS .
    /// BECUASE IF IT IS STATICALLY CREATED THEN ONCE WE GO OUT OF THE FUNCTION IT WILL BE LOST.
   /// THIS answer array returns ONLY THE BASE ADDRESS OF THE answer array AND WE NEED TO STORE ITS BASE ADDRESSS ONLY. SO WE CREATE AN INTEGER POINTER VARIABLE TO STORE ITS BASE ADDRESS IN INT MAIN.
}

int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
        int size1, size2;
        cin >> size1;
        int arr1[size1];
         for( int i = 0; i < size1; i++ )
         {
             cin >> arr1[i];
         }
         cout << endl;
         cin >> size2;
         int arr2[size2];
         for( int i = 0; i < size2; i++ )
         {
             cin >> arr2[i];
         }
         cout << endl;
        int k = 0;
        int * answer = intersection( arr1, arr2, size1, size2, k );/// intersection function returns the base address of answer array which is stored in answer pointer variable.
        for( int i = 0; i < k; i++ )
        {
             cout << answer[i] << " ";/// HOW THIS answer (ARRAYS IN GENERAL ) WORKS IS AS FOLLOWS: answer[i] = answer + i.
             // for i = 2, assume base address is 100. So 100 + (4 * 2 ) = 108 is the base address of answer[2]. So we print the value at address 108.
        }

    }
    return 0;
}
