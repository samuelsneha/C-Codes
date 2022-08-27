#include<bits/stdc++.h>
using namespace std;

/// THIS PATTERN  IS DIVIDED INTO 3 PARTS - a) THE VALUES TO THE LEFT b) THE STARS IN BETWEEN c) THE VALUES TO THE RIGHT.
//int main()
//{
//    int rows;
//    cin >> rows;
//    int a = 0;
//    int m = 0;
//    int p = 0;
//    int b = rows;

//    for( int i = 1; i <= rows; i++ )// FOR ROWS
//    {
//          int k =1;
//          for( int j = 1; j <= rows - a; j++ )// FOR COLUMNS - FIRST PART OF THE DIAGRAM
//          {
//              cout << k;// PRINTING THE FIRST PART OF THE DIAGRAM WHICH IS OF VALUES
//              k++;
//          }
//          a++;
//          if( i >= 2 && i <= rows )
//          {
//              for( int j  = 1; j <= i + m; j++ )// FOR COLUMNS - SECOND PART OF THE DIAGRAM
//              {
//                  cout <<'*';// PRINTING THE SECOND PART OF THE DIAGRAM WHICH IS OF STARS
//              }
//              m++;
//          }
//          int c = b;
//          for ( int j = 1; j <= rows - p; j++ )// FOR COLUMNS - THIRD PART OF THE DIAGRAM
//          {
//             cout << c;// PRINTING THE THIRD PART OF THE DIAGRAM WHICH IS OF VALUES
//             c--;
//          }
//          p++;
//          b--;
//          cout << endl;// TO GO TO THE NEXT LINE
//    }

//    return 0;

//}

int main(){
    int N, p = 1 , a = 2 ;
    // cout << "Enter the number of rows";
    cin >> N;
    int spacesH = N - 1;
    for( int i = 1; i <= N; i++ ){
    //for spaces
        for( int j = 1; j <= spacesH; j++ ){
            cout << " ";
        }
        spacesH--;
   //for left
        int s = p;
        for( int j = 1; j <= i; j++ ){
            cout << s;
            s--;
        }
        p++;
   //for right
        int b = a;
        for( int j = 1; j <= i - 1; j++ ){
            cout<< b;
            b++;
        }
        cout << endl;
    }
    return 0;
}
