#include<bits/stdc++.h>
using namespace std;

 void display ( string str1 )
{
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    cout << sum << endl;
    cout << str1;// Here Hello World is not taken in cin and its directly to do with cout. If you would have used cin then it wouldn't be possible because cin stops at spaces. But it could be possible using cin.get / cin.getline/ getline.
}
int main()
{
    string str1 = " Hello World ";
    display ( str1 );
    return 0;
}

