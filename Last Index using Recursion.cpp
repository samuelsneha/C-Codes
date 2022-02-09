// Since we want to find the last element, we first climb the entire ladder and reach for the null character. Because there is no point if you get the element while climbing the ladder cause you want it from the back and not front.
// So you climb and reach till the peak of it, and then when you come down you search for the element and this time if you get the element its great cause you are getting it from the back.
// Once you get the element you return 0 and now you need to find its index, so you do catching +1.
#include<bits/stdc++.h>
using namespace std;

/*int lastIndex(int input[], int size, int x)
{
    if( size == 0)
    {
        return -1;
    }
    int catching = lastIndex( input + 1, size -1, x);
    if ( catching == -1)
    {
        if( input[0] == x)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    return catching +1; //Understand why this condition is important. Basically we are counting the index of the element after finding it in this condition.

} */

 int lastIndex(int input[], int size, int x)
{
    if( size == 0)
    {
        return -1;
    }
  int ans = lastIndex( input , size - 1, x ); //understand why input
    if ( input[ size - 1] == x ) //understand why size - 1

        return size - 1;

    else
        return ans;

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
   int ans = lastIndex( input, n , element );
   cout << ans;
}
