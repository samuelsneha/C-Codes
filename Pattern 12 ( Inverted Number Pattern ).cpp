#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    int p = rows;
    int k = 0;

    for( int i = 1; i <= rows; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
    {
        for( int j = 1 ; j <= rows - k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << p;// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
        k++;
        p--;
        cout << endl;// TO GO TO THE NEXT LINE
    }
    return 0;
}