#include <iostream>
using namespace std;
int main()
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
}
