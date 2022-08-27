#include<bits/stdc++.h>
using namespace std;
/*void Leaders(int* arr,int len)
{
    int maxi=INT_MIN;
    int temp[1000000];
    int j=0;
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]>=maxi)
        {
            temp[j]=arr[i];
            j++;
            maxi=arr[i];
        }
    }
    for(j-=1;j>=0;j--)
    {
        cout<<temp[j]<<' ';
    }*/
/*void leadersinarray(int* arr,int len)
{

   for (int i = 0; i <len; i++)
    {
        int j;
        for (j = i+1; j <len; j++)
        {
            if (arr[i] < arr[j])
                break;
        }
        if (j == len) // the loop didn't break. Basically we are just checking whether the ith element is greater till the end of the array. And if yes then print that ith element.
            cout << arr[i] << " ";
  }
}
int main()
{
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ )
        {
            cin >> arr[i];
        }
        leadersinarray( arr, n );
}*/
void Leaders( int arr[], int size ){
    int  j = 0;
    for( int i = 0; i < size; i ++ ){
        for( j = i + 1; j < size; ){
            if( arr[i] >= arr[j] ){
                j++;
            }
            else{
                break;
            }
        }
        if( j == size )
            cout << arr[i] << " ";
    }
}
int main(){
   int n;
   cin >> n;
   int arr[n];
   for( int i = 0; i < n; i++ ){
      cin >> arr[i];
   }
   Leaders( arr, n );
   return 0;
}

