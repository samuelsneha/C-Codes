#include<iostream>
using namespace std;
//int main(){
//int n;
//cin >> n;
//int i=1;
//while ( i<=n){
// for ( int pos=i; pos >=1; pos--) {
// cout << pos;
//     }
// cout << endl;
// i=i+1;
//   }
//}
//  int pos =i;
//  while ( pos >=1){
//  cout << pos;
//  pos --;
//    }
//  cout << endl;
//   i=i+1;
//     }
//   }


int main()
{
    int rows;
    cin >> rows;

    for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
    {
        int p = i;
        for( int j = 1 ; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << p;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
            p--;
        }
        cout << endl;
    }
    return 0;
}

