// I have recorded the explanation by TA for the 3rd approach in the hint video of his question, which you couldnt understand . Its saved in your recorder.
#include<bits/stdc++.h>
using namespace std;

/*void sort012( int arr[], int n)
{
    int start = 0;
    int last = n-1;
    int ans[n];

  for( int i=0; i < n; i++)
  {

    if( arr[i] == 0 )
    {
        ans[start] = arr[i];
        start++;
    }
    if( arr[i] == 2 )
    {
        ans [last] = arr[i];
        last--;
    }

   }
   for( int i = start; i <=last; i++ )
   {
       ans[i] = 1;
   }
   //arr[i] = ans[i]; You cant do this because in this  only 1 element gets converted. For the entire array to get copied, you have to use FOR loop.
     for(int i=0;i<n;i++)
    {
       arr[i]=ans[i];

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
        int arr[n];
        for( int i=0; i < n; i++ )
        {
            cin >> arr[i];
        }
        sort012( arr, n ); // Where we do function call, at that place only we check whether the value has been returned or no, and if yes then which value. So we cant do cout here because the function is void. But we can do it down like i have done here.
        for( int i =0; i < n; i++ )
        {
            cout << arr[i]; //SEE WHEN WE PASS AN ARRAY IN A FUNCTION AS AN ARGUMENT AND IN THAT FUNCTION WE DO CHANGES INSIDE THE ARRAY , SO THOSE CHANGES WILL BE REFLECTED IN THE MAIN FUNCTION ALSO. THIS HAPPENS BECAUSE WE ACTUALLY PASS THE BASE ADDRESS IN THE ARGUMENTS WHEN WE PASS THE FUNCTION.
        }
    }
}
// Void and function call, these are the 2 places where we cant do cout
// You can do cout ( print ) in void and int func return types. You can do return in int function return types, but you cant do return in void function return types( you actually can do only for rare cases but forget that for now ).
*/

int * sort012( int * arr, int size )
{
    int j = 0, k = size - 1, i = 0;
    while( i < size && i <= k  )/// i <= k coz i keeps checking of the elements from front. If k crosses i and you swap i and k then which new element will come in k's place you don't know and on top of it now you don't have i also now to check on it. coz i has already passed k.
/// So whenever you iterate some variable from the end of the array, make sure you  keep some threshold /condition for it.
    {
        if ( arr[i] == 0 )
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
            i++;
        }
        else if ( arr[i] == 2 )
        {
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
            k--;
        }
        else
            i++;
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
        int * arr = new int [size];
        for( int i = 0; i < size; i++ )
        {
            cin >> arr[i];
        }
        int * resultPointer = sort012( arr, size );
        for( int i = 0; i < size; i++ )
        {
            cout << resultPointer[i] << " " ;
        }
        cout << endl;


    }
}
