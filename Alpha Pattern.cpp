#include <iostream>
using namespace std;
int main() {
int n;
char values ;
char  nextrow = 'A';
cin >> n;
int i =1;
while( i<=n){
int j=1;
values = nextrow;
while ( j <=i) {
cout << values;
j++;
    }
cout << endl;
nextrow++;
i=i+1;
  }
}



//#include<iostream>
// using namespace std;
// int main(){
// int i=1,n;
//cin>>n;
//  while(i<=n){
//    int j=1;
//    char ch='A'+i-1;
//    while(j<=i){
//        cout<<ch;
//        j++;
//    }
//    cout<<endl;
//    i++;
// }
//}
