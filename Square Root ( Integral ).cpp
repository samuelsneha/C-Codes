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

//int main()
//{

//    int num;
//    cin>> num;
//    int max = 1;
//    int a;
//    for( int i =1; i <=9; i++ )
//    {
//        int ans = i*i;
//        if ( ans > max && ans <= num )
//         {
//             max = ans;
//             a = i;
//         }
//    }
//    cout << a;
//}


int main(){
   int num;
    // cout << "Enter the number";
    cin >> num;
    for( int i = 1; ; ){
        if( pow(i, 2) <= num )
            i++;
        else{
            cout << i - 1;
            break;
        }
    }
    return 0;
}
