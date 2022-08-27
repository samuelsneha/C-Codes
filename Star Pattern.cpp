#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//    int rows;
//    cin >> rows;
//    int k = 1;
//    int p = 0;
// for ( int i =1; i <= rows; i ++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
// {
/// For spaces - Logic
//     for( int j = 1 ; j <= rows - k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//     {
//        cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//     }
/// For Stars - Logic
//     for( int j = 1; j <= i + p; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//     {
//         cout << '*';// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//     }
//     cout << endl;
//     k++;
//     p++;
// }
// return 0;
//}


//int main(){
//    int rows;
    // cout << "Enter the number of rows";
//    cin >> rows;
//    int a = rows;
//    for( int i = 0; i < rows; i++ ){

//        for( int j = 0; j < a-1; j++ ){
//            cout << " ";
//        }
//        for( int j = 1; j <= (2*i)+1; j++ ){
//            cout << "*";
//        }
//        a--;
//        cout << endl;
//    }
//    return 0;
//}

int main(){
    int rows;
    //cout << "Enter the number of rows";
    cin >> rows;
    int x = rows - 1;
    for( int i = 0; i< rows; i++ ){
        for( int j = 1; j <= x; j++ ){
            cout << " ";
        }
        x--;
        for( int j = 1;j <= 2*i+1; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
