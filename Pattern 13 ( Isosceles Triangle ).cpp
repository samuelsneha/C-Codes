#include<iostream>
using namespace std;
/*int main(){
int i=1;
int n;
cin >> n;
while( i<=n){
int space=1;
while( space <=n-i){
cout << " ";
space++;
      }
int j=1;
while( j<=i){
cout << j;
j++;
     }
int k= i-1;
while ( k >=1){
cout << k;
k--;
    }
cout << endl;
i=i+1;
   }
}
*/

int main()
{
    int rows;
    cin >> rows;
    int x,y;
    x = y = 1;
    int q = 1;

    for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
    {
        //Logic for Space
        for( int s = 1; s <= rows - q; s++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
        q++;
        //Logic of the values for the first half of the pattern
        int p = 1;
        for( int j = 1 ; j <= i; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << p;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
            p++;
        }
        //Logic of the values for the last half of the pattern
        if( i >= 2 && i <= rows )
        {
             x = y;
            for( int k = 1; k <= i - 1; k++  )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
            {
                  cout << x;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
                  x--;
            }
            y++;
        }
        cout << endl;// TO GO TO THE NEXT LINE
    }
    return 0;
}

