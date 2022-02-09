#include<bits/stdc++.h>
using namespace std;
/*void selectionsort( int str[], int n )
{
    //int last = n-1;
    //int start =0;
    int temp;
    int j;
    for( int i=0; i < n - 1; i++ )//understand the difference between n-1 and n over here because it has null character over here
    {
        int  minimum = i;
        for( int j = i +1; j < n ; j++ )
        {
            if( str[j] < str[minimum])
            {
              minimum = j;  // j  is  the  index; cause in ARRAYS when you swap and when you cant afford to loose the values, we have to swap wrt the indexes and cant do just randomly. See swapping happens only between 2 blocks ( local variables ) and NOT between array and a block because in this case the element in block after swapping will be lost from the array.
            }
        }
        temp = str[minimum];
        str[minimum]  = str[i];
        str[i] = temp;

    }

}

int main()
{
     int n;
     cin >> n;
     int str[n];
     for(int i=0; i<n; i++)
     {
         cin >> str[i];
     }
     selectionsort( str , n );
    for( int i = 0; i < n; i++ )
    {
        cout << str[i] << ' ';
    }
}


/
THIS  IS  HOW  YOU  HAD ATTEMPTED  AT  FIRST
SEE  THE  DIFFERENCE

#include<bits/stdc++.h>
using namespace std;
void selectionsort( int str[], int n )
{
    int last = n-1;
    int start =0;
    int temp;
    for( int i=0; i < n; i++ )
    {
        int minimum = min_element( str[start], str[n] );
        temp = minimum;
        minimum  = str[i];
        str[i] = temp;
        start++;
    }
}

int main()
{
     int n;
     cin >> n;
     int str[n];
     for(int i=0;i<n;i++)
     {
         cin >> str[i];
     }
     int tc;
     cin >> tc;
     while( tc --)
    {
        int x;
        cin >> x;
        cout << selectionsort( str , n );
    }

} */


int * selectionSort( int * arr, int size )
{
    int j;
    for( int i = 0; i < size ; i++ )
    {
        int minimum = INT_MAX;
        int minIndex ;
        for( j = i ; j < size; j++ )//J starts from i because from the ith position to the end we need to find the minimum element. Chances are there that the minimum element is present at the ith element itself. So j = i.
        {
           if( arr[j] < minimum )
             {
                minIndex = j;/// YOU HAD FORGOTTEN THIS
                minimum = arr[j];
             }
        }
        int temp = arr[i];
        arr[i] = minimum;
        arr[minIndex] = temp;
    }
    return arr;
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
        for ( int i =0;  i < size; i++ )
        {
            cin >> arr[i];
        }
        int* answer = selectionSort( arr, size );
        for ( int i =0;  i < size; i++ )
        {
            cout << answer[i] << " ";/// EVEN IF WE DO arr[i] STILL WE WILL GET THE SAME ANSWER BECAUSE BASE ADDRESS OF THE ARRAY WAS PASSED AND RETURNED.
        }
        cout << endl;
    }
    return 0;
}
