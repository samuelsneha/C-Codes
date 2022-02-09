#include<bits/stdc++.h>
using namespace std;

/*  void sumoftwoarrays( int arr1[], int arr2[], int lsb[], int n, int m, int index)
{

  int carry = 0;
  int i=n-1;
  int j = m-1;
  int num;

  while( i >= 0 && j >= 0 ) // Be very careful of this condition. It should be
{
     num = arr1[i] + arr2[j] + carry;
     lsb[index] = num % 10;
     carry = num /10;
     i--;
     j--;
     index--;
}
  while( j >= 0)
{
    num = arr2[j] + carry;
    lsb[index] = num % 10;
    carry = num /10;
    j--;
    index--;
}
  while( i >= 0)
{
    num = arr1[i] + carry;
    lsb[index] = num % 10;
    carry = num /10;
    i--;
    index--;
}
  lsb[index] = carry;
}
int main()
{
    int tc;
    cin >> tc;
    while( tc--)
    {
        int n;
        cin >> n;
        int arr1[n];
         for( int i=0; i < n; i++ )
        {
            cin >> arr1[i];
        }
        int m;
        cin >> m;
        int arr2[m];
        for( int i=0; i < m; i++ )
        {
            cin >> arr2[i];
        }
        int p = 1 + max( n , m);
        int index = p-1; // DONT FORGET ABOUT THIS
        int lsb[p];
        sumoftwoarrays( arr1, arr2, lsb, n , m, index );
        for( int i=0; i < p; i++ )
        {
            cout << lsb[i] ;
        }

    }
}*/

int * sumOfTwoArrays( int * arr1,  int size1, int * arr2, int size2, int * answer, int size3 )
{
    int a = size1 - 1, b = size2 - 1, c = size3 - 1;
    int carryOver = 0;
    while( a >= 0 && b >= 0 )
    {
         int temp = arr1[a] + arr2[b] + carryOver;
         answer[c] = temp % 10;
         carryOver = temp/10;
         a--;
         b--;
         c--;
    }
    while ( a >= 0 )
    {
        int temp = arr1[a] + carryOver;/// Eg. (9999 + 1) ie.even when one array is finished there is possibility that the sum of your current digit and carryOver is 2 digit like here in this example.
        answer[c] = temp % 10; ///So to handle such cases, we add the previous carry and current digit and store it in temp. Then do mod and store the lastdigit of the sum in in answer and rest to carryOver.
        carryOver = temp/10;
        a--;
        c--;

    }
    while ( b >= 0 )
    {
        int temp = arr1[a] + carryOver;/// Eg. (9999 + 1) ie.even when one array is finished there is possibility that the sum of your current digit and carryOver is 2 digit like here in this example.
        answer[c] = temp % 10; /// So to handle such cases, we add the previous carry and current digit and store it in temp. Then do mod and store the lastdigit of the sum in in answer and rest to carryOver.
        carryOver = temp/10;
        b--;
        c--;
    }
    while ( c >= 0 )
    {
        answer[c] = 0 + carryOver;
        c--;
    }
    return answer;
}

int main()
{
    int size1, size2, size3, tc;
    cin >> tc;
    while( tc-- )
    {
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
        int size3 = 1 + max( size1, size2 );
        int * answer = new int [size3];
        int * resultArray = sumOfTwoArrays( arr1, size1, arr2, size2, answer, size3 );
        for( int i = 0; i < size3; i++ )
        {
            cout << resultArray[i];
        }

    }
}
