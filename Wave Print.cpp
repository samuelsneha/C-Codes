#include<bits/stdc++.h>
using namespace std;
/*void waveprint( int **mat, int m, int n )
{


    for ( int j=0; j < n; j++)
    {
        if ( j % 2 == 0)
        {
            for ( int i=0; i < m; i++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else
            for( int i= m-1; i >= 0; i--)
        {
            cout << mat[i][j] << " ";
        }
    }


}
int main()
{
    int t;
    cin >> t;
    while( t--)
{
    int m,n,i,j;
    cin >> m >> n;
    int **mat = new int *[m];
    for (int i = 0; i < m; i++)
		{
			mat[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				cin >> mat[i][j];
			}
		}
    waveprint( mat, m, n);
}
}*/
/*void wavePrint( int matrix[][], int m, int n )
{
    for( int j = 0; j < n; j++ )
    {
        if( j % 2 == 0 )
        {
            for( int i = 0; i < m; i++ )
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
            for( int i = m; i >= 0; i -- )
            {
                cout << matrix[i][j] << " ";
            }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while( tc -- )
    {
      int m, n;
      cin >> m >> n;
      int matrix [m][n];
      for( int i = 0; i < m; i++ )
      {
          for( int j = 0; j < n; j++ )
          {
              cin >> matrix[i][j];
          }
          cout << endl;
      }
      wavePrint( matrix, m , n );
    }
    return 0;
}*/
void wavePrint( int **a, int m, int n ){
    for( int k = 0; k < n; k++ ){
        if( k % 2 == 0 ){
            for( int i = 0; i < m; i++ ){
                cout << a[i][k] << " ";
            }
        }
        else{
            for( int i = m - 1; i >= 0; i-- ){
                cout << a[i][k] << " ";
             }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while( t > 0 ){
        int m, n;
        cin >> m >> n;
        int **a = new int *[m]; //Make a habit to understand and implement this when you have to pass 2D Array to the function as a parameter.
        for( int i = 0; i < m; i++ ){
            a[i] = new int[n];//Make a habit to understand and implement this when you have to pass 2D Array to the function as a parameter.
            for( int j = 0; j < n; j++ ){
                cin >> a[i][j];
            }
        }
        wavePrint( a, m, n );
        t--;
        return 0;
    }
}
