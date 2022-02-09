#include<bits/stdc++.h>
using namespace std;

void spiralprint( int **mat, int m, int n, int startrow, int startcol, int endrow, int endcol )
{

    while( startrow <= endrow && startcol <= endcol )
    {
        for( int i = startcol; i <= endcol; i++)
        {
            cout << mat[startrow][i] << " "; //FIRSTROW
        }
        startrow++;
        for( int i = startrow; i <= endrow; i++ )
        {
            cout << mat[i][endcol] << " ";  //LAST COLUMN
        }
        endcol--;
        if( endrow > startrow)
        {
         for( int i= endcol; i >= startcol; i-- )
         {
             cout << mat[endrow][i] << " ";    //LAST ROW
         }
         endrow--;
        }
        if( startcol < endcol)
        {
            for( int i = endrow; i >= startrow; i--)
            {
                cout << mat[i][startcol] << " ";       //FIRST COLUMN
            }
            startcol++;
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while( t--)
{

    int startrow = 0;
    int startcol = 0;
    int m,n,i,j;
    cin >> m >>n;
    int**mat = new int *[m];
    int endrow = m - 1;
    int endcol = n - 1;
    for( int i=0; i < m; i++ )
    {   mat[i] = new int[n];
        for( int j=0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    spiralprint( mat, m ,n, startrow, startcol, endrow, endcol);
}
}

/*void spiralprint(char input[][1000], int m, int n, int startrow, int startcol, int endrow, int endcol)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = m - 1;

    //SpiralPrint
    while (startRow <= endRow && startCol <= endCol)
    {
        //First row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << input[startRow][i] << " ";
        }
        startRow++;

        //Last Column
        for (int i = startRow; i <= endRow; i++)
        {
            cout << input[i][endCol] << " ";
        }
        endCol--;

        //last row
        if (endRow > startRow)
        {
            for (int i = endCol; i >= startCol; i--)
            {
                cout << input[endRow][i] << " ";
            }
            endRow--;
        }

        //first Column
        if (endCol > startCol)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << input[i][startCol] << " ";
            }
            startCol++;
        }
    }
}void spiralprint(char input[][1000], int m, int n, int startrow, int startcol, int endrow, int endcol)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = m - 1;

    //SpiralPrint
    while (startRow <= endRow && startCol <= endCol)
    {
        //First row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << input[startRow][i] << " ";
        }
        startRow++;

        //Last Column
        for (int i = startRow; i <= endRow; i++)
        {
            cout << input[i][endCol] << " ";
        }
        endCol--;

        //last row
        if (endRow > startRow)
        {
            for (int i = endCol; i >= startCol; i--)
            {
                cout << input[endRow][i] << " ";
            }
            endRow--;
        }

        //first Column
        if (endCol > startCol)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << input[i][startCol] << " ";
            }
            startCol++;
        }
    }
} */
