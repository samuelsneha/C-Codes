#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i =10;
    cout << &i << endl;
    int *p = &i; // creating a pointer p for storing the address of variable i
    cout << p << endl; // printing the pointer p. Remember we get the same value for p and &i because the address of i and value of pointer variable p will naturally be the same.
    cout << *p << endl;
    float j;
    cout << &j << endl;
    double k ;
    cout << &k << endl;

}
