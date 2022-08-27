#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    int k = 1;


 for ( int i =1; i <= rows; i ++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
 {

/// For spaces - Logic
     for( int j = 1 ; j <= rows - k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
     {
        cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
     }
/// For Values - Logic
     for( int j = 1; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
     {
         cout << i + j - 1;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
     }
     cout << endl;
     k++;
 }
 return 0;

}



//int main(){
//    int rows, num;
    //cout << "Enter the number of rows" << endl;
//    cin >> rows;
//    int a = rows - 1; //Earlier this 'a' was kept above the line cin >> rows; from where we take rows input and because rows was not defined at that place we got TLE.
//    for( int i = 1; i<= rows; i++ ){

//        for( int j = 1; j <= a; j++ ){
//            cout << " ";
//        }
//        num = i;
//        for( int j = 1; j<= i; j++,num++ ){
//            cout << num;
//        }
//        cout << endl;
//        a--;
//    }
//    return 0;
//
//}


