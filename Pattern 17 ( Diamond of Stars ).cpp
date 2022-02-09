///NOTE: N is always odd here in this question according to Coding Ninjas
/// SEE HERE, THE ENTIRE DIAMOND IS DIVIDED INTO TWO PARTS - a) UPPER AND b) LOWER. FURTHER a) UPPER AND b) LOWER BOTH ARE INDIVIDUALLY DIVIDED INTO TWO PARTS - a) SPACE AND b) STARS.

#include<bits/stdc++.h>
using namespace std;

/*int main()
{
int i=1;
int n;
cin >> n;
int n1=(n+1)/2;
int n2 = n-n1;


while ( i<= n1){
    int j=1;
    while(j<=n1-i)
    {
        cout<<" ";
        j++;
    }
    int k=1;
    while(k<=2*i-1)
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
    i++;
}
int l=n2;
int m=1;
while(m<=n2)
{ int space=1;
 while(space<=m)
 {
     cout<<" ";
     space++;
 }
 int star=1;
 while(star<=2*l-1)
 {
     cout<<"*";
     star++;
 }
 l--;
 m++;
 cout<<endl;

}
}*/

int main()
{
    int rows;
    cin >> rows;
    int k = ( rows - 1 )/2;
    int q = rows - 1;
    int x = ( rows - 1 )/2;
    int z = rows -2;

/// a) UPPER
    for( int i = 1; i <= ( rows +1 )/2; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
    {
        //Logic for Upper Part Space ( a).1 )
        for( int j = 1; j <= k; j++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
        k--;
        //Logic for the Upper Part Star character ( a).2 )
        for( int p = 1 ; p <= (2*i)-1 ; p++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << '*';// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
        cout << endl;// TO GO TO THE NEXT LINE
    }
/// b)  LOWER
    for( int i = (( rows + 1 ) /2) + 1; i <= rows ; i++ )// THE FIRST FOR LOOP IS FOR ROWS ie. THE NUMBER OF ROWS THATS NEEDS TO BE PRINTED
    {   //Logic for Lower Part Space   ( b).1 )
        for( int r = 1; r <= rows - q && r <= x; r++  )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << " ";// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
        q--;
        //Logic for the Lower Part Star character  ( b).2 )
        for( int y = 1 ; y <= z ; y++ )//THE SECOND FOR LOOP IS FOR COLUMNS ie. THE NUMBER OF COLUMNS EACH ROW SHOULD HAVE
        {
            cout << '*';// THEN AT LAST YOU HAVE TO PRINT WHHICH CHARACTER/VALUE NEEDS TO BE PRINTED. EITHER YOU WILL HAVE TO MANIPULATE THE VALUE OR DIRECTLY PRINT THE CHARACTER REQUIRED DIRECTLY.
        }
         z = z - 2;
         cout << endl;// TO GO TO THE NEXT LINE
     }

    return 0;
}

