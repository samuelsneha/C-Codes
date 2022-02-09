#include<bits/stdc++.h>
using namespace std;

int returnPermutations(string input, string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    int k=0;
    for(int i=0;i<input.size();i++)
    {
        string temp[1000]; // it stores the o/p whcih output gives
        int size = returnPermutations(input.substr(0,i) + input.substr(i+1) , temp );
 // bc and cb - 2                           // " "     +     bc              // " "
                 //
        for(int j=0;j<size;j++)
        {
            output[k]=input[i]+temp[j];
                     // a     +    bc
                     // a     +    cb
            k++;
        }
    }
    return k;
}
// The commented examples are only for first iteration.

int main()
{
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
