#include <bits/stdc++.h>
using namespace std;



/*int* comparetriplets ( int arr1[] , int arr2[] )
{
    int ans[2]= { 0,0 };
    for( int i = 0; i < 3; i++ )
    {
       if ( arr1[i] > arr2[i] )
           ans[0]++;
       if ( arr1[i] < arr2[i] )
           ans[1]++;
    }
    return ans;
}
int main()
{
    //const int terminator = -1;
    int arr1[3];
    int arr2[3];

    for( int i=0; i < 3; i++ )
    {
        cin >> arr1[i];
    }
    for( int i =0; i < 3; i++ )
    {
        cin >> arr2[i];
    }
    int * answer = comparetriplets( arr1 , arr2 );
    for( int i =0; i < 2; i++ )
     {
         cout << answer[i] << " ";
     }
}*/

int name ( int a, int b )
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << name ( a, b );

}

