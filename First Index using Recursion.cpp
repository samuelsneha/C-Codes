//See here in this question while going upwards in the recursion itself we try to find the thing because, the thing that we want to find is a part of the array itself. So we don't wait for the recursion to finish and do the finding part while travelling upwards only.
//If we didn't find the element we are looking for while going upwards and we have reached the null character then this means that the element doesn't exists in the array.
#include<bits/stdc++.h>
using namespace std;
int firstIndex(int input[], int size, int x)
{
    if( size == 0 )
    {
        return -1;
    }
    if( input[0] == x)
    {
        return 0;
    }
    int catching = firstIndex( input + 1, size -1, x );
    if ( catching == -1)
    {
        return -1;
    }
    else
    {
        return catching +1;
    }


}

int main()
{
   int n;
   cin >> n;
   int *input = new int[n];
   for( int i =0; i < n; i++ )
   {
       cin >> input[i];
   }
   int element;
   cin >> element;
   int ans = firstIndex( input, n , element );
   cout << ans;
}
