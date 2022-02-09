#include <bits/stdc++.h>
using namespace std;

int keypad(int num, string output[], string table[])
{
    if( num ==  0 )
    {
      output[0] = "";
      return 1;
    }
    int lastDigit=num%10;
    int smallNumber=num/10;
    string smallOutput[500];
    int smallCount=keypad(smallNumber,smallOutput,table);
    string op=table[lastDigit];
    int k=0;
    for(int i=0;i<op.size();i++)
    {
        for(int j=0;j<smallCount;j++)
        {
            output[k]=smallOutput[j]+op[i];
            k++;
        }
    }
    return k;
}
int keypad(int num, string output[])
{
    string table[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int ans = keypad(num, output, table);
    return ans;
}
int main()
{
    int num;
    cin >> num;
    string output[1000];
    int count = keypad(num, output);
    for(int i = 0; i < count ; i++)
    {
        cout << output[i] << endl;
    }

}












