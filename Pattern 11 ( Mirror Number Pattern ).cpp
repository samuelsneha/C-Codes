#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//    int rows;
//    cin >> rows;
//    int k =1;

//    for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
//    {
        // Logic for spaces
//        for( int j = 1 ; j <= rows - k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//        {
//            cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//        }
//        k++;
        // Logic for values
//        int p = 1;
//        for( int j = 1 ; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//        {
//            cout << p;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//            p++;
//        }
//        cout << endl; // For new line. Go to the next line.
//    }
//    return 0;
//}


int main(){
    int x = 1;
    int rows;
   // cout << "Enter the number of rows";
    cin >> rows;
    int a = rows - 1;
    for( int i = 1; i <= rows; i++ ){

        for( int j = 1; j <= a; j++ ){
            cout << " ";
        }
        a--;
        x = 1;
        for( int j =1; j <= i; j++ ){
            cout << x ;
            x++;
        }
        cout << endl;
    }
    return 0;
}
