#include<bits/stdc++.h>
using namespace std;

/*int pairSum(int *arr, int i,int j, int num)
{
    int count = 0;
    while( i < j )
    {
        if( arr[i] + arr[j] == num )
        {
        int se=arr[i],ee=arr[j];
        if(se==ee)
        {int tot=j-i+1;
        count+=((tot)*(tot-1))/2;
        return count;
        }
        int tsi=i+1,tei=j-1;
        while(tsi<=tei&&arr[tsi]==se)
        tsi++;
        while(tsi<=tei&&arr[tei]==ee)
        tei--;
        int ttots=tsi-i,ttote=j-tei;
        count+=(ttots*ttote);
        i=tsi;
        j=tei;
        }
        else
        {
        if( arr[i] + arr[j] <  num )
        i++;
        else
        j--;
        }
    }
    return count;

}
int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr+n);
    int ans = 0;
    for(int i=0; i<n; i++)
    ans = ans + pairSum(arr, i+1, n-1, num-arr[i]);

    return ans;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}
}

int tripletSum( int *arr, int size, int sum, int firstElementPosition )///Since you want the presence of that element you subtracted for making sure elements are not repeated.
{
    int count = 0;
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size; j++ )
        {
           /// if( ( arr[i] + arr[j] == sum ) && ( i != j && j != firstElementPosition && firstElementPosition != i ) && ( firstElementPosition < i && i < j ) )
            if ( ( arr[i] + arr[j] == sum ) && ( i != j && j != firstElementPosition && firstElementPosition != i ) && ( arr[firstElementPosition] < arr[i] && arr[i] < arr[j] ) )
            count++;
        }
    }
    return count;

}*/
int tripletSum( int *arr, int size, int sum )
{
    int count = 0;
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size; j++ )
        {
            for( int k = 0; k < size; k++ )
            {
         //     if( ( arr[i] + arr[j] + arr[k] == sum ) && ( i != j && j != k && k != i ) && ( i < j && j < k  ) )//ERROR
                if( ( arr[i] + arr[j] + arr[k] == sum ) && ( i != j && j != k && k != i ) && ( arr[i] <= arr[j] && arr[j] <= arr[k]  ) )//error
                {
                    count++;
                }
            }
        }
    }
    return count;
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
         cout << endl;
         int sum;
         cin >> sum;
         int answer = 0;
         answer = tripletSum( arr, size, sum );
        //  for( int i = 0; i < size; i++ )
        // {
          //  answer = answer + tripletSum( arr, size, sum - arr[i], i );
         //}
         cout << answer;

    }
    return 0;
}

