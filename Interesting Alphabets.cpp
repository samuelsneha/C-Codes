#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int i=1,j;
    char current;
    char initial = 'A'+ n-1;

    while(i<=n){
        j=1;
        current = initial - i + 1;
        while(j<=i){
        cout<<current;
        current++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


//#include<iostream>
//using namespace std;

// int main() {
 //   int n;
//    char ch='A';
//    cin>>n;
 //   for(int i=0;i<n;i++){
  //      for(int j=0;j<=i;j++){
  //          cout<<(char)(65+n-1-i+j);
  //      }
  //      cout<<endl;
 //   }
// }
