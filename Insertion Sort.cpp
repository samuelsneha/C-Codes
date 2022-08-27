// IN  INSERTION  SORT  WE  DONT  SWAP  THE  ELEMENTS,  WE  SHIFT  THEM  TOWARDS  RIGHT  OR  LEFT  ACCORDING  TO  THE SITUATION. THIS  IS  A  DIFFICULT  ALGORITHM  FOR  YOUR  INFO
#include<bits/stdc++.h>
using namespace std;
/*void insertionsort( int str[], int n )
{
    for( int i=1; i < n; i++ )
    {
        int current = str[i];
        int j;
        for( j = i-1; j >= 0; j--)
        {
            if( current < str[j])
            {
                str[j+1] = str[j];
            }
            else
                break;
        }
        str[j + 1] = current; // SEE IF THE IF CONDITION IS FALSE IT MEANS CURRENT IS BIGGER THAN STR[i],SO IF THEY ARE BIGGER THEN THEY WILL BE PLACED IN THE RIGHT HAND SIDE OF STR[i] WHICH IS STR[i +1] BECUSE ITS BIGGER. IF ITS SMALL THEN STR[i] WILL BE SHIFTED TOWARDS THE RIGHT TO ALLOW THE CURRENT AT ITS LEFT.
    }

}
int main()
{

    int tc;
    cin >> tc;
    while( tc--)
    {
        int n;
        cin >> n;
        int str[n];
        for( int i =0; i < n; i++ )
        {
            cin >> str[i];

        }

        insertionsort( str, n );
        for( int i=0; i < n; i++ )
    {
        cout << str[i] << ' ';
    }

  }
}*/

/*void insertionSort ( int * arr, int size )
{
    for( int i = 1; i < size; i++ )
    {
        for( int j= 0; j <= i - 1; j++ )
        {
            if( arr[i] < arr[j] )
            {
                int temp = arr[i];
                for( int k = i - 1; k >= j; k-- )
                {
                    arr[k+1] = arr[k];
                }
                arr[j] = temp;
            }

        }
    }
    return;
}
/// This above approach is right but can be optimized further where comparision and shifting is done at the same time together as shown below.
void insertionSort ( int * arr, int size )
{
    for( int i = 1; i < size; i++ )
    {
        int current = arr[i];
        int j;
        for( j = i - 1; j >= 0; j-- )
        {
            if( current < arr[j] )// Here you had earlier done arr[i] < arr[j] . But this should be current because if we compare arr[i] with arr[j], arr[i] ka value keeps changing when j keeps shifting. So we should not use arr[i] while comparision but use current as value of current remains same throughout the iteration.
                arr[j+1] = arr[j];
            else
            {
               // arr[j+1] = current; BECAUSE IF WE PUT THIS CONT OVER HERE THEN IF THERE IS A CASE WHERE CURRENT IS SUPPOSED TO GO AT 0TH POSITION THEN THAT CAN HAPPEN ONLY IF WE GO OUT OF THE FOR LOOP
                break;
            }
        }
        arr[j+1] = current;
    }
    return;
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
        insertionSort( arr, size );
        for( int i = 0; i < size; i++ )
        {
            cout << arr[i];
        }
    }
    return 0;
}*/

void insertionSort( int arr[], int size ){
    for( int i = 1; i < size; i++ ){
       for( int z = i; z > 0; z-- ){
        if( arr[z] < arr[z-1]){
            int temp = arr[z];
            arr[z] = arr[z - 1];
            arr[z - 1] = temp;
         }
         else{
             break;
         }
    }
  }
}
