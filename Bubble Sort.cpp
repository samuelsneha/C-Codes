#include<bits/stdc++.h>
using namespace std;
/*void bubblesort( int str[], int n )
{
    int temp;
    for( int j = 0; j < n-1; j++ )
 {
    for( int i =0; i < n -1;  i++ ) //Actually its ( n - 1 - j ) the middle condition, dont do
    {
        if( str[i] > str[i+1] )
        {
            temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;
        }
    }
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

        bubblesort( str, n );//see first 1 tc gets inputed, then the function gets called, then output is printed then the compiler goes to the second tc and similar process is repeated. Its not that first all the test cases are given together then one by one they are executed.

    for( int i=0; i < n; i++ )
    {
        cout << str[i];
    }

  }
}*/

void bubbleSort( int * arr, int size )
{
    for( int i = 0; i < size ; i++  )/// i < size executes till the given size, but since suppose we have 5 numbers so by sorting 4 elements 5th one gets sorted so its better to do 4 sortings ie. size - 1.
        for( int j = 0; j < size - i - 1; j++ )/// Actually its ( size - i ) but because inside we access arr[j+1] so we are doing size - i - 1 so that garbage doesnt come.
    {
        {
            if( arr[j] < arr[j + 1] )
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
        bubbleSort( arr, size );
        for( int i = 0; i < size; i++ )
        {
            cout << arr[i];
        }
    }
    return 0;
}
