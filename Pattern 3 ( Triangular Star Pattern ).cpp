#include<iostream>
using namespace std;

/*int main(){
int n;
int pos;
int i=1;
cin >> n;
while( i<=n) {
int space= 1;
while( space<= n-i){
cout << " ";
space=space +1;
}
pos=1;
while ( pos <= (2*i)-1){
cout <<  "*" ;
pos=pos+1;
}
cout << endl;
i=i+1;
}
}*/
int main()
{
    int rows;
    cin >> rows;
    int k = 1;
    int p = 0;


 for ( int i =1; i <= rows; i ++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
 {

/// For spaces - Logic
     for( int j = 1 ; j <= rows - k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
     {
        cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
     }
/// For Stars - Logic
     for( int j = 1; j <= i + p; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
     {
         cout << '*';// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
     }
     cout << endl;
     k++;
     p++;
 }
 return 0;

}
