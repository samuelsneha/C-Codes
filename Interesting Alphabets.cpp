#include<iostream>
using namespace std;

// int main()
// {
//     int rows;
//     cin >> rows;
//     int a = 64 + rows;

//     for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
//     {
//         char b = a;
//         for( int j = 1 ; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
//         {
//             cout << b;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
//             b++;// WE CAN DO LIKE THIS INCREMENTING WITH CHARACTERS ALSO!!
//         }
//         a--;
//         cout << endl;
//     }
//     return 0;
// }

int main(){
    int rows;
    char  x;
    //cout << "Enter the number of rows";
    cin >> rows;
    char start = 65 + rows;

    for( int i = 1; i <= rows; i++ ){
        start--;
        x = start;
        for( int j = 1; j <= i; j++ ){
            cout << x;
            x++;
        }
        cout << endl;
    }

}
