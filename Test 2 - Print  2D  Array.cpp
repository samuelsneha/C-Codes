#include<bits/stdc++.h>
using namespace std;

void print2DArray(int **input, int row, int col)
{
    for( int b = row; b > 0; b-- )//using it indirectly to control rows
    {
        int i = row - b;//determines i
        for( int k = 1; k <= b; k++ ) //number of times of a particular row
        {
            for( int j = 0; j < col; j++ ) //determines column
            {
                cout << input[i][j]<<' ';
            }
            cout << endl;
        }
    }
}

int main()
{
    int row,col,i,j;
    cin >> row >> col;
    int **input = new int *[row];
    for (int i = 0; i < row; i++)
    {
     input[i] = new int[col];
     for (int j = 0; j < col; j++)
         {
            cin >> input[i][j];
         }
    }
    print2DArray( input , row, col );
}
