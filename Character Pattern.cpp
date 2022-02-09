#include <iostream>
using namespace std;
int main() {
int n;
char values ;
char  nextrow ='A';
cin >> n;
int i =1;
while( i<=n){
int j=1;
values = nextrow;
while ( j <=i) {
cout << values;
values++;
j++;
    }
cout << endl;
nextrow++;
i=i+1;
  }
}


     // Read input as specified in the question.
// Print output as specified in the question.
// 	*/
  //int N;
    //cin>>N;
    //int i=1;
    //while(i<=N){
     //   int j=1;
     //   char x='A'+i-1;
     //   while(j<=i){
     //       cout<<x;
     //       j++;
     //       x++;
     //   }
     //   cout<<endl;
     //   i++;
   // }
//}
