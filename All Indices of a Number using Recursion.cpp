//Really a difficult sum to think the logic of. Try to understand it and check notes also . hint Video 2 ka Code.
#include<bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{
  if( size == 0 )
  {
      return 0;
  }
  int ans = allIndexes( input , size - 1, x, output ); //understand why input

    if ( input[ size - 1] == x ) //understand why size - 1
    {
        output[ ans ] = size -1 ; //understand why ans
        ans++;
        return ans;
    }

    else
        return ans;

}
int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int x;

    cin >> x;

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
        delete [] input;
        delete [] output;
    }
}
