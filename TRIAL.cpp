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
