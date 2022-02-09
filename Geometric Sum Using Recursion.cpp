///Only thing you need to remember and NOT TO FORGET in this sum is that you have to use DOUBLE DATATYPE.
#include<bits/stdc++.h>
using namespace std;

double geometricSum(int k)
{
    if ( k == 0 )
    {
        return 1;
    }

    double halfoutput = geometricSum( k - 1);
    double output = halfoutput + pow(0.5 , k);
    return output;
}

int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
