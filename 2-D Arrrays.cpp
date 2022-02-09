/// CODE BOTH THE PARTS- ROW WISE AND COLUMN WISE AND SEE THE DIFFERENCE.
/// ALSO SEE THE DIFFERENT WAYS YOU CAN PRINT THE OUTPUT IN A MATRIX.
/// BUT TO INPUT ELEMENTS THERE IS ONLY ONE WAY - USING NESTED FOR LOOP.
#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//    int m,n;
//    cin >> m >> n;
//    int a[m][n];

/// 1) - PRINTING ROW WISE
/*    for( int i=0;i < m; i++)
    {
        for( int j=0; j < n; j++)
        {
            cin >> a[i][j] ; // JUST ACCEPT THAT THIS IS HOW YOU INPUT VALUES FOR THE 2D ARRAYS.
            cout << a[i][j] << " "; // THERE ARE MANY WAYS TO OUTPUT THOSE VALUES. THIS IS THE MOST EASIEST/SMALLEST AMONG THEM. YOU CAN ALSO USE A FOR LOOP TO PRINT LIKE ITS DONE IN COLUMN WISE PRINTING.
        }
        cout << endl;
    }
}*/

/// 2) PRINTING COLUMN WISE

/* for( int i=0; i < m; i++ )
 {
    for( int j=0; j < n; j++ )
    {
        cin>>a[i][j];
    }
 }
 for( int j=0; j < n; j++  )// This for loop is for printing. You can also print it in the loop where you take input the way you have done it in the Printing Row Wise part.
  {
      for( int i=0; i < m; i++)
      {
          cout << a[i][j] << " ";
      }
      cout << endl;
  }

}*/

/// FOR EG. 2 ROWS AND 3 COLUMNS ARE PRINTED IN ROW WISE AS - 1 2 3
///                                                           4 5 6
/// AND 2 ROWS AND 3 COLUMNS ARE PRINTED IN COLUMN WISE AS -  1 4
///                                                           2 5
///                                                           3 6 ( but actually this is not 2 rows and 3 columns. We actually get our desired output of 2 rows and 3 columns only by Printing Row Wise ).
/// SO BASICALLY YOU WONT GET YOUR DESIRED OUTPUT BY PRINTING COLUMN WISE. BUT BY ROW WISE YOU WILL GET.


/// 3) INITIALIZING ALL THE ELEMENTS IN THE 2D ARRAY
/*int main()
{
//    int a[2][3] = {}; This means that all the elements in the 2D Matrix are set to 0 by default.
//    int a[2][3] = {5}; This means only the first row - first column element has been initialized with 5, rest all are initialized with 0 by default.
//      int a[2][3] = {0};  This means only the first row - first column element has been initialized with 0, rest all are initialized with 0 by default.
    for( int i = 0; i < 2 ; i++ )
    {
        for( int j = 0; j < 3; j++ )
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}*/

/// 4) INITIALIZING ALL THE ELEMENTS IN 1D ARRAY

/*int size = 5;
int arr[size] = {10};
for( int i = 0; i < size; i ++ )
{
    cout << arr[i] << " ";
}
//  int arr[n] = {0}; THIS MEANS ONLY THE FIRST ELEMENT IN THE ARRAY IS 0, REST ALL ARE 0 BY DEFAULT.
//  int arr[n] = {}; THIS MEANS THAT ALL THE ELEMENTS IN THE ARRAY ARE SET 0 BY DEFAULT.
//  int arr[n] = {7}; THIS MEANS THAT ONLY THE FIRST ELEMENT IN THE ARRAY IS SET TO 7, REST ALL ARE SET TO 0 BY DEFAULT.
}*/
