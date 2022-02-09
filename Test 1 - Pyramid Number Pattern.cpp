#include<bits/stdc++.h>
using namespace std;

/*int main(){
int i=1;
int n;
cin >> n;
while (i<=n){
int space=1;
while( space <= n-i){
cout << " ";
space++;
       }
int value=i;
int j=1;
while ( j<= i){
cout << value;
value--;
j++;
    }

 int k=i-2;
  int m=1;
  int n=2;
  for ( i>= 2; m<=i-1; n++){
  cout << n;
  m++;
     }
cout << endl;
i=i+1;
   }
}*/

/// THIS PATTERN  IS DIVIDED INTO 3 PARTS - a) THE VALUES TO THE LEFT b) THE STARS IN BETWEEN c) THE VALUES TO THE RIGHT.
int main()
{
    int rows;
    cin >> rows;
    int a = 0;
    int m = 0;
    int p = 0;
    int b = rows;

    for( int i = 1; i <= rows; i++ )// FOR ROWS
    {
          int k =1;
          for( int j = 1; j <= rows - a; j++ )// FOR COLUMNS - FIRST PART OF THE DIAGRAM
          {
              cout << k;// PRINTING THE FIRST PART OF THE DIAGRAM WHICH IS OF VALUES
              k++;
          }
          a++;
          if( i >= 2 && i <= rows )
          {
              for( int j  = 1; j <= i + m; j++ )// FOR COLUMNS - SECOND PART OF THE DIAGRAM
              {
                  cout <<'*';// PRINTING THE SECOND PART OF THE DIAGRAM WHICH IS OF STARS
              }
              m++;
          }
          int c = b;
          for ( int j = 1; j <= rows - p; j++ )// FOR COLUMNS - THIRD PART OF THE DIAGRAM
          {
             cout << c;// PRINTING THE THIRD PART OF THE DIAGRAM WHICH IS OF VALUES
             c--;
          }
          p++;
          b--;
          cout << endl;// TO GO TO THE NEXT LINE
    }

    return 0;

}

