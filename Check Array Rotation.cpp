#include<bits/stdc++.h>
using namespace std;

/*int checkarrayrotation( int arr[], int n )
{
   for( int i=0; i < n-1; i ++ ) //DONT FORGET WHY WE ARE DOING THIS n-1
  {
      if( arr[i] > arr[i+1])
      {
          return (i+1);
      }
  }
  return 0;
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
       // cout << checkarrayrotation( arr, n);// We could do this also because here we have no purpose on storing the value which ans has. We dont need to store it, we need to print it so this method also works.
        int ans = checkarrayrotation( arr, n); //cout << checkarrayrotation( arr, n) would have also worked. Here ans only stores the value.
        cout << ans; // Here the value of ans which was stored is being printed. Dont forget to do this, earlier you had forgotten.
    }


}*/

int arrayRotateCheck( int * arr, int size )
{
    for( int i = 0; i < size - 1; i++ )// Understand why
    {
        if( arr[i + 1] < arr[i] )
            return i + 1;
    }
    return 0;// Understand why
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
        cout << arrayRotateCheck( arr, size );
        cout << endl;

    }
}
