#include <bits/stdc++.h>
using namespace std;

void print(int num,string arr[],string output)
{
    if(num==0 || num==1)
    {
        cout<<output<<endl;
        return;
    }
    int m=num%10;
    for(int i=0;i<arr[m].length();i++)
    {
        print(num/10,arr,arr[m][i]+output);//  for m = 3 = def, arr[m][0] means the 0th element of def ie.d, arr[m][1] means the 1st element of def ie. e  and arr[m][2] means the 2nd element of def ie. f.

    }
}

void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.

    int k=num,r;
    bool flag=true;
    while(k!=0)
    {
        r=k%10;
        if(r==0 || r==1)
        {
            flag=false;
            break;
        }
        k=k/10;
    }
    if(flag==false)
        return;*/
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    print(num,arr,"");
}
int main()
{
    int num;
    cin >> num;

    printKeypad(num);
}






