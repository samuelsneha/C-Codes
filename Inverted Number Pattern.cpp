#include <iostream>
using namespace std;
int main(){
int i=1;
int n;
int nextrow;
cin >> n;
nextrow=n;
while( i<=n){
int j=1;
while( j <= nextrow){
cout << nextrow;
j++;
      }
cout << endl;
nextrow--;
i=i+1;
   }
}
