#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int rows;
//     cin >> rows;
//     int x,y,p,r;
//     x = y = 2;
//     p = r = 1;
//     int q = 1;

//     for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
//     {
//         //Logic for Space
//         for( int s = 1; s <= rows - q; s++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//         {
//             cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//         }
//         q++;
//         //Logic of the values for the first half of the pattern
//         r = p;
//         for( int j = 1 ; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//         {
//             cout << r;// THEN AT LAST YOU HAVE TO PRINT WHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//             r++;
//         }
//         p++;
//         //Logic of the values for the last half of the pattern
//         if( i >= 2 && i <= rows )
//         {
//              x = y;
//             for( int k = 1; k <= i - 1; k++  )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//             {
//                   cout << x;// THEN AT LAST YOU HAVE TO PRINT WHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//                   x--;
//             }
//             y = y + 2;
//         }
//         cout << endl;// TO GO TO THE NEXT LINE
//     }
//     return 0;
// }


int main(){
    int rows, y;
    //cout << "Enter the number of rows";
    cin >> rows;
    int x = rows - 1;
    int a = 0, z = 0;
    for( int i = 1; i <= rows; i++ ){
        for( int j = 1; j <= x; j++ ){
            cout << " ";
        }
        x--;
        a++;
        int p = a;
        for( int j = 1; j <= i; j++ ){
            cout << p;
            p++;
        }
        if( i > 1 ){
             z = z + 2;
             y = z;
            for( int j = 1; j <= i - 1;  j++){
                cout << y;
                y--;
            }
        }
        cout << endl;
    }
}
