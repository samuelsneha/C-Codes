#include<bits/stdc++.h>
using namespace std;
/// Approach 1- Swapping the Zeroes to the Front
/*void sort01 ( int *arr, int size )
{
    int k = 0;
    for( int i = 0; i < size; i++ )
    {
        if( arr[i] == 0 )
        {
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
            k++;
        }
    }
    return;
}*/
/// Approach 2 - Swapping the Ones to the End
/// Understand why this approach never works. Do dry run and check you will inderstand.
/// When you are swapping to the front, you don have any limits wrt the position. You can keep 0s till how much ever you want to the front.
/// Also since you are going from L-R, you get to look at every element as all the elements in the L are sorted and the elements in the R needs to be sorted.
/// But thats not the case with swapping 1 to the end. When you swap 1 to the end, you have no idea on what that swapped element has brought to the current place and then you dont look at it as you iterate forwards. So swapping like this is not safe.
/// Swap only from beck to front with the element you want at the front ie. 0 over here.

/*void sort01 ( int *arr, int size )
{
    int k = size - 1;
    for( int i = 0; i < size; i++ )
    {
        if( arr[i] == 1 )
        {
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
            k--;
        }
    }
    return;
}*/
void sortZeroesAndOne(int arr[], int size){
    int end = size - 1;
    for( int i = 0; i <= end ; i++ ){
        if( arr[i] == 1 ){ // no need to put 1 in quotes like '1', it will give error.
            int temp = arr[end];
            arr[end] = arr[i];
            arr[i] = temp;
            end--;
            i--;
        }
    }
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
         sort01( arr, size );
         for ( int i = 0; i < size; i++ )
         {
             cout << arr[i] << " ";
         }
    }
    return 0;
}
/// Void function works like, we are passing the base address of array arr to the main sort function.
/// So modifications happen in the array arr and we return the base address of the array arr to the main function
/// So since it is the base address, in the for loop when we print we get the updated values.
/// Like, arr[0] == arr( ie. base address) + 0, arr[1]  == arr ( ie. base address ) + 4*1, arr[2] == arr ( ie. base address ) + 4*2 and so on.
/// So since IT'S AN ARRAY AND IN ARRAYS WE PASS THE BASE ADDRESS IN THE ACTUAL PARAMETERS, THE CHANGES ARE REFLECTED WHEN WE RETURN THE BASE ADDRESS TO THE MAIN FUNCTION.
/// IF IT WOULD HAVE BEEN AN INTEGER VARIABLE, THEN THIS PASS BY VALUE WOULDNT HAD REFLECTED THE CHANGED VALUES IN THE MAIN FUNCTION. BUT BECAUSE IT IS AN ARRAY AND WE PASS BASE ADDRESS IN AN ARRAY, EVEN IN PASS BY VALUE WITH VOID RETURN TYPE CHANGES ARE REFLECTED
