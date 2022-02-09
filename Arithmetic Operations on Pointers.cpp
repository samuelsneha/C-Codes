#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i =10;
    int * pi = &i;
    cout << pi << endl;
    pi = pi + 2;
    cout << pi << endl;
    pi = pi + 4;
    cout << pi << endl;
    double d = 104.67;
    double * dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;
}
