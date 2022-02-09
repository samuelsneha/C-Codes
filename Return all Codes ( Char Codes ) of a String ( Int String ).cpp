#include<bits/stdc++.h>
using namespace std;

int getCodes(string input, string output[])
{
    if(input[0] == '\0')// base condition
    {
        output[0] = "";
        return 1;
    }
    int first = input[0] - 48;  // char to integer
    char firstChar = first + 'a' - 1;  // integer to char
    char secondChar = '\0';
    string smallOutput1[500];
    string smallOutput2[500];
    int size1 = getCodes(input.substr(1), smallOutput1);
    int size2 = 0;
    if(input[1] != '\0') // checking whether input[1] exists
    {
        int second = first * 10 + input[1] - 48;
    //the above line works as: ( 1 -'0') ie. converting 0th  element to its interger form.( Already done at line 10 and stored in first variable). Then multiply it with 10 ie. 1*10 = 10.
    // Then add the integer form of the 1st index element ( 1 - '0') to 10.
    // So, 1*10 + 1 = 11
        if(second >= 10 && second <= 26)
        {
            secondChar = second + 'a' - 1;
            size2 = getCodes(input.substr(2), smallOutput2);
        }
    }
    int k = 0;
    for(int i = 0; i < size1; i++)
    {
        output[k] = firstChar + smallOutput1[i];
        k++;
    }
    for(int i = 0; i < size2; i++)
    {
        output[k] = secondChar + smallOutput2[i];
        k++;
    }
    return k;
}

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
