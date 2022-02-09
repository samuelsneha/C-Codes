#include<bits/stdc++.h>
using namespace std;
/*int main (){
int num;
int sq;
int result=0;
int i;
cin >> num;
for ( i=1 ; i*i<= num;i++){
result= i*i;
sq=i;
   }
cout << sq;

}*/

int main()
{

    int num;
    cin>> num;
    int max = 1;
    int a;
    for( int i =1; i <=9; i++ )
    {
        int ans = i*i;
        if ( ans > max && ans <= num )
         {
             max = ans;
             a = i;
         }
    }
    cout << a;
}
