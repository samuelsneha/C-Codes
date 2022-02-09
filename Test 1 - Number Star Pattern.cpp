#include<bits/stdc++.h>
using namespace std;

/*int main(){
int i=1;
int n;
cin >> n;
while(i<=n){

    int start =1;
    //int k=0;
    while(start <= n-i+1) {
        cout <<  start;
        //k++;
        start++;
    }
    int r=0;
    int star=1;
    // for(i>=2; star<= i+r; star++){
    //    cout <<"*";
   // }
    while(star<=2*(i-1))
    {
        cout<<"*";
        star++;
    }
int t=0;
int  u = n-i+1;
while( u >=1){
cout << u;
u--;
}
cout << endl;
r++;
t--;
i=i+1;
 }
}*/


/// HERE WE DIVIDE THE PATTERN INTO THREE PARTS - 1) THE SPACES IN THE LEFT 2) HALF- LEFT PART OF THE PATTERN 3) HALF - RIGHT PART OF THE PATTERN.
int main()
{
   int rows;
   cin >> rows;
   int s = 1;
   for( int i = 1; i <= rows; i++ ) //FOR ROWS
   {
       for( int r = 1; r <= rows - s; r++ )// FOR COLUMNS - SPACES LOGIC
       {
          cout << " ";
       }
       s++;
       int k = i;
       for ( int j = 1; j <= i; j++ ) // FOR COLUMNS - FOR FIRST HALF - RIGHT OF THE DIAGRAM
       {
           cout << k;
           k--;
       }
       if( i >= 2 && i <= rows )
       {
           int q = 2;
           for( int p = 1; p <= i-1; p++ ) // FOR COLUMNS - FOR SECOND HALF - LEFT  OFTHE DIAGRAM
           {
               cout << q;
               q++;
           }
        }
        cout << endl;// TO GO TO THE NEXT LINE
    }
}
