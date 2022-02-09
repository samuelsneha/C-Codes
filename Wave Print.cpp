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
void wavePrint( int matrix[][], int m, int n )
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
}
