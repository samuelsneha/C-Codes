#include<bits/stdc++.h>
using namespace std;
/*void mergetwoarrays( int arr1[], int arr2[],int ans[], int n, int m )
{
   int i=0;
   int j=0;
   int k=0;
   while( i < n && j < m ) //
{
    if( arr1[i] < arr2[j]) //if we put OR condition in the while loop then suppose i has 2 elements ie. 0 to 1 index then at i=2 over here in while loop arr[2] will have garbage value and comparision will be done with garbage value which we don't know.
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }
     else
    {
        ans[k] = arr2[j];
        j++;
        k++;
    }
 }


  while( i < n ) //THIS CANT BE IF STATEMENT BECAUSE IF IS A STATEMENT WHICH WILL BE EXECUTED ONLY ONCE. WHILE IS A LOOP AND IT WILL CONTINUE TILL THE CONDITION IS FALSE.
  {
      ans[k] = arr1[i];
      i++;
      k++;
  }
  while( j < m )  //THIS CANT BE IF STATEMENT BECAUSE IF IS A STATEMENT WHICH WILL BE EXECUTED ONLY ONCE. WHILE IS A LOOP AND IT WILL CONTINUE TILL THE CONDITION IS FALSE.
  {
      ans[k] = arr2[j];
      j++;
      k++;
  }

}

  int main()
  {
      int tc;
      cin >> tc;
      while ( tc--)
      {
          int n;
          cin >>n;
          int arr1[n];
          for( int i=0; i < n; i++ )
          {
              cin >> arr1[i];
          }
          int m;
          cin >> m;
          int arr2[m];
          for( int j=0; j < m; j++ )
          {
              cin >>arr2[j];
          }
          int ans[ m + n];//IT IS NECESSARY TO MENTION THE SIZE OF THE ARRAYS WHILE INITIALIZING IT.
          mergetwoarrays( arr1, arr2,ans, n, m ); //SEE IF YOU PUT PARAMETERS  IN THE WORONG MANNER/ORDER  THEN  STILL YOU  CAN  GET  WRONG OUTPUT
          for( int k =0; k < (m + n); k++ )
          {
              cout << ans[k] << ' ';
          }
      }
  }
*/

int * merge2sortedArrays( int * arr1, int * arr2, int size1, int size2 )
{
    int max = size1 + size2;
    int * newArray = new int[max];
    int i = 0, j = 0, k = 0;

    while( i < size1  &&  j < size2 )
    {
      if( arr1[i] <= arr2[j] )
      {
        newArray[k] = arr1[i];
        i++;
        k++;
      }
      else
      {
        newArray[k] = arr2[j];
        j++;
        k++;
      }
    }

    while( i < size1)
    {
        newArray[k] = arr1[i];
        i++;
        k++;
    }
    while( j < size2 )
    {
        newArray[k] = arr2[j];
        j++;
        k++;
    }

    return newArray;
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
        cin >> size2;
        int arr2[size2];
        for( int i = 0; i < size2; i++ )
        {
            cin >> arr2[i];
        }
        int * answer = merge2sortedArrays( arr1, arr2, size1, size2 );
        for( int i = 0; i < (size1 + size2); i++ )
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
