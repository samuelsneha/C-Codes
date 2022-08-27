#include<bits/stdc++.h>
using namespace std;

/*void largestroworcolumn( int **mat, int m, int n )
{   int sum1, sum2;
    int maximum = INT_MIN;
    int res;
    for( int i=0; i < m; i++)
    {   int sum1 = 0;
        for( int k=0; k < n; k++)
        {
            sum1 = sum1 + mat[i][k];
        }
            if (sum1 > maximum )
              {
                  maximum = sum1;
                  res =i;
              }
    }
    for ( int j =0; j < n; j++ )
    {   int sum2 = 0;
        for ( int k =0; k < m; k++)
        {
            sum2 = sum2 + mat[k][j];
        }
            if ( sum2 > maximum)
              {
                  maximum = sum2;
                  res = j;
              }
    }
    if (sum1 == maximum)
    {
        cout << "row" << " " << res<< " " << maximum;
    }
    else
        cout << "column" << " " << res << " " << maximum;
}
int main()
{
      int t;
      cin >> t;
      while( t--)
{     int m,n,i,j;
      cin >> m >> n;
      int sum1, sum2;
      int **mat = new int *[m];
                  for (int i = 0; i < m; i++)
                    {
                        mat[i] = new int[n];
                        for (int j = 0; j < n; j++)
                        {
                            cin >> mat[i][j];
                        }
                    }

    largestroworcolumn( mat, m, n);
}
}*/
/*findLargest( int matrix[m][n], int rows[], int cols[] )
{
    for( int i = 0; i < m; i++ )
    {
       for( int j = 0; j < n; j++ )
      {
          cols[j] = cols[j] + matrix[i][j];
      }
    }
    for( int j = 0; j < n; i++ )
    {
       for( int i = 0; i < m; i++ )
      {
          rows[i] = rows[i] + matrix[i][j];
      }
    }
    int Cmax = 0, Rmax = 0, Cindex = 0; Rindex = 0;
    for( int i = 0; i < n; i++ )
    {
        if( cols[i] > Cmax )
        {
            Cmax = cols[i];
            Cindex = i;
        }
    }
    for( int i = 0; i < m; i++ )
    {
        if( rows[i] > Rmax )
        {
            Rmax = rows[i];
            Rindex = i;
        }
    }
    if ( Cmax > Rmax )
        cout << " column " << " " << Cindex << " " << Cmax << endl;
    else
         cout << " row " << " " << Rindex << " " << Rmax << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while( tc-- )
    {
      int m , n;
      cin >> m >> n;
      int rows[m] = {};
      int cols[n] = {};
      int matrix [m][n];
      for( int i = 0; i < m; i++ )
      {
          for( int j = 0; j < n; j++ )
          {
              cin >> matrix[i][j];
          }
          cout << endl;
      }
      findLargest( matrix, rows, cols );
    }
    return 0;
}*/

void findLargest ( int **a, int m, int n ){
    int CLargest = 0, RLargest = 0, CNo = 0, RNo = 0, largest = 0, No = 0;
    for( int j = 0; j < n; j++ ){
        int sum = 0;
        for( int i = 0; i < m; i++ ){
            sum = sum + a[i][j];
        }
        if( sum > CLargest ){
            CLargest = sum;
            CNo = j;
        }
    }
    for( int i = 0; i < m; i++ ){
        int sum = 0;
        for( int j = 0; j < n; j++ ){
            sum = sum + a[i][j];
        }
        if( sum > RLargest ){
            RLargest = sum;
            RNo = i;
        }
    }
    if( m == 0 && n == 0 ){
        largest = INT_MIN;
        No = 0;
        cout << "row" << " "<< No << " "<< largest << endl;
    }
    else if( RLargest >= CLargest ){
        largest = RLargest;
        No = RNo;
        cout << "row" << " "<< No << " "<< largest << endl;
    }
    else{
        largest = CLargest;
        No = CNo;
        cout << "column" << " "<< No << " "<< largest << endl;
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
        findLargest( a, m, n );
        t--;
        return 0;
    }
}
