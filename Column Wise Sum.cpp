#include<bits/stdc++.h>
using namespace std;
/*int main()
{

    int m,n;
    cin >> m>>n;
      int **mat = new int *[m];
      int sum = 0;
                    for (int i = 0; i < m; i++)
                    {
                        mat[i] = new int[n];
                        for (int j = 0; j < n; j++)
                        {
                            cin >> mat[i][j];
                        }
                    }

    for( int j=0; j < n; j++ )
    {
        for( int k=0; k < m; k++ )
        {
            sum = sum + mat[k][j];
        }
        cout << sum << " ";
        sum = 0;
    }
}
int main()
{
    int m , n;
    cin >> m >> n;
    int matrix[m][n];
    int arr[n] = {0};/// THIS MEANS ONLY THE FIRST ELEMENT IN THE ARRAY IS 0, REST ALL ARE 0 BY DEFAULT.
//  int arr[n] = {}; THIS MEANS THAT ALL THE ELEMENTS IN THE ARRAY ARE SET 0 BY DEFAULT.
//  int arr[n] = {7}; THIS MEANS THAT ONLY THE FIRST ELEMENT IN THE ARRAY IS SET TO 7, REST ALL ARE SET TO 0 BY DEFAULT.

    for( int i = 0; i < m; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            cin >> matrix[i][j];
            arr[j] = arr[j] + matrix[i][j];
        }
        cout << endl;
    }
    for( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }
}*/

int main(){
    int m , n;
    cin >> m >> n;
    int a[m][n];
    for( int i = 0; i < m; i++ ){
        for( int j = 0; j< n; j++ ){
            cin >> a[i][j];
        }
    }
    for( int j = 0; j < n; j++ ){
        int sum = 0;
        for( int i = 0; i < m; i++ ){
            sum = sum + a[i][j];
        }
        cout << sum << " ";
    }
    return 0;
}
