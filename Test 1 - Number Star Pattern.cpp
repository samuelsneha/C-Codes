#include<bits/stdc++.h>
using namespace std;

/// HERE WE DIVIDE THE PATTERN INTO THREE PARTS - 1) THE SPACES IN THE LEFT 2) HALF- LEFT PART OF THE PATTERN 3) HALF - RIGHT PART OF THE PATTERN.
//int main()
//{
//   int rows;
//   cin >> rows;
//   int s = 1;
//   for( int i = 1; i <= rows; i++ ) //FOR ROWS
//   {
//       for( int r = 1; r <= rows - s; r++ )// FOR COLUMNS - SPACES LOGIC
//       {
//          cout << " ";
//       }
//       s++;
//       int k = i;
//       for ( int j = 1; j <= i; j++ ) // FOR COLUMNS - FOR FIRST HALF - RIGHT OF THE DIAGRAM
//       {
//           cout << k;
//           k--;
//       }
//       if( i >= 2 && i <= rows )
//       {
//           int q = 2;
//           for( int p = 1; p <= i-1; p++ ) // FOR COLUMNS - FOR SECOND HALF - LEFT  OFTHE DIAGRAM
//           {
//               cout << q;
//               q++;
//           }
//        }
//        cout << endl;// TO GO TO THE NEXT LINE
//    }
//}

int main(){
    int N , a = 1, p = 2, k;
    // cout << "Enter the number of rows";
    cin >> N;
    int w = N;
    for( int i = 1; i <= N; i++ ){

        int b = a;
        for( int j = 1; j <= w; j++ ){
                cout << b;
                b++;
        }
        if( i > 1 ){
           for( int j = 1; j <= p; j ++ ){
               cout << "*";
            }
            p = p + 2;
        }
        k = w;
        for( int j = w; j >= 1; j-- ){
            cout << k;
            k--;
        }
        w--;
        cout << endl;
    }
    return 0;
}
