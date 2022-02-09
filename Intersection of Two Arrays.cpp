#include<bits/stdc++.h>
using namespace std;
void intersection(int *arr1, int *arr2, int n, int m)
{
   sort( arr1, arr1 + n );
   sort ( arr2, arr2 + m );
   int i =0;
   int j =0;
   for( int i =0; i < n; )
   {
       if( arr1[i] == arr2[j] )
       {
           cout << arr1[i] << " ";//Here we just we need to print the elements and no need to return them. Only in sums where we need to return them, we store them and hence create a different array for it.
           j++;
           i++;
       }
       else
       {
           if( arr1[i] < arr2[j] )
           {
               i++;
           }
           else
               j++;
       }
   }
}
// Since we are dealing with intersection, if either of the 2 arrays end our work is finished. So we usually deal with the smaller ones so that we can get done with our work fast, but here we don't know their sizes while coding and come to know about their sizes only at runtime. So we are randomly taking anyone.
// Once any one of the arrays gets exhausted, there is no point in doing any more comparision.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);

		delete[] input1;
		delete[] input2;

		cout << endl;
	}
}
