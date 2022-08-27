#include<bits/stdc++.h>
using namespace std;
//void intersection(int *arr1, int *arr2, int n, int m) ///THIS IS AN EXCELLENT METHOD, BUT USING THIS METHOD ALL THE TESTCASES OF CODING NINJAS WONT PASS AS CN NEEDS THE OUTPUTS IN THE ORDER GIVEN IN THE FIRST ARRAY. SINCE YOU HAVE SORTED, THE ORDER CHANGES. HENCE YOU WONT GET THE OUTPUT IN THE SAME ORDER.
//{
//   sort( arr1, arr1 + n );
//   sort ( arr2, arr2 + m );
//   int i =0;
//   int j =0;
//   for( int i =0; i < n; )
//   {
//       if( arr1[i] == arr2[j] )
//       {
//           cout << arr1[i] << " ";//Here we just we need to print the elements and no need to return them. Only in sums where we need to return them, we store them and hence create a different array for it.
//           j++;
//           i++;
//       }
//       else
//       {
//           if( arr1[i] < arr2[j] )
//           {
//               i++;
//           }
//           else
//               j++;
//       }
//   }
//}
// Since we are dealing with intersection, if either of the 2 arrays end our work is finished. So we usually deal with the smaller ones so that we can get done with our work fast, but here we don't know their sizes while coding and come to know about their sizes only at runtime. So we are randomly taking anyone.
// Once any one of the arrays gets exhausted, there is no point in doing any more comparision.
void intersection ( int arr1[], int arr2[], int size1, int size2 ){
    int size = max(size1, size2 );
    int final[size]; // There was no need to create a new array for the output, you could have simply done cout.
    int z = 0;
    for( int i = 0; i < size1; i++ ){
        for( int j = 0; j < size2; j++ ){
            if( arr1[i] == arr2[j] ){
                arr2[j] = INT_MAX;
                final[z] = arr1[i];
                z++;
                break;
            }
        }
    }
    for( int i = 0; i < z; i++ ){
        cout << final[i] << " ";
    }
}

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
